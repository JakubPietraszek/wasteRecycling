#pragma once
#include "Garbage.h"
class BottleCap :
    public Garbage
{
    std::string color;
public: 
    std::string getColor();
    void setColor(std::string Color);
};

