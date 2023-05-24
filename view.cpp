#include "view.h"
#include "ui_view.h"

View::View(QWidget *parent) : QWidget(parent), form(new Ui::Form) {
    if (form == nullptr) {
        throw std::bad_alloc();
    }

    form->setupUi(this);

    begin();
    // connect buttons and actions
    connect(form->exitButton, SIGNAL(clicked()),
            this, SLOT(close()));
    connect(form->nextButton, SIGNAL(clicked()),
            this, SLOT(begin()));
    connect(form->numberToPow, SIGNAL(editingFinished()), this, SLOT(calc()));
}

void View::begin() {
    form->numberToPow->clear();
    form->numberToPow->setEnabled(true);

    form->nextButton->setEnabled(false);
    form->nextButton->setDefault(false);

    form->label_2->setVisible(false);

    form->result->setVisible(false);
    form->result->setVisible(false);
    form->result->setEnabled(false);
    form->result->setFocus();
};

void View::calc() {
    QString input = form->numberToPow->text();
    double numberToPow = form->numberToPow->valueFromText(input);

    input.setNum(numberToPow * numberToPow);
    form->result->setText(input);
    form->numberToPow->setEnabled(false);

    form->label_2->setVisible(true);
    form->result->setVisible(true);

    form->nextButton->setDefault(true);
    form->nextButton->setEnabled(true);
    form->nextButton->setFocus();
};

View::~View() {
    delete form;
}

