#include "apple.h"


apple::apple(int sz) { this->size = sz; }
apple::~apple()
{
}
;
int apple::eat() { return 5; };


greenApple::greenApple(int sz)
    :apple(sz) {
    this->color = 12;
}

greenApple::~greenApple()
{
}
