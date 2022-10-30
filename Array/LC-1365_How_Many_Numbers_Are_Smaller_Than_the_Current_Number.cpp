//problem link:
//solve status:
//learnings: use pair vector to store duplicate elements with index

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:


	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int i, j;
        int count[101] = {0, 0, 0};
		int len = nums.size();
        for(i = 0; i < len; i++) {
            count[nums[i]]++;
        }
        for(i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }
        for(i = 0; i < len; i++) {
            if(nums[i] == 0)
                answer.push_back(0);
            else
                answer.push_back(count[nums[i] - 1]);
                
        }
        return answer;
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
	vector<int> v = {6,5,4,8};
	v = a.smallerNumbersThanCurrent(v);

	for(auto x: v){
		cout<<x<<endl;
	}


}
