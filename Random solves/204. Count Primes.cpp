//problem link:https://leetcode.com/problems/count-primes/
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

	int countPrimes(int n) {
		int count = 0;

		vector<bool> isPrime(n,1);

		isPrime[0] = false;
		isPrime[1] = false;

		for (int i = 2; i*i < n; ++i)
		{
			if (isPrime[i]) {
				for (int j = i * i; j < n; j += i)
				{
					isPrime[j] = 0;
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
			if (isPrime[i] == 1) count++;
		}

		return count;

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
	cout << a.countPrimes(100) << endl;

	


}
