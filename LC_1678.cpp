//problem link:https://leetcode.com/problems/goal-parser-interpretation/
//solve status: solved
//learnings: null

//TC: O(n)
//MC: O(n)
//n-> length of a string command

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string goal_string;

        for (int i = 0; i < command.length(); ++i)
        {
        	
        	if(command[i]=='G'){
        		goal_string+="G";
        	}
        	else if(command[i]=='(' && command[i+1]==')'){
        		goal_string+="o";
        	}
        	else if(command[i]=='(' && command[i+1]=='a'){
        		goal_string+="al";
        	}

        }

        return goal_string;
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
	cout<<a.interpret("G()()()()(al)")<<endl;

        
}
