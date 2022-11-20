//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
       unordered_map<int, int> frequency_mapper;
       int flag = -1,answer = 0;
        for (int i = 0; i <4000 ; ++i)
        {
        	frequency_mapper[i] = 0;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
        	frequency_mapper[nums[i]]++;
        }

        for (int i = 0; i < frequency_mapper.size(); ++i)
        {
        	if(flag == k){
        		break;
        	}

        	else if(frequency_mapper[i]==0){
        		flag++;
        		answer = i;
        		//cout<<flag<<" "<<i<<endl;
        	}

        	//cout<<i<<" "<<frequency_mapper[i]<<endl;
        }



     	return answer;
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

	std::vector<int> v ={2,3,4,7,11};
    	cout<<a.findKthPositive(v,5)<<endl;
	
        
}
