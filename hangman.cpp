#include "hangman.h"
#include "ui_hangman.h"
#include<QGraphicsScene>
#include <iostream>
#include <string>
#include <QDebug>
using namespace std;

hangman::hangman(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hangman)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    QBrush RedBrush(Qt::red);
    QPen Blackpen(Qt::black);
    Blackpen.setWidth(6);
    ellipse = scene->addEllipse(10, 10, 100, 100, Blackpen, RedBrush);
}

hangman::~hangman()
{
    delete ui;
}

