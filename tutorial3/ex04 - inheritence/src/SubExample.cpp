#include "SubExample.h"
#include "SuperExample.h"

SubExample::SubExample(int a)
{
    SuperExample::setX(a);
}

void SubExample::run()
{
    SuperExample::run();
}
