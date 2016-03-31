#include "backlayout.h"
#include "ui_backlayout.h"

BackLayout::BackLayout(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BackLayout)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(20);
    connect(timer,SIGNAL(timeout()),this,SLOT(displayFrame()));
    timer -> start(20);

}

BackLayout::~BackLayout()
{
    delete ui;
}

void BackLayout::displayFrame()
{
    VideoCapture cap(0);
    cap >> frame;
    cv::resize(frame,frame,Size(ui->Camfeed->width(),ui->Camfeed->height()));
    cvtColor(frame,frame,CV_BGR2RGB);
    QImage img = QImage((uchar*)frame.data,frame.cols,frame.rows,frame.step,QImage::Format_RGB888);
    QPixmap pix = QPixmap::fromImage(img);
    ui->Camfeed->setPixmap(pix);
}
