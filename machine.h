#ifndef MACHINE_H
#define MACHINE_H
#include "QString"
#include "holes.h"
#include "QList"

class Machine
{
public:
    Machine();
    QString drill();
    QString chisel();
    QString mill();
    QList<Holes*> list_of_actions;
};

#endif // MACHINE_H
