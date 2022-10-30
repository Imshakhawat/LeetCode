//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size()-1;
        while(idx>=0){
        	if (digits[idx] == 9)
        	{
        		digits[idx]=0;
        	}
        	else{
        		digits[idx]+=1;
        		return digits;
        	}
        	idx--;
        }

        digits.insert(digits.begin(),1);

        for(auto x: digits){
        	cout<<x<<endl;
        }

        return digits;

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
	std::vector<int> v = {9};
	v = a.plusOne(v);



        
}
