/* Given an array of two integers, return indices of the two numbers s.t. they add up to a specific target.
 * You may assume that each input has exactly one solution, and you may not use the same element twice.
 **/
#include <vector>
#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
class Solution{
public:
	 std::vector<int> twoSum(std::vector<int>& nums, int target){
		int sub;
		int i = 0;
		while(i<nums.size()){
			sub = target - nums[i];
			for(int j=i+1; j<nums.size(); j++){
				if(nums[j]==sub){
					std::vector<int> ans;
					ans.push_back(i);
					ans.push_back(j);
					return ans;
				}else{
					if(j<nums.size()){
						continue;
					}else{
						i++;
					}
				}
			}
		}
	}
	std::vector<int> twoSum_new(std::vector<int>& nums, int target){
		map<int, int> numMap;
		map<int, int>::iterator iter;
		vector<int> ans;
		for(int i=0; i<nums.size();i++){
			numMap[nums[i]] = i;
		}

		for(int i=0; i<nums.size();i++){
			int cmp = target - nums[i];
			iter = numMap.find(cmp);
			if(iter!=numMap.end() && iter->second!=i){
				ans.push_back(i);
				ans.push_back(iter->second);
				return ans;
			}	
		}
	}
};

int main(){
	std::vector<int> nums;
	nums.push_back(3);
	nums.push_back(9);
	nums.push_back(8);
	nums.push_back(11);
	nums.push_back(7);
	nums.push_back(6);
	nums.push_back(5);
	int target = 10;
	
	Solution sol;
	std::vector<int> indices = sol.twoSum_new(nums, target);
	//std::cout << indices << std::endl;
	printf("%d %d\n", indices[0], indices[1]);
	return 0;
}
