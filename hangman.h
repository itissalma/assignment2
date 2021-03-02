#ifndef HANGMAN_H
#define HANGMAN_H

#include <QMainWindow>
#include<QPainter>
#include<QGraphicsItem>
#include<QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include<QTimer>
#include <QtDebug>
#include <iostream>
#include <string>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class hangman; }
QT_END_NAMESPACE

class hangman : public QMainWindow
{
    Q_OBJECT

public:
    hangman(QWidget *parent = nullptr);
    ~hangman();

private slots:
    void on_pushButton_clicked();

private:
    Ui::hangman *ui;
    QGraphicsScene* scene;
    QGraphicsEllipseItem* ellipse;
};
#endif // HANGMAN_H
