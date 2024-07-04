#include <string>
#include <stdexcept>

using namespace std;

class Checker {
public:
	int check(string str1, string str2) {
		validCheck(str1, str2);

		int longStr = str1.size() >= str2.size() ? str1.size() : str2.size();
		int shortStr = str1.size() >= str2.size() ? str2.size() : str1.size();
		
		if (longStr == shortStr) return 60;
		if (longStr >= shortStr * 2) return 0;

		return (1 - (double)(longStr - shortStr) / shortStr) * 60;
	}

private:
	void validCheck(string str1, string str2) {
		if (str1.size() == 0 || str2.size() == 0) {
			throw invalid_argument("string 길이가 0입니다.");
		}
	}
};