#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <map>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		map<char,int> chars;
		int maxlen = 0;
		for (int i = 0, j = 0; j < s.length(); j++) {
			if (chars.count(s[j])!=0) {
				i = max(i, chars[s[j]]);
			}
			chars[s[j]] = j + 1;
			maxlen = max(j - i + 1, maxlen);
		}
		return maxlen;
	}
};
int main3() {
	Solution s;
	cout << s.lengthOfLongestSubstring("pwwkew");
	int k;
	cin >> k;
	return 0;
}