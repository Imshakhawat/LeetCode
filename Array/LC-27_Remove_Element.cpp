//problem link:
//solve status:
//learnings:

//TC: O()
//MC: O()

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int count = 0;


//why auto behaves differenetly 
    for (auto i = nums.begin(); i != nums.end(); ++i) {
        if (*i == val) {
            nums.erase(i);
            count++;
            i--;
            
        }
    } 

  return nums.size();
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
	std::vector<int> v ={0,1,2,2,3,0,4,2};
	cout<<a.removeElement(v,2)<<endl;

        
}
