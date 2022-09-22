#pragma once
#include "Dustbin.h"
#include "MetalGarbage.h"
#include "BottleCap.h"
class Dustbin9000 :
    public Dustbin
{
    std::vector<Garbage> metalContent;
public: 
    void throwOutPinkCups(BottleCap);
    bool isMetalContentEmpty();
};

