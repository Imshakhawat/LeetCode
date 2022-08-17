//problem link: https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
//solve status:
//learnings:

//TC: O(nlogn)
//MC: O(number of digits)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
    	int digits[4];

    	int temp =1;

    	for (int i = 0; i < 4; ++i)
    	{
    		digits[i] = (num/temp)%10;
    		temp*=10;
    	}

    	sort(digits,digits+4);
    	// for (int i = 0; i < 4; ++i)
    	// {
    	// 	cout<<digits[i]<<" ";
    	// }
    	

    	return (digits[0]*10+digits[2])+(digits[1]*10+digits[3]);
    	

    	

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
	
	cout<<a.minimumSum(1000)<<endl;

        
}
