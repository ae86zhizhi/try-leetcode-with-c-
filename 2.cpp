#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* num1 = l1;
		ListNode* num2 = l2;
		ListNode* ans = new ListNode(0);
		ListNode* anshead = ans;
		int sum = 0;
		while (num1 != NULL && num2 != NULL) {
			sum = sum / 10;
			sum += num1->val + num2->val;
			anshead->next = new ListNode(sum % 10);
			anshead = anshead->next;
			num1 = num1->next;
			num2 = num2->next;
		}
		while (num1 != NULL) {
			sum = sum / 10;
			sum += num1->val;
			anshead->next = new ListNode(sum % 10);
			anshead = anshead->next;
			num1 = num1->next;
		}
		while (num2 != NULL) {
			sum = sum / 10;
			sum += num2->val;
			anshead->next = new ListNode(sum % 10);
			anshead = anshead->next;
			num2 = num2->next;
		}
		if (sum/10 != 0) {
			anshead->next = new ListNode(1);
			anshead = anshead->next;
		}
		anshead = ans;
		ans = ans->next;
		delete anshead;
		return ans;
	}
};
void showNum(ListNode* num) {
	while (num != NULL)
	{
		std::cout << num->val;
		num = num->next;
	}
	std::cout << std::endl;
}
ListNode* constructNum(int num) {
	ListNode* nl = new ListNode(0);
	ListNode* head = nl;
	while (num != 0) {
		nl->next = new ListNode(num % 10);
		num /= 10;
		nl = nl->next;
	}
	nl = head->next;
	delete head;
	return nl;
}
int main1() {
	Solution s;
	showNum(s.addTwoNumbers(constructNum(342), constructNum(465)));
	

	return 0;
}