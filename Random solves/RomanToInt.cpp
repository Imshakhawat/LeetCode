//problem link:  https://leetcode.com/problems/roman-to-integer/
//solve status:   solved
//learnings:    exp
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
    int romanToInt(string s) {
    map<char, int> m;
    m.emplace('I',1);
    m.emplace('V',5);
    m.emplace('X',10);
    m.emplace('L',50);
    m.emplace('C',100);
    m.emplace('D',500);
    m.emplace('M',1000);


    int sum=0;
    int arr[s.length()];




    for (int i = 0; i < s.length(); ++i)
    {
        arr[i]=m[s[i]];
    }



    for (int i = 0; i < s.length()-1; i++)
    {
    
        if(arr[i]<arr[i+1]){
            sum-=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }

    sum+=m[s[s.length()-1]];
    

    return sum;

   
    }
};


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


	
    


        
}
