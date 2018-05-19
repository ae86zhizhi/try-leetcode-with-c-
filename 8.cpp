#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
	int myAtoi(string str) {
		int begin = 0;
		//skip blanks
		while (str[begin] == ' ')
		{
			begin++;
		}
		if (begin >= str.length()) {
			return 0;
		}
		if (str[begin] == '-') {
			int end = begin + 1;
			if (end >= str.length()) {
				return 0;
			}
			while (str[end] >= '0' && str[end] <= '9')
			{
				end++;
			}
			long long res = 0;
			for (int i = begin + 1; i <= end - 1; i++) {
				res = res * 10 + (str[i] - '0');;
				if (res >= 2147483648)
					return -2147483648;
			}
			return -res;
		}
		else if((str[begin] >= '0' && str[begin] <= '9')||str[begin] == '+'){
			if (str[begin] == '+')
				begin++;
			int end = begin;
			while (str[end] >= '0' && str[end] <= '9')
			{
				end++;
			}
			long long res = 0;
			for (int i = begin; i <= end - 1; i++) {
				res = res * 10 + (str[i] - '0');;
				if (res >= 2147483647)
					return 2147483647;
			}			
			return res;
		}
		return 0;
	}
};
int main8() {
	Solution s;
	//cout << s.myAtoi("42") << endl;
	cout << s.myAtoi("   -42") << endl;
	//cout << s.myAtoi("42 with") << endl;
	//cout << s.myAtoi("words and 987") << endl;
	//cout << s.myAtoi("-9999999999") << endl;
	//cout << s.myAtoi("9999999999") << endl;
	//cout << s.myAtoi("-") << endl;
	//cout << s.myAtoi("+") << endl;
	//cout << s.myAtoi("+1") << endl;

	long long res = 4;
	cout << res << endl;
	cout << (-res <= -2147483648ll) << endl;;
	cout << -res << endl;
	return 0;
}