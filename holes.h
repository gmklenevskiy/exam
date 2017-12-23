#ifndef HOLES_H
#define HOLES_H

class Holes
{
public:
    Holes();
    virtual void set_size(int size_check);
    virtual int get_size();
    virtual int get_type() = 0;
protected:
    int size;
};

#endif // HOLES_H
