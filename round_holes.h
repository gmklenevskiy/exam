#ifndef ROUND_HOLES_H
#define ROUND_HOLES_H
#include "holes.h"
#include "QString"
#include "QStringList"

class Round_holes: public Holes
{
public:
    Round_holes();
    Round_holes(QString size_1);
    virtual void set_size(QString size_check);
    virtual int get_size();
    virtual int get_type();
};

#endif // ROUND_HOLES_H
