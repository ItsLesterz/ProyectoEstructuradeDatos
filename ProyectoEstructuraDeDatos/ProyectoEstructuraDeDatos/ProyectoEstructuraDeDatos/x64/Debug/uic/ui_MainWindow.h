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
    QPushButton *butt_toolbar;
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
    QFrame *frame_opciones;
    QVBoxLayout *verticalLayout;
    QPushButton *butt_crear_lista;
    QPushButton *butt_guardar_lista;
    QPushButton *butt_editar_lista;
    QLabel *label_archivo;
    QLabel *label_insertar_2;
    QGroupBox *groupBox;
    QFrame *frame_view;
    QScrollArea *scroll_view;
    QWidget *scroll_content;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QSpacerItem *verticalSpacer;
    QRadioButton *rb_stack;
    QRadioButton *rb_queue;
    QRadioButton *rb_listaEnlazada;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(799, 535);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(236, 250, 250, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(175, 175, 175, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(245, 252, 252, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(118, 125, 125, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(157, 167, 167, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(165, 221, 227, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        QBrush brush8(QColor(197, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(0, 0, 0, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush11(QColor(240, 240, 240, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        QBrush brush12(QColor(227, 227, 227, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        QBrush brush13(QColor(160, 160, 160, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush14(QColor(105, 105, 105, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        QBrush brush15(QColor(245, 245, 245, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush16(QColor(0, 0, 0, 128));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        MainWindowClass->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        MainWindowClass->setFont(font);
        MainWindowClass->setAutoFillBackground(false);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        actionCrear_Lista = new QAction(MainWindowClass);
        actionCrear_Lista->setObjectName("actionCrear_Lista");
        actionEditar_Lista = new QAction(MainWindowClass);
        actionEditar_Lista->setObjectName("actionEditar_Lista");
        actionGuardar_Lista = new QAction(MainWindowClass);
        actionGuardar_Lista->setObjectName("actionGuardar_Lista");
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName("centralWidget");
        butt_toolbar = new QPushButton(centralWidget);
        butt_toolbar->setObjectName("butt_toolbar");
        butt_toolbar->setGeometry(QRect(560, 40, 211, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        butt_toolbar->setFont(font1);
        butt_toolbar->setCursor(QCursor(Qt::PointingHandCursor));
        butt_toolbar->setStyleSheet(QString::fromUtf8(""));
        groupBox_menu = new QGroupBox(centralWidget);
        groupBox_menu->setObjectName("groupBox_menu");
        groupBox_menu->setGeometry(QRect(560, 140, 211, 341));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush17(QColor(189, 189, 189, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush17);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush18(QColor(222, 222, 222, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        QBrush brush19(QColor(94, 94, 94, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(126, 126, 126, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush17);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush16);
#endif
        groupBox_menu->setPalette(palette1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Courier New")});
        font2.setPointSize(10);
        font2.setBold(true);
        groupBox_menu->setFont(font2);
        groupBox_menu->setStyleSheet(QString::fromUtf8(""));
        txt_buscar = new QLineEdit(groupBox_menu);
        txt_buscar->setObjectName("txt_buscar");
        txt_buscar->setGeometry(QRect(11, 280, 191, 21));
        txt_buscar->setStyleSheet(QString::fromUtf8(""));
        label_buscar = new QLabel(groupBox_menu);
        label_buscar->setObjectName("label_buscar");
        label_buscar->setGeometry(QRect(17, 250, 181, 20));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_buscar->sizePolicy().hasHeightForWidth());
        label_buscar->setSizePolicy(sizePolicy);
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
        combo_eliminar->setStyleSheet(QString::fromUtf8(""));
        label_eliminar = new QLabel(groupBox_menu);
        label_eliminar->setObjectName("label_eliminar");
        label_eliminar->setGeometry(QRect(11, 140, 191, 20));
        sizePolicy.setHeightForWidth(label_eliminar->sizePolicy().hasHeightForWidth());
        label_eliminar->setSizePolicy(sizePolicy);
        label_eliminar->setStyleSheet(QString::fromUtf8(""));
        label_eliminar->setAlignment(Qt::AlignCenter);
        butt_eliminar = new QPushButton(groupBox_menu);
        butt_eliminar->setObjectName("butt_eliminar");
        butt_eliminar->setGeometry(QRect(70, 200, 75, 24));
        sizePolicy1.setHeightForWidth(butt_eliminar->sizePolicy().hasHeightForWidth());
        butt_eliminar->setSizePolicy(sizePolicy1);
        butt_eliminar->setCursor(QCursor(Qt::PointingHandCursor));
        butt_eliminar->setStyleSheet(QString::fromUtf8(""));
        label_insertar = new QLabel(groupBox_menu);
        label_insertar->setObjectName("label_insertar");
        label_insertar->setGeometry(QRect(10, 30, 191, 20));
        sizePolicy.setHeightForWidth(label_insertar->sizePolicy().hasHeightForWidth());
        label_insertar->setSizePolicy(sizePolicy);
        label_insertar->setStyleSheet(QString::fromUtf8(""));
        label_insertar->setAlignment(Qt::AlignCenter);
        txt_insertar = new QLineEdit(groupBox_menu);
        txt_insertar->setObjectName("txt_insertar");
        txt_insertar->setGeometry(QRect(11, 60, 191, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txt_insertar->sizePolicy().hasHeightForWidth());
        txt_insertar->setSizePolicy(sizePolicy2);
        txt_insertar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        butt_agregar = new QPushButton(groupBox_menu);
        butt_agregar->setObjectName("butt_agregar");
        butt_agregar->setEnabled(true);
        butt_agregar->setGeometry(QRect(70, 90, 75, 24));
        sizePolicy1.setHeightForWidth(butt_agregar->sizePolicy().hasHeightForWidth());
        butt_agregar->setSizePolicy(sizePolicy1);
        butt_agregar->setBaseSize(QSize(0, 0));
        butt_agregar->setCursor(QCursor(Qt::PointingHandCursor));
        butt_agregar->setLayoutDirection(Qt::LeftToRight);
        butt_agregar->setStyleSheet(QString::fromUtf8(""));
        frame_opciones = new QFrame(centralWidget);
        frame_opciones->setObjectName("frame_opciones");
        frame_opciones->setEnabled(true);
        frame_opciones->setGeometry(QRect(560, 70, 211, 51));
        frame_opciones->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);\n"
"background-color: rgb(139, 211, 230);"));
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
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Courier New")});
        font3.setBold(true);
        butt_crear_lista->setFont(font3);
        butt_crear_lista->setCursor(QCursor(Qt::PointingHandCursor));
        butt_crear_lista->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(butt_crear_lista);

        butt_guardar_lista = new QPushButton(frame_opciones);
        butt_guardar_lista->setObjectName("butt_guardar_lista");
        butt_guardar_lista->setFont(font3);
        butt_guardar_lista->setCursor(QCursor(Qt::PointingHandCursor));
        butt_guardar_lista->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
""));

        verticalLayout->addWidget(butt_guardar_lista);

        butt_editar_lista = new QPushButton(frame_opciones);
        butt_editar_lista->setObjectName("butt_editar_lista");
        butt_editar_lista->setFont(font3);
        butt_editar_lista->setCursor(QCursor(Qt::PointingHandCursor));
        butt_editar_lista->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
""));

        verticalLayout->addWidget(butt_editar_lista);

        label_archivo = new QLabel(centralWidget);
        label_archivo->setObjectName("label_archivo");
        label_archivo->setGeometry(QRect(420, 490, 101, 16));
        label_insertar_2 = new QLabel(centralWidget);
        label_insertar_2->setObjectName("label_insertar_2");
        label_insertar_2->setGeometry(QRect(300, 490, 121, 16));
        label_insertar_2->setFont(font3);
        label_insertar_2->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 40, 541, 441));
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
        verticalLayoutWidget->setGeometry(QRect(10, 10, 501, 401));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setSpacing(20);
        layout->setContentsMargins(11, 11, 11, 11);
        layout->setObjectName("layout");
        layout->setSizeConstraint(QLayout::SetNoConstraint);
        layout->setContentsMargins(200, 10, 200, 10);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout->addItem(verticalSpacer);

        scroll_view->setWidget(scroll_content);
        rb_stack = new QRadioButton(centralWidget);
        rb_stack->setObjectName("rb_stack");
        rb_stack->setGeometry(QRect(20, 490, 89, 20));
        rb_stack->setCursor(QCursor(Qt::PointingHandCursor));
        rb_queue = new QRadioButton(centralWidget);
        rb_queue->setObjectName("rb_queue");
        rb_queue->setGeometry(QRect(100, 490, 89, 20));
        rb_queue->setCursor(QCursor(Qt::PointingHandCursor));
        rb_listaEnlazada = new QRadioButton(centralWidget);
        rb_listaEnlazada->setObjectName("rb_listaEnlazada");
        rb_listaEnlazada->setGeometry(QRect(180, 490, 89, 20));
        rb_listaEnlazada->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 151, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label->setPalette(palette2);
        label->setFont(font3);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 20, 101, 16));
        label_2->setFont(font3);
        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName("statusBar");
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "Listas Enlazadas", nullptr));
        actionCrear_Lista->setText(QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        actionEditar_Lista->setText(QCoreApplication::translate("MainWindowClass", "Editar Lista (abrir)", nullptr));
        actionGuardar_Lista->setText(QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));
        butt_toolbar->setText(QCoreApplication::translate("MainWindowClass", "Toolbar - Options", nullptr));
        groupBox_menu->setTitle(QCoreApplication::translate("MainWindowClass", "Menu", nullptr));
        label_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        butt_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        label_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        butt_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        label_insertar->setText(QCoreApplication::translate("MainWindowClass", "Insertar", nullptr));
        butt_agregar->setText(QCoreApplication::translate("MainWindowClass", "Agregar", nullptr));
        butt_crear_lista->setText(QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        butt_guardar_lista->setText(QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));
        butt_editar_lista->setText(QCoreApplication::translate("MainWindowClass", "Abrir Archivo", nullptr));
        label_archivo->setText(QString());
        label_insertar_2->setText(QCoreApplication::translate("MainWindowClass", "Nombre de Lista:", nullptr));
        groupBox->setTitle(QString());
        rb_stack->setText(QCoreApplication::translate("MainWindowClass", "Stack", nullptr));
        rb_queue->setText(QCoreApplication::translate("MainWindowClass", "Queue", nullptr));
        rb_listaEnlazada->setText(QCoreApplication::translate("MainWindowClass", "Lista", nullptr));
        label->setText(QCoreApplication::translate("MainWindowClass", "Header = Blue", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindowClass", "Nullptr = Red", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
