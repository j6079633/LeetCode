#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    int minDeletionSize1(vector<string>& A) { //Slow solution
        int s_size = A[0].length();
        int A_size = A.size();
        vector<int> D; // deletion indice
        int nonDecrease = 1;
        for(int i =0; i<s_size;i++){
            for(int j=0; j<A_size-1; j++){
                if (A[j][i] > A[j+1][i] ){
                    nonDecrease = 0;
                    //printf("%c %c\n", A[j][i], A[j+1][i]);
                    break;
                }
            }
            if(!nonDecrease){
                D.push_back(i);
            }
            nonDecrease = 1;
        }
        return D.size();
    }
    int minDeletionSize(vector<string>& A) { // Faster Solution
        int s_size = A[0].length();
        int A_size = A.size();
        vector<int> D; // deletion indice
        for(int i =0; i<s_size;i++){
            for(int j=0; j<A_size-1; j++){
                if (A[j][i] > A[j+1][i] ){
                    D.push_back(i);
                    break;
                }
            }
        }
        return D.size();
    }
};

int main(){
    vector<string> input1 = {"cba","daf","ghi"};
    vector<string> input2 = {"a","b"};
    vector<string> input3 = {"zyx","wvu","tsr"};
    Solution sol = Solution();
    cout << sol.minDeletionSize(input1)<< endl;
    cout << sol.minDeletionSize(input2)<< endl;
    cout << sol.minDeletionSize(input3)<< endl;
    return 0;
}