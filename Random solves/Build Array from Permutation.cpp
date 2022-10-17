//problem link:https://leetcode.com/problems/build-array-from-permutation/
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
    vector<int> buildArray(vector<int>& nums) {
        std::vector<int> newV;
        std::map<int, int> m1;

        int i=0;
        for(auto x: nums){
        	m1[i]=x;
        	i++;
        }


    for(auto x:m1){
    	newV.push_back(m1[x.second]);
    }

    return newV;

  

}

    
};

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    std::vector<int> v={0,2,1,5,3,4};
    std::vector<int> v2;

	Solution a;
	v2=a.buildArray(v);

	for(auto x: v2){
		cout<<x<<endl;
	}


        
}




