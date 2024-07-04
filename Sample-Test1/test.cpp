#include "pch.h"
#include "../Project1/checker.cpp"

TEST(TestCaseName, SameString) {
	Checker ckr;
	EXPECT_EQ(ckr.check("test", "test"), 60);
}

TEST(TestCaseName, MultipleString) {
	Checker ckr;
	EXPECT_EQ(ckr.check("bb", "a"), 0);
}

TEST(TestCaseName, DiffString1) {
	Checker ckr;
	EXPECT_EQ(ckr.check("aaabb", "baa"), 20);
}

TEST(TestCaseName, DiffString2) {
	Checker ckr;
	EXPECT_EQ(ckr.check("aaabb", "baaaaa"), 48);
}

TEST(TestCaseName, ExceptionString) {
	Checker ckr;
	EXPECT_THROW(ckr.check("", ""), invalid_argument);
}