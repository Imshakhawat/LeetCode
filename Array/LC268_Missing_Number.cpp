//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum_of_elems = accumulate(nums.begin(), nums.end(), 0);
        return ((n*(n+1))/2)-sum_of_elems;
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
