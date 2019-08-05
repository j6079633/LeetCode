/* Given a valid (IPv4) IP address, return a defanged version of that IP address.
 *A defanged IP address replaces every period "." with "[.]"
 */
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string out = "";
        for(int i = 0; i<address.length(); i++){
            if(address[i] != '.'){
                out += address[i];
            }
            else{
                out += "[.]";
            }
        }
        return out;
    }
};

int main(){
    string input1 = "1.1.1.1";
    string input2 = "255.100.50.0";
    Solution sol = Solution();
    cout << sol.defangIPaddr(input1)<< endl;
    cout << sol.defangIPaddr(input2)<<endl;
    return 0;
}
