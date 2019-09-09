#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right){
        vector<int> output;
        for(int i = left; i <=right; i++){
            int num = i;
            //form digit array
            int isDivided = 1; // True

            while(1){
                int digit = num%10;
                if(digit==0){
                    isDivided = 0;
                    break;
                }
                if(i%digit!=0){
                    isDivided = 0;
                    break;
                }
                else{
                    num/=10;
                    if(num == 0){
                        break;
                    }
                }
            }
            if(isDivided){
                output.push_back(i);
            }
        }
        return output;
    }
};

int main(){
    Solution sol = Solution();
    int lb = 1;
    int ub = 22;
    vector<int> ans1 = sol.selfDividingNumbers(lb, ub);
    for(int i = 0; i < ans1.size(); i++){
        cout<< ans1[i]<< " ";
    }
    cout << endl;
    return 0;
}