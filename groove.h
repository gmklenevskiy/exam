#ifndef GROOVE_H
#define GROOVE_H
#include "holes.h"
#include "QString"
#include "QStringList"

class groove: public Holes
{
public:
    groove();
    groove(QString size_1);
    virtual int get_type();
    virtual void set_size(QString size_check);
    virtual int get_size();

};

#endif // GROOVE_H
