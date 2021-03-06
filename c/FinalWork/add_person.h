#ifndef ADD_PERSON_H
#define ADD_PERSON_H

#include "tesk.h"
#include "ui_add_person.h"

namespace Ui {
class Add_person;
}

class Add_person : public QDialog
{
    Q_OBJECT

public:
    explicit Add_person(QWidget *parent = nullptr);
    ~Add_person();

private slots:
    void on_btn_cancel_clicked();

    void on_btn_ok_clicked();

private:
    Ui::Add_person *ui;

};

#endif // ADD_PERSON_H
