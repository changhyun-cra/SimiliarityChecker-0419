#include "pch.h"
#include "../Project1/checker.cpp"

TEST(TestCaseName, SameString) {
	Checker ckr;
	EXPECT_EQ(ckr.check("test", "test"), 60);
}

TEST(TestCaseName, MultipleString) {
	Checker ckr;
	EXPECT_EQ(ckr.check("te", "s"), 0);
}

TEST(TestCaseName, DiffString) {
	Checker ckr;
	EXPECT_EQ(ckr.check("teaa", "aas"), 40);
}