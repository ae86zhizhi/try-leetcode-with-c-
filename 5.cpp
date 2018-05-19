#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
	//https://segmentfault.com/a/1190000003914228
	//  char : # a # b # b # a #
	//     RL: 1 2 1 2 5 2 1 2 1
	//RL - 1 : 0 1 0 1 4 1 0 1 0
	//     i : 0 1 2 3 4 5 6 7 8
	string longestPalindrome(string s) {
		vector<char> newstring(s.length()*2+1,'#');
		for(int i = 0; i < newstring.size(); i++) if (i % 2 == 1)newstring[i] = s[i / 2];
		vector<int> RL(newstring.size(), 0);
		int maxRight = 0;
		int pos = 0;
		int maxLen = 0;
		int resCenter;
		for (int i = 0; i < newstring.size(); i++) {
			if (i < maxRight)
				RL[i] = min(RL[2 * pos - i], maxRight - i);
			else
				RL[i] = 1;
			while (i - RL[i] >= 0 && i + RL[i] < newstring.size() && newstring[i - RL[i]] == newstring[i + RL[i]])
				RL[i] ++;
			if (RL[i] + i - 1 > maxRight) {
				maxRight = RL[i] + i - 1;
				pos = i;
			}
			if (RL[i] > maxLen) {
				maxLen = RL[i];
				resCenter = i;
			}
		}
		string res = "";
		for (int i = resCenter - (maxLen - 1); i <= resCenter + (maxLen - 1); i++) {
			if (newstring[i] != '#')res += newstring[i];
		}
		
		return res;
	}
	
};
int main5() {
	Solution s;
	string s1 = "abba";
	string s2 = "";
	cout << s.longestPalindrome(s1);

	int k;
	cin >> k;
	return 0;
}