#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    void reverseString1(vector<char>& s) { // Slower solution
        int s_size = s.size();
        int center = s_size/2;
        if(s_size%2!=0){
            for(int i = 1; i <= center; i++){
                swap(s, center-i, center+i);
            }

        }
        else{
            for(int i =1; i<=center; i++){
                swap(s, center-i, center+i-1);
            }
        }
        
        for(int j = 0; j < s_size; j++){
            printf("%c ", s[j]);
        }
        printf("\n");
    }
    void reverseString(vector<char>& s) { // Faster Solution
        int s_size = s.size();
        int left = 0;
        int right = s_size-1;
        while(left < right){
            swap(s, left++, right--);
        }
        
        for(int j = 0; j < s_size; j++){
            printf("%c ", s[j]);
        }
        printf("\n");
    }
    void swap(vector<char>& s, int a, int b){
        char tmp = s[a];
        s[a] = s[b];
        s[b] = tmp;
    }
};

int main(){
    vector<char> input1 = {'h','e','l','l','o'};
    vector<char> input2 = {'H','a','n','n','a','h'};
    Solution sol = Solution();
    sol.reverseString(input1);
    sol.reverseString(input2);
    return 0;
}