#include "Dustbin9000.h"

void Dustbin9000::throwOutPinkCups(BottleCap bottleCap) {
	if (bottleCap.getColor() == "pink") {
		metalContent.push_back(bottleCap);
	}
}
