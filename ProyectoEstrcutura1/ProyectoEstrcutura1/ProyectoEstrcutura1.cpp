#include "ProyectoEstrcutura1.h"
#include <iostream>
#include <QMessageBox>
#include <QInputDialog>
#include <QDir>
#include "List.h"
#include "Queue.h"
#include "Stack.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <QFileDialog>
using namespace std;
enum ESTRUCTURA
{
    LISTA, QUEUE, STACK
};
List* lista;
Queue* queue;
Stack* stack = new Stack();
int estructura = 0;

ProyectoEstrcutura1::ProyectoEstrcutura1(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.listaEnlazada->setChecked(true);
    hideMenu();
}

ProyectoEstrcutura1::~ProyectoEstrcutura1()
{}


void ProyectoEstrcutura1::on_toolbarbutton_clicked() {
    switch (estructura) {
    case LISTA:
        ui.frame_opciones->show();
        break;
    case QUEUE:
        ui.frame_opciones->show();
        break;
    case STACK:
        ui.frame_opciones->show();
        break;
    }
}

void ProyectoEstrcutura1::on_crearlistabutton_clicked() {
    switch (estructura) {
    case LISTA:
        lista = new List();
        ui.toolbarbutton->setText("Toolbar");
        refreshList();
        showMenu();
        break;
    case QUEUE:
        queue = new Queue();
        ui.toolbarbutton->setText("Toolbar");
        refreshList();
        showMenu();
        break;
    case STACK:
        stack = new Stack();
        queue = new Queue();
        ui.toolbarbutton->setText("Toolbar");
        refreshList();
        showMenu();
    }
}

void ProyectoEstrcutura1::on_editararchivobutton_clicked() {
    ui.toolbarbutton->setText("Toolbar");
    string archivo;
    archivo = QFileDialog::getOpenFileName(this, tr("Abrir Archivo"), "C://", "Archivo CSV (*.csv)").toStdString();
    ui.label_archivo->setText("Direccion del Archivo: " + QString::fromStdString(archivo));
    ifstream inFile(archivo);
    string line;
    showMenu();
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            stringstream s(line);
            int num;
            if ((s >> num).fail() || !(s >> std::ws).eof()) {
                QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
            }
            else {
                switch (estructura) {
                case LISTA:
                    lista->insertNode(num);
                    break;
                case QUEUE:
                    queue->enqueue(num);
                    break;
                case STACK:
                    stack->push(num);
                    break;
                }
            }
        }
        inFile.close();
        refreshList();
    }
    else {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Archivo no encontrado!"));
    }
}

void ProyectoEstrcutura1::on_guardarlistabutton_clicked() {
    bool ok;
    ui.toolbarbutton->setText("Toolbar");
    hideMenu();
    QString nameInput = QInputDialog::getText(this, tr("Listas Enlazadas"), tr("Nombre de archivo:"), QLineEdit::Normal, QDir::home().dirName(), &ok);
    string fileName = nameInput.toStdString() + ".csv";
    if (ok && !nameInput.isEmpty()) {
        ofstream outFile(fileName);
        while (outFile.is_open()) {
            for (int i = 0; i < lista->size(); i++) {
                outFile << lista->valueAt(i) << "\n";
            }
            outFile.close();
        }
        QMessageBox::information(this, tr("Listas Enlazadas"), tr("Archivo creado exitosamente!"));
    }
}

void ProyectoEstrcutura1::on_agregar_clicked() {
    QVBoxLayout* layout = new QVBoxLayout(this);
    string str_input = ui.txt_insertar->text().toStdString();
    cin >> str_input;
    stringstream s(str_input);
    int num_input;
    if ((s >> num_input).fail() || !(s >> std::ws).eof()) {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
    }
    else {
        switch (estructura) {
        case LISTA:
            num_input = stoi(str_input);
            lista->insertNode(num_input);

            break;
        case QUEUE:
            num_input = stoi(str_input);
            queue->enqueue(num_input);
            break;
        case STACK:
            num_input = stoi(str_input);
            stack->push(num_input);
            break;
        }
    }
    refreshList();
    ui.txt_insertar->clear();
}

void ProyectoEstrcutura1::on_buscar_clicked() {
    string str_valor = ui.txt_buscar->text().toStdString();
    cin >> str_valor;
    stringstream s(str_valor);
    int valor;
    if ((s >> valor).fail() || !(s >> std::ws).eof()) {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
    }
    else {
        valor = stoi(str_valor);
        switch (estructura) {
        case LISTA:
            if (lista->size() == 0)
                QMessageBox::warning(this, tr("Buscar"), tr("La lista esta vacia!"));
            else {
                bool exists = lista->contains(valor);
                if (exists)
                    QMessageBox::information(this, tr("Buscar"), tr("Se encontro el valor ingresado!"));
                else
                    QMessageBox::warning(this, tr("Buscar"), tr("No se pudo encontrar el valor ingresado!"));
            }
            break;
        case QUEUE:
            if (queue->getSize() == 0) {
                QMessageBox::warning(this, tr("Buscar"), tr("La lista esta vacia!"));
            }
            else {
                bool exists = queue->contains(valor);
                if (exists)
                    QMessageBox::information(this, tr("Buscar"), tr("Se encontro el valor ingresado!"));
                else
                    QMessageBox::warning(this, tr("Buscar"), tr("No se pudo encontrar el valor ingresado!"));
            }
            break;
        }
    }
    ui.txt_buscar->clear();
}

void ProyectoEstrcutura1::on_eliminar_clicked() {
    switch (estructura) {
    case LISTA:
        if (ui.combo_eliminar->count() == 0) {
            QMessageBox::warning(this, tr("Eliminar"), tr("La lista esta vacia!"));
        }
        else {
            int value = stoi(ui.combo_eliminar->currentText().toStdString());
            bool exists = lista->deleteNode(value);
            if (exists) {
                refreshList();
                QMessageBox::information(this, tr("Eliminar"), tr("Se elimino el elemento seleccionado!"));
            }
            else
                QMessageBox::warning(this, tr("Eliminar"), tr("No se pudo encontrar el elemento seleccionado!"));
        }
        break;
    case QUEUE:
        if (queue->getSize() == 0) {
            QMessageBox::warning(this, tr("Dequeue"), tr("La lista esta vacia!"));
        }
        else {
            int valor = queue->dequeue();
            refreshList();
            QMessageBox::information(this, tr("Dequeue"), tr("Dequeue"));
        }
        break;
    case STACK:
        if (stack->getSize() == 0) {
            QMessageBox::warning(this, tr("Pop"), tr("La lista esta vacia!"));
        }
        else {
            int valor = stack->pop();
            refreshList();
            QMessageBox::information(this, tr("Pop"), tr("Pop"));
        }
        break;
    }
}

void ProyectoEstrcutura1::on_listaEnlazada_clicked() {
    estructura = LISTA;
    ui.toolbarbutton->setText("Toolbar");
    ui.frame_opciones->hide();
    hideMenu();
}

void ProyectoEstrcutura1::on_queue_clicked() {
    estructura = QUEUE;
    ui.toolbarbutton->setText("Toolbar");
    ui.frame_opciones->hide();
    hideMenu();
}

void ProyectoEstrcutura1::on_stack_clicked() {
    estructura = STACK;
    ui.toolbarbutton->setText("Toolbar");
    ui.frame_opciones->hide();
    hideMenu();
}

void ProyectoEstrcutura1::hideMenu() {
    ui.frame_opciones->hide();
    ui.label_insertar->hide();
    ui.label_eliminar->hide();
    ui.txt_insertar->hide();
    ui.combo_eliminar->hide();
    ui.label_buscar->hide();
    ui.buscar->hide();
    ui.txt_buscar->hide();
    ui.agregar->hide();
    ui.eliminar->hide();
}

void ProyectoEstrcutura1::showMenu() {
    ui.frame_opciones->hide();
    ui.label_buscar->show();
    ui.txt_buscar->show();
    ui.buscar->show();
    switch (estructura) {
    case LISTA:
        ui.label_insertar->setText("Insertar");
        ui.label_insertar->show();
        ui.txt_insertar->show();
        ui.agregar->setText("Insertar");
        ui.agregar->show();

        ui.label_eliminar->setText("Eliminar");
        ui.label_eliminar->show();
        ui.combo_eliminar->show();
        ui.eliminar->setText("Eliminar");
        ui.eliminar->show();
        break;
    case QUEUE:
        ui.label_insertar->setText("Enqueue");
        ui.label_insertar->show();
        ui.txt_insertar->show();
        ui.agregar->setText("Enqueue");
        ui.agregar->show();

        ui.eliminar->setText("Dequeue");
        ui.eliminar->show();
        break;
    case STACK:
        ui.label_insertar->setText("Push");
        ui.label_insertar->show();
        ui.txt_insertar->show();
        ui.agregar->setText("Push");
        ui.agregar->show();

        ui.eliminar->setText("Pop");
        ui.eliminar->show();
        break;
    }
}
void ProyectoEstrcutura1::refreshList() {
    QPixmap pixmap("pointer.png");
    ui.combo_eliminar->clear();
    this->clearGraphView(ui.layout);
    switch (estructura)
    {
    case LISTA:
        for (int i = 0; i < lista->size(); i++) {
            ui.combo_eliminar->addItem(QString::number(lista->valueAt(i)));
        }
        for (int i = 0; i < lista->size(); i++) {
            QLabel* pointer = new QLabel();
            pointer->setPixmap(pixmap.scaled(20, 20));
            pointer->setAlignment(Qt::AlignCenter);

            QLabel* label = new QLabel(QString::number(lista->valueAt(i)));
            label->setAlignment(Qt::AlignCenter);
            if (i == 0)
                label->setStyleSheet("QLabel { background-color : blue; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; font-size : 15px;}");
            else
                label->setStyleSheet("QLabel { background-color : gray; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; font-size : 15px;}");
            ui.layout->addWidget(label);
            ui.layout->addWidget(pointer);
        }
        break;
    case QUEUE:
        for (int i = 0; i < queue->getSize(); i++) {
            QLabel* pointer = new QLabel();
            pointer->setPixmap(pixmap.scaled(20, 20));
            pointer->setAlignment(Qt::AlignCenter);
            QLabel* label = new QLabel(QString::number(queue->print(i)));
            label->setAlignment(Qt::AlignCenter);
            if (i == queue->getSize() - 1)
                label->setStyleSheet("QLabel { background-color : blue; color: white; border-radius: 5px; min-height : 40px; max-height : 40px; font-size : 15px;}");
            else
                label->setStyleSheet("QLabel { background-color : gray; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; font-size : 15px;}");
            ui.layout->insertWidget(0, pointer);
            ui.layout->insertWidget(0, label);
        }
        break;
    case STACK:
        for (int i = 0; i < stack->getSize(); i++) {

            QLabel* pointer = new QLabel();
            pointer->setPixmap(pixmap.scaled(20, 20));
            pointer->setAlignment(Qt::AlignCenter);

            QLabel* label = new QLabel(QString::number(stack->print(i)));
            label->setAlignment(Qt::AlignCenter);
            if (i == stack->getSize() - 1)
                label->setStyleSheet("QLabel { background-color : blue; color : white; min-height : 5px; max-height : 40px; font-size : 15px;}");
            else
                label->setStyleSheet("QLabel { background-color : gray; color : white; min-height : 5px; max-height : 40px; font-size : 15px;}");
            ui.layout->insertWidget(0, pointer);
            ui.layout->insertWidget(0, label);
        }
        break;
    }
    QLabel* null_node = new QLabel("NULLPTR");
    null_node->setAlignment(Qt::AlignCenter);
    null_node->setStyleSheet("QLabel { background-color : red; color : white; min-height : 40px; max-height : 40px; font-size : 15px;}");
    ui.layout->addWidget(null_node);
    ui.scroll_content->setLayout(ui.layout);
}


void ProyectoEstrcutura1::clearGraphView(QLayout* layout) {
    if (layout == NULL)
        return;
    QLayoutItem* item;
    while ((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearGraphView(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}