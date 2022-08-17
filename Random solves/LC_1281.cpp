//problem link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
//solve status:
//learnings:

//TC: O(nlogn)
//MC: O(number of digits)

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int subtractProductAndSum(int n) {
		vector<int> digits;
		int sum=0,product=1;

		int temp = 1;
		int i=0;

		while (n / temp > 0)
		{
			
			int digit = (n / temp) % 10;
			temp *= 10;
			i++;

			sum += digit;
			product*=digit;
			
		}




		return product - sum;




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

	cout << a.subtractProductAndSum(4421) << endl;


}

/*
minimal in LC:


    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        for (; n > 0; n /= 10) {
            sum += n % 10;
            product *= n % 10;
        }
        return product - sum;
    }


    