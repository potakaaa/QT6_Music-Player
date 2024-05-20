/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QFrame *sidebar;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QPushButton *home_button;
    QPushButton *play_button;
    QPushButton *list_button;
    QFrame *main_bar;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *song_image;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1213, 711);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow {\n"
"	background-image: url(\":/images/resources/image 1.jpg\");\n"
"  	height: 100%;\n"
"\n"
"  	/* Center and scale the image nicely */\n"
"  	background-position: center;\n"
"  	background-repeat: no-repeat;\n"
"  	background-size: cover;\n"
"}\n"
"\n"
"#main_bar {\n"
"	background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #e9eef5, stop:1 #f0f5f5);\n"
"}\n"
"\n"
"#sidebar {\n"
"	background: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:0 #e9eef5, stop:1 #f0f5f5);\n"
"}\n"
" "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_7 = new QVBoxLayout(centralwidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalSpacer_2 = new QSpacerItem(20, 120, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_7->addItem(verticalSpacer_2);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sidebar = new QFrame(frame);
        sidebar->setObjectName("sidebar");
        sidebar->setMaximumSize(QSize(200, 16777215));
        sidebar->setFrameShape(QFrame::StyledPanel);
        sidebar->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(sidebar);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        home_button = new QPushButton(sidebar);
        home_button->setObjectName("home_button");

        verticalLayout_4->addWidget(home_button);

        play_button = new QPushButton(sidebar);
        play_button->setObjectName("play_button");

        verticalLayout_4->addWidget(play_button);

        list_button = new QPushButton(sidebar);
        list_button->setObjectName("list_button");

        verticalLayout_4->addWidget(list_button);


        verticalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout_3->addWidget(sidebar);

        main_bar = new QFrame(frame);
        main_bar->setObjectName("main_bar");
        main_bar->setFrameShape(QFrame::StyledPanel);
        main_bar->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(main_bar);
        verticalLayout_5->setObjectName("verticalLayout_5");
        frame_2 = new QFrame(main_bar);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 441, 121));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        song_image = new QLabel(widget);
        song_image->setObjectName("song_image");

        horizontalLayout_2->addWidget(song_image);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_3->addWidget(pushButton_3);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(frame_2);

        frame_4 = new QFrame(main_bar);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        widget1 = new QWidget(frame_4);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 50, 441, 111));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider = new QSlider(widget1);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_7 = new QPushButton(widget1);
        pushButton_7->setObjectName("pushButton_7");

        horizontalLayout->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout->addWidget(pushButton_5);

        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName("pushButton_8");

        horizontalLayout->addWidget(pushButton_8);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(frame_4);


        horizontalLayout_3->addWidget(main_bar);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_7->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 120, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_7->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        home_button->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        play_button->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        list_button->setText(QCoreApplication::translate("MainWindow", "List", nullptr));
        song_image->setText(QCoreApplication::translate("MainWindow", "Song Image", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Now Playing", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Song Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Song Artist", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Like", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add to Playlist", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Share", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Play/Pause", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Shuffle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
