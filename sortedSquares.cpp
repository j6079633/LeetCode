/*
 *Given an array of integers A sorted in non-decreasing order, 
 *return an array of the squares of each number, 
 *also in sorted non-decreasing order.
 */
#include <vector>
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector <int> output(A.size(), 0);
        for(int i = 0; i < A.size(); i++){
            output[i] = A[i] * A[i];
        }
        sort(output.begin(), output.end());
        return output;
    }
};

int main(){
    vector<int> input1;
    input1.push_back(-4);
    input1.push_back(-1);
    input1.push_back(-0);
    input1.push_back(3);
    input1.push_back(10);

    vector<int> input2;
    input2.push_back(-7);
    input2.push_back(-3);
    input2.push_back(2);
    input2.push_back(3);
    input2.push_back(11);

    Solution sol;
	std::vector<int> squares1 = sol.sortedSquares(input1);
	for(int i=0; i < squares1.size(); i++){
        printf("%d ", squares1[i]);
    }
    printf("\n");
    
	std::vector<int> squares2 = sol.sortedSquares(input2);
	for(int i=0; i < squares2.size(); i++){
        printf("%d ", squares2[i]);
    }
    printf("\n");
	
    return 0;
}