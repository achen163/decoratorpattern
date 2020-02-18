#include "gtest/gtest.h"
#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "decorator.hpp"
#include "ceil.hpp"
#include "Floor.hpp"
#include "Trunc.hpp"
#include "abs.hpp"
#include "paren.hpp"
int main(int argc, char**argv) {
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}

TEST(DecoratorTest, CeilTest) {
	Base* two = new Op(2.5);
	Base* three = new Op(3);
	Base* mult = new  Mult(two, three);
	Decorator* ceil = new Ceil(mult);
	EXPECT_EQ(ceil->evaluate(), 8.0);
}

TEST(DecoratorTest, FloorTest) {
        Base* two2 = new Op(2.5);
        Base* three2 = new Op(3);
        Base* mult2 = new  Mult(two2, three2);
        Decorator* floor = new Floor(mult2);
        EXPECT_EQ(floor->evaluate(), 7.0);
}

TEST(DecoratorTest, TruncTest) {
        Base* two3 = new Op(2.5);
        Base* three3 = new Op(3);
        Base* mult3 = new Mult(two3, three3);
        Decorator* trunc = new Trunc(mult3);
        EXPECT_EQ(trunc->stringify(), "7");
}

TEST(DecoratorTest, AbsandCeilTest) {
        Base* negTwo = new Op(-2.5);
        Base* posThree  = new Op(3);
        Base* mult4 = new  Mult(negTwo, posThree);
        Decorator* abs = new Abs(mult4);
        EXPECT_EQ(abs->evaluate(), 7.5);
	Decorator* ceil2 = new Ceil(abs);
	EXPECT_EQ(ceil2->evaluate(), 8.0);
}

TEST(DecoratorTest, ParenTest) {
	Base* one = new Op(1);
	Base* six = new Op(6);
	Base* four = new Op(4);
	Base* add = new Add(six, four);
	Decorator* paren = new Paren(add);
	EXPECT_EQ(paren->stringify(), "(6.000000+4.000000)");
}

TEST(DecoratorTest, AbsandFloorTest) {
	Base* negTwo2 = new Op(-2.5);
        Base* posThree2  = new Op(3);
        Base* mult42 = new  Mult(negTwo2, posThree2);
        Decorator* abs2 = new Abs(mult42);
        EXPECT_EQ(abs2->evaluate(), 7.5);
        Decorator* floor2  = new Floor(abs2);
        EXPECT_EQ(floor2->evaluate(), 7.0);
}
