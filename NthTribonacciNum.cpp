#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    int tribonacci1(int n) {
        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }
        else if(n==2){
            return 1;
        }
        else{
            return tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);
        }
        
    }
    int tribonacci(int n) {
        int a[n+3];
        a[0] = 0;
        a[1] = 1;
        a[2] = 1;
        for(int i = 3; i<=n; i++){
            a[i] = a[i-3]+a[i-2]+a[i-1];
        }
        return a[n];
    }
};

int main(){
    int input1 = 4;
    int input2 = 25;
    Solution sol = Solution();
    cout << sol.tribonacci(input1)<< endl;
    cout << sol.tribonacci(input2)<<endl;
    return 0;
}