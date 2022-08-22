//problem link:https://leetcode.com/problems/running-sum-of-1d-array/
//solve status:
//learnings:

//TC: O(n)
//MC: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void runningSum(vector<int>& nums) {

    	std::vector<int> result;

    	//int sum = accumulate(nums.begin(), nums.end(),sum);
    	result.push_back(nums[0]);

    	for (int i = 0; i < nums.size()-1; ++i)
    	{
    		result.push_back((result[i]+nums[i+1]));
    	}


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
	std::vector<int> v = {1,2,3,4};
	a.runningSum(v);

        
}
