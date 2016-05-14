#ifndef SUBEXAMPLE_H
#define SUBEXAMPLE_H

#include "SuperExample.h"


class SubExample: public SuperExample
{
public:
    SubExample(int);
    void run();
};

#endif // SUBEXAMPLE_H
