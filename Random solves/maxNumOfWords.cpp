//problem link:https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
//solve status:
//learnings:
#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz size()
#define all(a)  a.begin(), a.end()
#define mem(a, b)     memset(a, b, sizeof(a))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

    int maxi=0;

    for(auto x: sentences){

    	char s=' ';
    	int n=0;

    	for (int i = 0; i < x.length(); ++i)
    	{
    		if(x[i]==s) n++;
    	}
    	maxi=max(maxi,n);
    }

    return maxi+1;
    }
};


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<string> v={"please wait", "continue to fight", "continue to win"};


    Solution a;
    cout<<a.mostWordsFound(v)<<endl;

   





	
    


        
}
