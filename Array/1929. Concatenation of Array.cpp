//problem link: https://leetcode.com/problems/concatenation-of-array/
//solve status: 
//learnings: vector pushing technique

//TC: O(n)
//MC: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int ans = nums.size();
        for(int i = 0; i<ans;i++){
            nums.push_back(nums[i]);
        }

        
        return nums;
    }
};


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	Solution a;
	//cout<<a.func()<<endl;

        
}
