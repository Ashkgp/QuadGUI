#ifndef BACKLAYOUT_H
#define BACKLAYOUT_H

#include <QMainWindow>
#include<QtCore>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<QImage>

using namespace cv;

namespace Ui {
class BackLayout;
}

class BackLayout : public QMainWindow
{
    Q_OBJECT
    QTimer *timer;
    Mat frame;
public:
     BackLayout(QWidget *parent = 0);
    ~BackLayout();

private:
    Ui::BackLayout *ui;
public slots:
    void displayFrame();

};

#endif // BACKLAYOUT_H
