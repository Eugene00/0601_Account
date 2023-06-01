#include "pch.h"
#include "../Cal/cal.cpp"

TEST(TestCaseName, TestName) {
	Cal* cal = new Cal();
	EXPECT_TRUE(cal != nullptr);
}

TEST(TestCaseName, ZegopTest) {
	Cal* cal = new Cal();
	EXPECT_EQ(49, cal->getZegop(7));

TEST(TestCaseName, getGop01) {
	EXPECT_EQ(Cal().getGop(2, 3), 6);
	EXPECT_EQ(Cal().getGop(5, 10), 50);
	EXPECT_EQ(Cal().getGop(9, 9), 81);
}