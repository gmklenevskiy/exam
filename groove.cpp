#include "groove.h"

groove::groove()
{
    size = 3;// пусть будет возможен только такой размер
}

groove::groove(QString size_1)
{
    groove::set_size(size_1);
}

int groove::get_type()
{
    return 3;
}

void groove::set_size(QString size_check)
{
    QRegExp check("\\d*");
    if(size_check.toInt()!=3|| !check.exactMatch(size_check))
        size = 3;
    else
        size = size_check.toInt();
}

int groove::get_size()
{
    return 3;
}

