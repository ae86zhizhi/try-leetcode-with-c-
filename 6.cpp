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
	string convert(string s, int numRows) {
		if (numRows==1)return s;
		vector<vector<char> > lines(numRows, vector<char>(0));
		vector<int> line_num;
		for (int i = 0; i < numRows; i++) {
			line_num.push_back(i);
		}
		for (int i = numRows - 2; i >= 1; i--) {
			line_num.push_back(i);
		}
		int pos = 0;
		for (auto c : s) {
			lines[line_num[pos]].push_back(c);
			pos = (pos + 1) % (numRows * 2 - 2);
		}
		string res = "";
		for (auto line : lines) {
			for (auto c : line) {
				res += c;
			}
		}
		return res;
	}
};
int main() {
	Solution s;
	cout << ("A" == s.convert("A", 1)) << endl;
	cout << ("PAHNAPLSIIGYIR" == s.convert("PAYPALISHIRING", 3)) << endl;
	cout << ("PINALSIGYAHRPI" == s.convert("PAYPALISHIRING", 4)) << endl;


	return 0;
}