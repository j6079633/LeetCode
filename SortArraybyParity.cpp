/* Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
 * You may return any answer array that satisfies this condition.
 */

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
	vector<int> odd;
	for(int i=0; i<A.size(); i++){
		if(A[i]%2) odd.push_back(A[i]);
		else even.push_back(A[i]);
	}
	even.insert(even.end(), odd.begin(), odd.end());
	return even;
    }
};


int main(){
	vector<int> input;
	input.push_back(3);
	input.push_back(1);
	input.push_back(2);
	input.push_back(4);
	Solution sol;
	vector<int> output = sol.sortArrayByParity(input);
	for(int i=0; i<output.size(); i++){
		cout << output[i] << " ";
	}
	cout << endl;
	return 1;
}
