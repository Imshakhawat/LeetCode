//problem link:https://leetcode.com/problems/number-of-good-pairs/
//solve status:
//learnings: if the frquency of any number is greater than 1
// then the good pair calculation is  n(n+1)/2 where n=(pair_number-1) 

//TC: O(n)
//MC: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

	int sum_of_natural_numbers(int x){
		return ((x-1)*x)/2;
	}


    int numIdenticalPairs(vector<int>& nums) {
    	int good_pairs=0;

        unordered_map<int,int> frquency;
        for (int i = 0; i < nums.size(); ++i)
        {
            frquency[nums[i]]++;
        }

        for(auto x:frquency){
    		if(x.second>1){

    			good_pairs += sum_of_natural_numbers(x.second);
    		}
    	}

    	return good_pairs;


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
	std::vector<int> v ={1,2,3} ;
	cout<<a.numIdenticalPairs(v)<<endl;

        
}
