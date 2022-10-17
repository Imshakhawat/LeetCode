//problem link: https://leetcode.com/problems/integer-to-roman/
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

string intTostr(int x){
  map<int, string> m1;
 
    m1.emplace(1,"I");
    m1.emplace(2,"II");
    m1.emplace(3,"III");
    m1.emplace(4,"IV");
    m1.emplace(5,"V");
    m1.emplace(6,"VI");
    m1.emplace(7,"VII");
    m1.emplace(8,"VIII");
    m1.emplace(9,"IX");
    

    m1.emplace(10,"X");
    m1.emplace(20,"XX");
    m1.emplace(30,"XXX");
    m1.emplace(40,"XL");
    m1.emplace(50,"L");
    m1.emplace(60,"LX");
    m1.emplace(70,"LXX");
    m1.emplace(80,"LXXX");
    m1.emplace(90,"XC");


    m1.emplace(100,"C");   
    m1.emplace(200,"CC");
    m1.emplace(300,"CCC");
    m1.emplace(400,"CD");
    m1.emplace(500,"D");
    m1.emplace(600,"DC");
    m1.emplace(700,"DCC");
    m1.emplace(800,"DCCC");
    m1.emplace(900,"CM");

    m1.emplace(1000,"M");   
    m1.emplace(2000,"MM");
    m1.emplace(3000,"MMM");

    m1.emplace(0,"");

    return m1[x];


}

class Solution {
public:
    string intToRoman(int num) {

    	int arr[4]={0};
    	int temp=1000;
    	string ans;

    	for (int i = 0; i < 4; ++i)
    	{
    		arr[i] = (num/temp)*temp;
    		temp= temp/10;
    		num= num-arr[i];
    		ans=ans+intTostr(arr[i]);

    	}

    	// for (int i = 0; i < 4; ++i)
    	// {
    	// 	cout<<arr[i]<<" ";
    	// }
    	
		return ans;

    }


};




int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


   // cout<<intTostr(500)<<endl;
   // cout<<1995%1000<<endl;

    Solution a;
    cout<<a.intToRoman(40)<<endl;







	
    


        
}
