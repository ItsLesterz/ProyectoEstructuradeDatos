#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ProyectoEstrcutura1.h"

class ProyectoEstrcutura1 : public QMainWindow
{
    Q_OBJECT

public:
    ProyectoEstrcutura1(QWidget *parent = nullptr);
    ~ProyectoEstrcutura1();
    void hideMenu();
    void showMenu();
    void refreshList();
    void clearGraphView(QLayout*);

private slots:
    void on_toolbarbutton_clicked();
    void on_crearlistabutton_clicked();
    void on_editararchivobutton_clicked();
    void on_guardarlistabutton_clicked();
    void on_agregar_clicked();
    void on_buscar_clicked();
    void on_eliminar_clicked();
    void on_listaEnlazada_clicked();
    void on_queue_clicked();
    void on_stack_clicked();

private:
    Ui::ProyectoEstrcutura1Class ui;
};
