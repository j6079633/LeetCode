/* The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
 * Given two integers x and y, calculate the Hamming distance.
 */

#include <vector>
#include <iostream>
#include <stdio.h>
#include <map>
#include <string>
#include <bitset>
using namespace std;

class Solution{
public:
	int hammingDistance(int x, int y) {
		bitset<32> x_bin(x), y_bin(y);
		bitset<32> diff;
		diff = x_bin ^ y_bin;
		return diff.count();
	}
		
};

int main(){
        Solution sol;
        cout << sol.hammingDistance(1, 4) << endl;;
        return 0;
}

