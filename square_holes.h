#ifndef SQUARE_HOLES_H
#define SQUARE_HOLES_H
#include "holes.h"
#include "QString"
#include "QStringList"

class Square_holes: public Holes
{
public:
    Square_holes();
    Square_holes(QString size_1);
    virtual int get_type();
    virtual void set_size(QString size_check);
    virtual int get_size();
};

#endif // SQUARE_HOLES_H
