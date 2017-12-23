#include "round_holes.h"

Round_holes::Round_holes()
{
    size = 1;//пусть будет возможен только такой размер
}

Round_holes::Round_holes(QString size_1)
{
    Round_holes::set_size(size_1);
}

void Round_holes::set_size(QString size_check)
{
    QRegExp check("\\d*");
    if(size_check.toInt()!=1|| !check.exactMatch(size_check))
        size = 1;
    else
        size = size_check.toInt();
}

int Round_holes::get_size()
{
    return size;
}

int Round_holes::get_type()
{
    return 1;
}

