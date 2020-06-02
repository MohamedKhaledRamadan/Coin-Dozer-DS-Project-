#ifndef KEYPRESS_H
#define KEYPRESS_H

#pragma once

#include <QWidget>

class KeyPress : public QWidget {

  public:
    KeyPress(QWidget *parent = 0);

  protected:
    void keyPressEvent(QKeyEvent * e);
};


#endif // KEYPRESS_H
