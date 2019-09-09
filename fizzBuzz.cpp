#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> output(n, "");
        for(int i = 1; i <= n; i++){
            if(i%3==0){
                output[i-1]+="Fizz";
            }
            if(i%5==0){
                output[i-1]+="Buzz";
            }
            if(i%3!=0 && i%5!=0){
                output[i-1]+=to_string(i);
            }
        }
        return output;
    }
};

int main(){
        Solution sol;
        vector<string> ans = sol.fizzBuzz(15);
        for(int i = 0; i<ans.size(); i++){
            cout << ans[i] << endl;
        }
        return 0;
}