//problem link:https://leetcode.com/problems/shuffle-string/
//solve status:
//learnings: new technique of shuffling

//TC: O(n)
//MC: O(n)
//n-> length of a string
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map<int,char> char_index;
        string shuffled_string;
        for(int i = 0; i<s.length();i++)
        {
            char_index[indices[i]]= s[i];
        }
        
        for(int i =0; i<s.length();i++)
        {
           shuffled_string+= char_index[i];
        }
        
        return shuffled_string;
        
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
