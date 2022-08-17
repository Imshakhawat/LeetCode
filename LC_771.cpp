//problem link:https://leetcode.com/problems/jewels-and-stones/
//solve status:
//learnings: use unordered_map when sorting is not an issue

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    	unordered_map<char, int> frequency;
    	int jewelsCount=0;
    	for (int i = 0; i < stones.length(); ++i)
    	{
    		frequency[stones[i]]++;
    	}

    	for (int i = 0; i < jewels.length(); ++i)
    	{
    		jewelsCount+=frequency[jewels[i]];
    	}

    	return jewelsCount;
        
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
	cout<<a.numJewelsInStones("z","ZZ")<<endl;

        
}
