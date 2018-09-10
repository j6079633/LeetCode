/* Given an array of two integers, return indices of the two numbers s.t. they add up to a specific target.
 * You may assume that each input has exactly one solution, and you may not use the same element twice.
 **/
#include <vector>
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>
using namespace std;
class Solution{
public:
	int numJewelsInStones(string J, string S){
		int J_num = J.size();
		int ans = 0;
		for(int i=0; i< J_num; i++){
			ans+=std::count(S.begin(), S.end(), J[i]);
		}
		return ans;
	}
};

int main(){
	string J="aA";
	string S="aAAbbbb";	
	Solution sol;
	int ans = sol.numJewelsInStones(J, S);
	printf("%d\n", ans);
	return 0;
}
