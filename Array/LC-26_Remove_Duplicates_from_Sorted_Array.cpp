//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> frequency_mapper;

        for (int i = 0; i < nums.size(); ++i)
        {
        	frequency_mapper[nums[i]]++;
        }
        int i =0;

       	for(auto x: frequency_mapper){
       		nums[i] = x.first;
       		i++;
       	}

       	for(auto x: nums){
       		cout<<x<<endl;
       	}

       	return frequency_mapper.size();
    }

// int count = 0;
// for(int i = 1; i < n; i++){
//     if(A[i] == A[i-1]) count++;
//     else A[i-count] = A[i];
// }
// return n-count;
    
};


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	Solution a;
	std::vector<int> v ={0,0,1,1,1,2,2,3,3,4};
	cout<<a.removeDuplicates(v)<<endl;

        
}
