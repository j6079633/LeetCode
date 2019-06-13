/* Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M
 * Input roman numeral string and return the value*/
#include <map>
#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    map<char, int> relationship = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
public:
    int romanToInt(string s) {
        int num = 0;
        int index = 0;
        while(index < s.length()){
            if(s[index]=='I'){
                if(s[index+1]=='V'){
                    num += 4;
                    index += 2;
                }else if(s[index+1]=='X'){
                    num += 9;
                    index += 2;
                }else{
                    num += 1;
                    index += 1;
                }
            }
            else if(s[index]=='X'){
                if(s[index+1]=='L'){
                    num += 40;
                    index += 2;
                }else if(s[index+1]=='C'){
                    num += 90;
                    index += 2;
                }else{
                    num += 10;
                    index += 1;
                }
            }
            else if(s[index]=='C'){
                if(s[index+1]=='D'){
                    num += 400;
                    index += 2;
                }else if(s[index+1]=='M'){
                    num += 900;
                    index += 2;
                }else{
                    num += 100;
                    index += 1;
                }
            }else{
                num += relationship[s[index]];
                index += 1;
            }
            
        }
        return num;

    }
};
int main(){
	Solution sol;
        string input1 = "IV";
        cout << sol.romanToInt(input1) << endl;
        string input2 = "IX";
        cout << sol.romanToInt(input2) << endl;
        string input3 = "LVIII";
        cout << sol.romanToInt(input3) << endl;
        string input4 = "MCMXCIV";
        cout << sol.romanToInt(input4) << endl;
	
	return 0;
}
