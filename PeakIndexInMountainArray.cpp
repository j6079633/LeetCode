/* Let's call an array A a mountain if the following properties hold:
 * A.length >= 3
 * There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]
 * Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].
 */
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
  	return distance(A.begin(), max_element(A.begin(), A.end()));      
    }
};

int main(){
	Solution sol;
	vector<int> input;
	input.push_back(0);
	input.push_back(1);
	input.push_back(2);
	input.push_back(3);
	input.push_back(1);
	input.push_back(0);
	cout << sol.peakIndexInMountainArray(input) << endl;
	return 0;
}
