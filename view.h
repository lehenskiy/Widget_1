#ifndef VIEW_H
#define VIEW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Form; }
QT_END_NAMESPACE

class View : public QWidget
{
    Q_OBJECT

public:
    View(QWidget *parent = nullptr);
    ~View();


public slots:
    void begin();
    void calc();

private:
    Ui::Form *form; // view.ui
};
#endif // VIEW_H
