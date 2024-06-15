#ifndef WINDOWSIZEADAPTER_H
#define WINDOWSIZEADAPTER_H
#include <QWidget>
#include <QObject>
#include <QList>
#include <QHBoxLayout>


class WindowSizeAdapter : public QObject
{
    Q_OBJECT
public:
    explicit WindowSizeAdapter(QObject *parent = nullptr);
    QWidget *window;    //需要自动调节的窗口
    QList<QWidget*> widgets;
        //需要调节大小的布局
    void setWindow(QWidget *w);
    void addWidget(QWidget *widget);

    bool adaptAll();

signals:
};

#endif // WINDOWSIZEADAPTER_H
