#include "square_holes.h"

Square_holes::Square_holes()
{
    size = 2;//пусть будет возможен только такой размер
}

Square_holes::Square_holes(QString size_1)
{
    Square_holes::set_size(size_1);
}

int Square_holes::get_type()
{
    return 2;
}

void Square_holes::set_size(QString size_check)
{
    QRegExp check("\\d*");
    if(size_check.toInt()!=2|| !check.exactMatch(size_check))
        size = 2;
    else
        size = size_check.toInt();
}

int Square_holes::get_size()
{
    return 2;
}
