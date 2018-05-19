#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <vector>
#include <regex>
using namespace std;
class Solution {
public:
	bool isMatch(string s, string p) {
		regex e(p);
		return regex_match(s, e);
	}
};
int main() {
	Solution s;

	return 0;
}