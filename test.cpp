#include "gtest/gtest.h"
#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "decorator.hpp"
#include "ceil.hpp"

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
