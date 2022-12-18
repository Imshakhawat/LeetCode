class Solution
{
public:
    vector<int> digit_Extractor(int num)
    {
        vector<int> digits;
        for (int i = 0; num != 0; ++i)
        {
            int digit = num % 10;

            digits.push_back(digit);
            num = num / 10;
        }

        return digits;
    }

    bool isHappy(int n)
    {
        int sum = n;
        vector<int> digits;
        bool flag = 1;

        while (flag )
        {
            digits = digit_Extractor(sum);
            sum = 0;
            for (int i = 0; i < digits.size(); ++i)
            {
                sum += digits[i] * digits[i];
            }
            if(sum<10 ) flag =0;
            digits.clear();
        }

        if(sum ==7) return 1;

        return sum == 1 ? 1 : 0;
    }
};


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Solution a;

    cout << a.isHappy(1111111);
}

