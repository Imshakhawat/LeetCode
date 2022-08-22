//problem link:https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
//solve status:
//learnings:

//TC: O(n)
//MC: O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    	std::vector<bool> result;

    	int max_candy = *max_element(candies.begin(), candies.end());
    	for (int i = 0; i < candies.size() ; ++i)
    	{
    		if(candies[i]+extraCandies>=max_candy){
    			result.push_back(1);
    		}
    		else{
    			result.push_back(0);
    		}
    	}


    	// for(auto x: result){
    	// 	cout<<x<<endl;
    	// }

        return result;
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
	std::vector<int> v ={12,1,12} ;
	a.kidsWithCandies(v,10);

        
}

/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for Kids With the Greatest Number of Candies.
Memory Usage: 9 MB, less than 12.86% of C++ online submissions for Kids With the Greatest Number of Candies.*/