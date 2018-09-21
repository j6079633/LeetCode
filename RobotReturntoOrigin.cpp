/* There is a robot starting at position (0, 0), the origin, on a 2D plane. 
 * Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.
 * The move sequence is represented by a string, and the character moves[i] represents its ith move.
 * Valid moves are R (right), L (left), U (up), and D (down). 
 * If the robot returns to the origin after it finishes all of its moves, return true. Otherwise, return false.
 * */
#include <vector>
#include <iostream>
#include <stdio.h>
#include <map>
#include <algorithm>
using namespace std;
class Solution{
public:
	bool judgeCircle(string moves){
		int L = count(moves.begin(), moves.end(), 'L');
		int R = count(moves.begin(), moves.end(), 'R');
		int U = count(moves.begin(), moves.end(), 'U');
		int D = count(moves.begin(), moves.end(), 'D');
		if((L==R) && (U==D)) return true;
		else return false;
	}
};

int main(){
	string moves="LLRR";
	Solution sol;
	bool ans = sol.judgeCircle(moves);
	cout << ans << endl;
	return 0;
}
