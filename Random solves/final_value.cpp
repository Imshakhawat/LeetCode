//problem link: https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
//solve status: solved
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
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto s : operations){

        	//cout<<s<<endl;

        	if(s=="X++" ) x++;
        	if(s== "++X") ++x;
        	if(s=="X--") x--;
      		if(s=="--X") --x;

        }

        return x;
    }
};





int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<string> v={"++X","++X","X++"};

    // for (int i = 0; i < 3; ++i)
    // {
    // 	string x;
    // 	cin>>x;
    // 	v.pb(x);
    // }

        // for(auto s : v){

        // 	cout<<s<<endl;


        // }

    Solution a;

    cout<<a.finalValueAfterOperations(v)<<endl;





	
    


        
}
