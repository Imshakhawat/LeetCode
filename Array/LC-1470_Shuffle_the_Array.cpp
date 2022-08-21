//problem link:https://leetcode.com/problems/shuffle-the-array/
//solve status:
//learnings: 

//TC: O(n)
//MC: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int> shuffled_vec;
        for (int i = 0; i < n; ++i)
        {
        	shuffled_vec.push_back(nums[i]);
        	shuffled_vec.push_back(nums[n+i]);
        }

       return shuffled_vec;
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
	std::vector<int> v = {1,1,2,2};
	cout<<a.shuffle(v, 4)<<endl;

        
}
