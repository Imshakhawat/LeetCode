//problem link:
//solve status:
//learnings: solved it without extra space

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void swaper(string &s,int start,int end)
	{
		for (int i = start,j = end; i <j; ++i,--j)
		{
			swap(s[i],s[j]); 
			//cout<<i<<" "<<j<<endl;
		}
	}

	string reverseWords(string s) {

		int j = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if(s[i] ==' '){
				swaper(s,j,i-1);
				//cout<<j<<' '<<i-1<<endl;
				j=++i;

			}

			if(i== s.length()-1){
				swaper(s,j,i);
				//cout<<j<<' '<<i<<endl;
				j=++i;

			}
		}




		//cout<<s<<endl;

		return s;
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
	cout<<a.reverseWords("Let's take LeetCode contest")<<endl;


}
