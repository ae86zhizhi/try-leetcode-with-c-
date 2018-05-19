#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int l1 = 0, r1 = nums1.size() - 1, m1 = (l1 + r1) / 1;
		int l2 = 0, r2 = nums2.size() - 1, m2 = (l2 + r2) / 1;
		while (true)
		{
			if (l1 = r1)return nums1[l1];
			else if (l2 = r2) return nums2[l2];
			else {

			}
			if (nums1[m1] >= nums2[m2]) {
				r1 = m1;
				m1 = (l1 + r1) / 2;
				l2 = m2;
				m2 = (l2 + r2) / 2;
			}
			else {
				l1 = m1;
				m1 = (l1 + r1) / 2;
				r2 = m2;
				m2 = (l2 + r2) / 2;
			}
		}

	}
};
int main4() {
	Solution s;
	
	int k;
	cin >> k;
	return 0;
}