#pragma once
#include "Garbage.h"
class PaperGarbage :
    public Garbage
{
    bool isSqueezed;
public:
    void squeeze();
    bool isSqueezedGetter();
};

