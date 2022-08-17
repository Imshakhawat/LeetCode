//problem link: https://leetcode.com/problems/palindrome-number/
//solve status: solved
//learnings: unsigned long long dont take negative numbers

//TC: O(worst)
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> digit_Spliter(long long int x) {
        vector<int> v;
        int temp = 1;
        for (int i = 0; x / temp > 0; ++i)
        {
            int digit = (x / temp) % 10;
            temp *= 10;
            v.push_back(digit);
        }
        return v;

    }

    bool palindrome_checker(vector<int> &v, int L, int R) {
        //cout <<"L : "<<L<<"  R : "<<R<<endl;
        if (L >= R) return 1;
        if (v[L] != v[R]) return 0;
        return palindrome_checker(v, L + 1, R - 1);

    }

    bool isPalindrome( long long int x) {

        vector<int> digits;
        if (x < 0) return false;

        digits = digit_Spliter(x);

        // for(auto x: digits){
        //  cout<<x<<endl;
        // }

        return palindrome_checker(digits, 0, digits.size() - 1);

    }


    bool isPalindrome_optimal(int x) {
        long long ans = x;
        long long rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x = x / 10;
        }
        if (rev == ans) {
            return true;
        }
        else {
            else {
                return false;
            }
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
        cout << a.isPalindrome(-121) << endl;


    }
