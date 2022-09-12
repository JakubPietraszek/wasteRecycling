#include "pch.h"
#include "../../repos/wasteRecycling/PaperGarbage.h"
#include "../../repos/wasteRecycling/PlasticGarbage.h"
#include "../../repos/wasteRecycling/Dustbin.h"
#include "../../repos/wasteRecycling/PaperGarbage.cpp"
#include "../../repos/wasteRecycling/PlasticGarbage.cpp"
#include "../../repos/wasteRecycling/Dustbin.cpp"
#include <cstdio>
#include <iostream>

TEST(WasteRecyclingTest, Squeeze) {
	PaperGarbage paperGarbage;
	paperGarbage.squeeze();
	EXPECT_EQ(paperGarbage.isSqueezedGetter(), true);
} 
TEST(WasteRecyclingTest, IsClean) {
	PlasticGarbage plasticGarbage;
	plasticGarbage.clean();
	EXPECT_EQ(plasticGarbage.isCleanGetter(), true);
} 
TEST(WasteRecyclingTest, paperContent) {
	Dustbin dustbin;
	PaperGarbage paperGarbage;
	dustbin.throwOutPaperGarbage(paperGarbage);
	EXPECT_EQ(dustbin.paperContentIsEmpty(), false);
	std::cout << "test3" << std::endl;
} 

/**/
int main(int argc, char** argv) {
	//::testing::InitGoogleTest(&argc, argv);
	//return RUN_ALL_TESTS();
	std::cout << "hej";
}


