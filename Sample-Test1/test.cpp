#include "pch.h"
#include "../Project1/checker.cpp"

class StringCheckFixture : public testing::Test {
public:
	Checker ckr;
	
	void stringLengthCheck(string str1, string str2, int score) {
		EXPECT_EQ(ckr.checkLength(str1, str2), score);
	}
};

TEST_F(StringCheckFixture, SameString) {
	stringLengthCheck("test", "test", 60);
}

TEST_F(StringCheckFixture, MultipleString1) {
	stringLengthCheck("bb", "a", 0);
}

TEST_F(StringCheckFixture, MultipleString2) {
	stringLengthCheck("bb", "aaaa", 0);
}

TEST_F(StringCheckFixture, DiffString1) {
	stringLengthCheck("aaabb", "baa", 20);
}

TEST_F(StringCheckFixture, DiffString2) {
	stringLengthCheck("aaabb", "baaaaa", 48);
}

TEST(TestCaseName, ExceptionString) {
	Checker ckr;
	EXPECT_THROW(ckr.checkLength("", ""), invalid_argument);
}

