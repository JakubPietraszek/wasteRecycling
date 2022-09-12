#include "Dustbin.h"
#include "DustbinContentError.h"

void Dustbin::throwOutGarbage(Garbage garbage)
{
	houseWasteContent.push_back(garbage);
}

void Dustbin::throwOutPaperGarbage(PaperGarbage paperGarbage)
{
	if (paperGarbage.isSqueezedGetter()) {
		paperContent.push_back(paperGarbage);
	}
	else {
		throw DustbinContentError();
	}
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage plasticGarbage)
{
	if (plasticGarbage.isCleanGetter()) {
		plasticContent.push_back(plasticGarbage);
	}
}

void Dustbin::emptyContents() {
	paperContent.clear();
	plasticContent.clear();
	houseWasteContent.clear();
}

bool Dustbin::paperContentIsEmpty()
{
	return paperContent.empty();
}

