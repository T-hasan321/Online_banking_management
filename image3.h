#ifndef IMAGE3_H
#define IMAGE3_H

#include <QDialog>

namespace Ui {
class image3;
}

class image3 : public QDialog
{
    Q_OBJECT

public:
    explicit image3(QWidget *parent = nullptr);
    ~image3();

private:
    Ui::image3 *ui;
};

#endif // IMAGE3_H
