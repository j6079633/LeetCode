#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string S) {
        int cur = 0;
        string out = "";
        for(int i=0; i<S.size(); i++){
            if(S[i]=='('){
                if(cur!=0){
                    out+=S[i];
                }
                cur+=1;
            }else{
                if(cur!=1){
                    out+=S[i];
                }
                cur -=1;
            }
        }
        return out;
    }
};

int main(){
    string input1 = "(()())(())";
    string input2 = "(()())(())(()(()))";
    Solution sol = Solution();
    cout << sol.removeOuterParentheses(input1)<< endl;
    cout << sol.removeOuterParentheses(input2)<<endl;
    return 0;
}
