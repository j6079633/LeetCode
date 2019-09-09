#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int singleNumber1(vector<int>& nums) {
        int n_size = nums.size();
        int ans = 0;
        for(int i = 0; i < n_size; i++){
            int cnt = count(nums.begin(), nums.end(), nums[i]);
            if(cnt!=2){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
    int singleNumber(vector<int>& nums) {
        int n_size = nums.size();
        int val = 0;
        for(int i = 0; i < n_size; i++){
            val^=nums[i];
        }
        return val;
    }
};

int main(){
        Solution sol;
        vector<int> input1{2,2,1};
        cout << sol.singleNumber(input1) << endl;
        vector<int> input2{4,1,2,1,2};
        cout << sol.singleNumber(input2) << endl;
        return 0;
}