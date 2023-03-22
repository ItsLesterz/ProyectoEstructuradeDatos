/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionCrear_Lista;
    QAction *actionEditar_Lista;
    QAction *actionGuardar_Lista;
    QWidget *centralWidget;
    QRadioButton *rb_listaEnlazada;
    QPushButton *butt_toolbar;
    QFrame *frame_opciones;
    QVBoxLayout *verticalLayout;
    QPushButton *butt_crear_lista;
    QPushButton *butt_guardar_lista;
    QPushButton *butt_abrir_archivo;
    QLabel *label_insertar_2;
    QRadioButton *rb_queue;
    QRadioButton *rb_stack;
    QGroupBox *groupBox;
    QFrame *frame_view;
    QScrollArea *scroll_view;
    QWidget *scroll_content;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QSpacerItem *verticalSpacer;
    QPushButton *buttt_null;
    QLabel *label_archivo;
    QPushButton *butt_header;
    QGroupBox *groupBox_menu;
    QLineEdit *txt_buscar;
    QLabel *label_buscar;
    QPushButton *butt_buscar;
    QComboBox *combo_eliminar;
    QLabel *label_eliminar;
    QPushButton *butt_eliminar;
    QLabel *label_insertar;
    QLineEdit *txt_insertar;
    QPushButton *butt_agregar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(801, 524);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        actionCrear_Lista = new QAction(MainWindowClass);
        actionCrear_Lista->setObjectName("actionCrear_Lista");
        actionEditar_Lista = new QAction(MainWindowClass);
        actionEditar_Lista->setObjectName("actionEditar_Lista");
        actionGuardar_Lista = new QAction(MainWindowClass);
        actionGuardar_Lista->setObjectName("actionGuardar_Lista");
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName("centralWidget");
        rb_listaEnlazada = new QRadioButton(centralWidget);
        rb_listaEnlazada->setObjectName("rb_listaEnlazada");
        rb_listaEnlazada->setGeometry(QRect(180, 480, 89, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        rb_listaEnlazada->setFont(font);
        rb_listaEnlazada->setCursor(QCursor(Qt::PointingHandCursor));
        butt_toolbar = new QPushButton(centralWidget);
        butt_toolbar->setObjectName("butt_toolbar");
        butt_toolbar->setGeometry(QRect(560, 30, 211, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        butt_toolbar->setFont(font1);
        butt_toolbar->setCursor(QCursor(Qt::PointingHandCursor));
        butt_toolbar->setStyleSheet(QString::fromUtf8(""));
        frame_opciones = new QFrame(centralWidget);
        frame_opciones->setObjectName("frame_opciones");
        frame_opciones->setEnabled(true);
        frame_opciones->setGeometry(QRect(560, 60, 211, 51));
        frame_opciones->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);\n"
"background-color: rgb(0, 0, 255);"));
        frame_opciones->setFrameShape(QFrame::StyledPanel);
        frame_opciones->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_opciones);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        butt_crear_lista = new QPushButton(frame_opciones);
        butt_crear_lista->setObjectName("butt_crear_lista");
        butt_crear_lista->setEnabled(true);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Courier New")});
        font2.setBold(true);
        butt_crear_lista->setFont(font2);
        butt_crear_lista->setCursor(QCursor(Qt::PointingHandCursor));
        butt_crear_lista->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(butt_crear_lista);

        butt_guardar_lista = new QPushButton(frame_opciones);
        butt_guardar_lista->setObjectName("butt_guardar_lista");
        butt_guardar_lista->setFont(font2);
        butt_guardar_lista->setCursor(QCursor(Qt::PointingHandCursor));
        butt_guardar_lista->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
""));

        verticalLayout->addWidget(butt_guardar_lista);

        butt_abrir_archivo = new QPushButton(frame_opciones);
        butt_abrir_archivo->setObjectName("butt_abrir_archivo");
        butt_abrir_archivo->setFont(font2);
        butt_abrir_archivo->setCursor(QCursor(Qt::PointingHandCursor));
        butt_abrir_archivo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
""));

        verticalLayout->addWidget(butt_abrir_archivo);

        label_insertar_2 = new QLabel(centralWidget);
        label_insertar_2->setObjectName("label_insertar_2");
        label_insertar_2->setGeometry(QRect(540, 480, 121, 16));
        label_insertar_2->setFont(font2);
        label_insertar_2->setStyleSheet(QString::fromUtf8(""));
        rb_queue = new QRadioButton(centralWidget);
        rb_queue->setObjectName("rb_queue");
        rb_queue->setGeometry(QRect(100, 480, 89, 20));
        rb_queue->setFont(font);
        rb_queue->setCursor(QCursor(Qt::PointingHandCursor));
        rb_stack = new QRadioButton(centralWidget);
        rb_stack->setObjectName("rb_stack");
        rb_stack->setGeometry(QRect(20, 480, 89, 20));
        rb_stack->setFont(font);
        rb_stack->setCursor(QCursor(Qt::PointingHandCursor));
        rb_stack->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 30, 541, 441));
        groupBox->setCursor(QCursor(Qt::ForbiddenCursor));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        frame_view = new QFrame(groupBox);
        frame_view->setObjectName("frame_view");
        frame_view->setGeometry(QRect(10, 10, 521, 421));
        frame_view->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);\n"
"background-color: rgb(255, 255, 255);"));
        frame_view->setFrameShape(QFrame::StyledPanel);
        frame_view->setFrameShadow(QFrame::Raised);
        scroll_view = new QScrollArea(frame_view);
        scroll_view->setObjectName("scroll_view");
        scroll_view->setGeometry(QRect(0, 0, 521, 421));
        scroll_view->setWidgetResizable(true);
        scroll_content = new QWidget();
        scroll_content->setObjectName("scroll_content");
        scroll_content->setGeometry(QRect(0, 0, 519, 419));
        verticalLayoutWidget = new QWidget(scroll_content);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(9, 10, 501, 401));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setSpacing(20);
        layout->setContentsMargins(11, 11, 11, 11);
        layout->setObjectName("layout");
        layout->setSizeConstraint(QLayout::SetNoConstraint);
        layout->setContentsMargins(200, 10, 200, 10);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout->addItem(verticalSpacer);

        scroll_view->setWidget(scroll_content);
        buttt_null = new QPushButton(centralWidget);
        buttt_null->setObjectName("buttt_null");
        buttt_null->setGeometry(QRect(120, 10, 91, 16));
        buttt_null->setFont(font2);
        buttt_null->setCursor(QCursor(Qt::PointingHandCursor));
        buttt_null->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(211, 211, 211);\n"
"background-color: rgb(255, 0, 0);"));
        label_archivo = new QLabel(centralWidget);
        label_archivo->setObjectName("label_archivo");
        label_archivo->setGeometry(QRect(670, 480, 101, 16));
        butt_header = new QPushButton(centralWidget);
        butt_header->setObjectName("butt_header");
        butt_header->setGeometry(QRect(10, 10, 91, 16));
        butt_header->setFont(font2);
        butt_header->setCursor(QCursor(Qt::PointingHandCursor));
        butt_header->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(211, 211, 211);\n"
"background-color: rgb(0, 0, 255);"));
        groupBox_menu = new QGroupBox(centralWidget);
        groupBox_menu->setObjectName("groupBox_menu");
        groupBox_menu->setGeometry(QRect(560, 130, 211, 341));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(230, 0, 35, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush2(QColor(222, 222, 222, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(94, 94, 94, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(126, 126, 126, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        QBrush brush7(QColor(255, 255, 255, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush8(QColor(227, 227, 227, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        QBrush brush9(QColor(160, 160, 160, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush10(QColor(105, 105, 105, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush10);
        QBrush brush11(QColor(245, 245, 245, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        groupBox_menu->setPalette(palette);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Courier New")});
        font3.setPointSize(10);
        font3.setBold(true);
        groupBox_menu->setFont(font3);
        groupBox_menu->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 0, 35);color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        txt_buscar = new QLineEdit(groupBox_menu);
        txt_buscar->setObjectName("txt_buscar");
        txt_buscar->setGeometry(QRect(11, 280, 191, 21));
        txt_buscar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);background-color: rgb(255, 255, 255);color: rgb(0, 0, 0);"));
        label_buscar = new QLabel(groupBox_menu);
        label_buscar->setObjectName("label_buscar");
        label_buscar->setGeometry(QRect(17, 250, 181, 20));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_buscar->sizePolicy().hasHeightForWidth());
        label_buscar->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(10);
        font4.setBold(true);
        label_buscar->setFont(font4);
        label_buscar->setStyleSheet(QString::fromUtf8(""));
        label_buscar->setAlignment(Qt::AlignCenter);
        butt_buscar = new QPushButton(groupBox_menu);
        butt_buscar->setObjectName("butt_buscar");
        butt_buscar->setGeometry(QRect(70, 310, 75, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(butt_buscar->sizePolicy().hasHeightForWidth());
        butt_buscar->setSizePolicy(sizePolicy1);
        butt_buscar->setCursor(QCursor(Qt::PointingHandCursor));
        butt_buscar->setStyleSheet(QString::fromUtf8(""));
        combo_eliminar = new QComboBox(groupBox_menu);
        combo_eliminar->setObjectName("combo_eliminar");
        combo_eliminar->setGeometry(QRect(11, 170, 191, 21));
        combo_eliminar->setCursor(QCursor(Qt::PointingHandCursor));
        combo_eliminar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);color: rgb(0, 0, 0);"));
        label_eliminar = new QLabel(groupBox_menu);
        label_eliminar->setObjectName("label_eliminar");
        label_eliminar->setGeometry(QRect(11, 140, 191, 20));
        sizePolicy.setHeightForWidth(label_eliminar->sizePolicy().hasHeightForWidth());
        label_eliminar->setSizePolicy(sizePolicy);
        label_eliminar->setFont(font4);
        label_eliminar->setStyleSheet(QString::fromUtf8(""));
        label_eliminar->setAlignment(Qt::AlignCenter);
        butt_eliminar = new QPushButton(groupBox_menu);
        butt_eliminar->setObjectName("butt_eliminar");
        butt_eliminar->setGeometry(QRect(70, 200, 75, 24));
        sizePolicy1.setHeightForWidth(butt_eliminar->sizePolicy().hasHeightForWidth());
        butt_eliminar->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setItalic(false);
        butt_eliminar->setFont(font5);
        butt_eliminar->setCursor(QCursor(Qt::PointingHandCursor));
        butt_eliminar->setStyleSheet(QString::fromUtf8(""));
        label_insertar = new QLabel(groupBox_menu);
        label_insertar->setObjectName("label_insertar");
        label_insertar->setGeometry(QRect(10, 30, 191, 20));
        sizePolicy.setHeightForWidth(label_insertar->sizePolicy().hasHeightForWidth());
        label_insertar->setSizePolicy(sizePolicy);
        label_insertar->setFont(font4);
        label_insertar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_insertar->setAlignment(Qt::AlignCenter);
        txt_insertar = new QLineEdit(groupBox_menu);
        txt_insertar->setObjectName("txt_insertar");
        txt_insertar->setGeometry(QRect(11, 60, 191, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txt_insertar->sizePolicy().hasHeightForWidth());
        txt_insertar->setSizePolicy(sizePolicy2);
        txt_insertar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);color: rgb(0, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        butt_agregar = new QPushButton(groupBox_menu);
        butt_agregar->setObjectName("butt_agregar");
        butt_agregar->setEnabled(true);
        butt_agregar->setGeometry(QRect(70, 90, 75, 24));
        sizePolicy1.setHeightForWidth(butt_agregar->sizePolicy().hasHeightForWidth());
        butt_agregar->setSizePolicy(sizePolicy1);
        butt_agregar->setBaseSize(QSize(0, 0));
        butt_agregar->setCursor(QCursor(Qt::PointingHandCursor));
        butt_agregar->setLayoutDirection(Qt::LeftToRight);
        butt_agregar->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 0, 35);"));
        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName("statusBar");
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        actionCrear_Lista->setText(QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        actionEditar_Lista->setText(QCoreApplication::translate("MainWindowClass", "Editar Lista (abrir)", nullptr));
        actionGuardar_Lista->setText(QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));
        rb_listaEnlazada->setText(QCoreApplication::translate("MainWindowClass", "Lista", nullptr));
        butt_toolbar->setText(QCoreApplication::translate("MainWindowClass", "Toolbar - Options", nullptr));
        butt_crear_lista->setText(QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        butt_guardar_lista->setText(QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));
        butt_abrir_archivo->setText(QCoreApplication::translate("MainWindowClass", "Abrir Archivo", nullptr));
        label_insertar_2->setText(QCoreApplication::translate("MainWindowClass", "Nombre de Lista:", nullptr));
        rb_queue->setText(QCoreApplication::translate("MainWindowClass", "Queue", nullptr));
        rb_stack->setText(QCoreApplication::translate("MainWindowClass", "Stack", nullptr));
        groupBox->setTitle(QString());
        buttt_null->setText(QCoreApplication::translate("MainWindowClass", "\342\227\217 NULLPTR", nullptr));
        label_archivo->setText(QString());
        butt_header->setText(QCoreApplication::translate("MainWindowClass", "\342\227\217 Header", nullptr));
        groupBox_menu->setTitle(QCoreApplication::translate("MainWindowClass", "Menu", nullptr));
        label_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        butt_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        label_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        butt_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        label_insertar->setText(QCoreApplication::translate("MainWindowClass", "Insertar", nullptr));
        butt_agregar->setText(QCoreApplication::translate("MainWindowClass", "Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
