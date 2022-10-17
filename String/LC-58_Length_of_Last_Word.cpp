//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord2(string s) {//didnt worked
    	int first=0,last = 0;
        for (int i = s.length()-1; i >=0 && last==0 ; i--)
        {
        	if(s[i]==' ' || i==0){
        		first !=0? last =i:0;
        	}
        	else{

        		//cout<<s[i];
        		first == 0? first = i:0;

        	}
        	//cout<<first<<" "<<last<<endl;
        }
        
        //return last==0?abs(last-first)+1:abs(last-first);
        return first == 0?abs(first - last)+1:abs(last-first);
    }

    int lengthOfLastWord(string s) { 
        int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        while (tail >= 0 && s[tail] != ' ') {
            len++;
            tail--;
        }
        return len;
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
	cout<<a.lengthOfLastWord(" a")<<endl;
	cout<<a.lengthOfLastWord(" a ")<<endl;
	cout<<a.lengthOfLastWord("a ")<<endl;
	cout<<a.lengthOfLastWord("a")<<endl;

	cout<<a.lengthOfLastWord("5454")<<endl;
	
}
