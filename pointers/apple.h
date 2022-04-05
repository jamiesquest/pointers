#pragma once

struct pear {
    int size;

    pear(int sz);
    int eat();
};

struct apple {
    int size;
    apple(int sz);
    virtual ~apple();
    int eat();
};

struct greenApple : public apple {
    int color;
    greenApple(int sz);
    virtual ~greenApple();
};

