#pragma once
#include <iostream>
#include <vector>
#include "PaperGarbage.h"
#include "PlasticGarbage.h"
class Dustbin
{
	std::string color;
	std::vector<PaperGarbage> paperContent;
	std::vector<PlasticGarbage> plasticContent;
	std::vector<Garbage> houseWasteContent;
public:
	void throwOutGarbage(Garbage garbage);
	void throwOutPaperGarbage(PaperGarbage paperGarbage);
	void throwOutPlasticGarbage(PlasticGarbage plasticGarbage);
	void emptyContents();
	bool paperContentIsEmpty();

	
};

