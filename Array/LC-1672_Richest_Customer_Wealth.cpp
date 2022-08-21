//problem link:https://leetcode.com/problems/richest-customer-wealth/
//solve status:
//learnings:  time complexity of accumulate function in C++ is o(n)

//TC: O(n^2)
//MC: O(n^2)

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int maximumWealth(vector<vector<int>> &accounts)
	{
		int max_wealth = 0, sum = 0;
		for (int i = 0; i < accounts.size(); ++i)
		{
			for (int j = 0; j < accounts[i].size(); ++j)
			{
				sum = accounts[i][j] + sum;

			}
			max_wealth = max(sum, max_wealth);
			sum = 0;
		}

		return max_wealth;
	}


	int maximumWealth_efficient(vector<vector<int>>& a, int m = 0) {
		for (auto i : a)
			m = max(m, accumulate(i.begin(), i.end(), 0));
		return m;
	}


};

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//[1,5],[7,3],[3,5]
//{{1,5},{7,3},{3,5}}
//[2,8,7],[7,1,3],[1,9,5]
	vector<vector<int>> x = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};

	Solution a;
	cout << a.maximumWealth(x) << endl;


}
