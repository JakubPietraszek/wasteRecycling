#pragma once
#include "Garbage.h"
class PlasticGarbage :
    public Garbage
{
    bool isClean;
public:
    void clean();
    bool isCleanGetter();
};

