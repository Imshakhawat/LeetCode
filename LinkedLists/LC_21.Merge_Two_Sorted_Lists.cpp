//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()


#include<bits/stdc++.h>
using namespace std;

#define DummyValue INT_MIN

class LinkedListNode
{
public:
	int value;
	LinkedListNode* next;
	LinkedListNode(int val, LinkedListNode* nxt)
	{
		value = val;
		next = nxt;
	}

	LinkedListNode* insertAtLast(LinkedListNode* head, int val) {
		LinkedListNode* curr = head;
		while (curr->next) {

			curr = curr->next;

		}
		curr->next = new LinkedListNode(val, NULL);
		return head;
	}

	void printList(LinkedListNode* head) {
		LinkedListNode* curr = head->next;
		while (curr) {
			cout << curr->value << " ";
			curr = curr->next;

		}
		cout << endl;
	}

};


void List_sort(LinkedListNode* list1, LinkedListNode* list2 ) {
	LinkedListNode* curr = list1->next;
	while (curr) {
		cout << curr->value << " ";
		curr = curr->next;

	}
	cout << endl;
}







// class Solution {
// public:
//     returnType func_name( return) {

//     }
// };

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// Solution a;
	// cout<<a.func()<<endl;
	LinkedListNode* head = new LinkedListNode(rand() % 10, NULL);

	LinkedListNode* x = new LinkedListNode(rand() % 10, NULL);;

	for (int i = 0; i < 5; ++i)
	{
		head = head->insertAtLast(head, rand() % 10);
		x = x->insertAtLast(x, rand() % 10);
	}

	// head->printList(head);
	// x->printList(x);

	List_sort(head, x);


}




