#include <string>

using namespace std;

class Checker {
public:
	int check(string str1, string str2) {
		int longLen = str1.size() >= str2.size() ? str1.size() : str2.size();
		int shortLen = str1.size() >= str2.size() ? str2.size() : str1.size();
		if (longLen == shortLen) return 60;

		if (longLen >= shortLen * 2) return 0;

		return (1 - (double)(longLen - shortLen) / shortLen) * 60;
	}
};