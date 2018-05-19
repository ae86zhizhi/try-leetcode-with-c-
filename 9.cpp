#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		string s = to_string(x);
		string rs(s);
		reverse(s.begin(), s.end());
		return (s == rs);
	}
};
int main9() {
	Solution s;

	return 0;
}