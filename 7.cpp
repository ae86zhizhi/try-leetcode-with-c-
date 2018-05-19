#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
	int reverse(int x) {
		long long ri  = 0;
		int xx = x;
		long long t = 1;
		long long bits[32];
		for (int i = 0; i < 31; i++)
		{
			bits[i] = t;
			t <<= 1;
		}
		bool intBits[32];
		for (int i = 0; i < 31; i++)
		{
			if ((bits[i] & xx) != 0) {
				intBits[i] = true;
			}
			else
				intBits[i] = false;
		}
		for (int i = 30; i >= 0; i--)
		{
			if (intBits[i] == true) {
				ri |= bits[30 - i];
			}
		}
		if (ri > INT32_MAX)return 0;
		if (x < 0)return -ri;
		else return ri;
	}
};
int main7() {
	Solution s;
	
	while (true) {
		int t;
		cin >> t;
		cout << s.reverse(t) << endl;
	}
	
	int k;
	cin >> k;
}