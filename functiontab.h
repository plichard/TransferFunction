#ifndef FUNCTIONTAB_H
#define FUNCTIONTAB_H

#include <QWidget>

namespace Ui {
class FunctionTab;
}

class FunctionTab : public QWidget
{
    Q_OBJECT
    
public:
    explicit FunctionTab(QWidget *parent = 0);
    ~FunctionTab();
    
private:
    Ui::FunctionTab *ui;
};

#endif // FUNCTIONTAB_H
