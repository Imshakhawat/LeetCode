//problem link:https://leetcode.com/problems/merge-two-sorted-lists/
//solve status:
//learnings:

//TC: O(n)
//MC: O(n)


#include<bits/stdc++.h>
using namespace std;



class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode prehead = new ListNode(-1);
        ListNode prev = prehead;

        while (l1 != null && l2 != null) {
            if (l1.val <= l2.val) {
                prev.next = l1;
                l1 = l1.next;
            } else {
                prev.next = l2;
                l2 = l2.next;
            }
            prev = prev.next;
        }


        prev.next = l1 == null ? l2 : l1;
        return prehead.next;//sending the address of the head node not the value
    }
}





int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif




}



