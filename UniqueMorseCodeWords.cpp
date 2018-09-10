/* International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes,
 * as follows: "a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.
 * For convenience, the full table for the 26 letters of the English alphabet is given below:
 * [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
 * Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. 
 * For example, "cab" can be written as "-.-.-....-", (which is the concatenation "-.-." + "-..." + ".-"). 
 * We'll call such a concatenation, the transformation of a word.
 * Return the number of different transformations among all words we have. 
 * */
#include <vector>
#include <iostream>
#include <stdio.h>
#include <map>
#include <string>
using namespace std;
class Solution{
public:
	std::vector<string> morseCode(){
		std::vector<string> MorseCode;
		MorseCode.push_back(".-"); 
		MorseCode.push_back("-...");
		MorseCode.push_back("-.-.");
		MorseCode.push_back("-..");
		MorseCode.push_back(".");
		MorseCode.push_back("..-.");
		MorseCode.push_back("--.");
		MorseCode.push_back("....");
		MorseCode.push_back("..");
		MorseCode.push_back(".---");
		MorseCode.push_back("-.-");
		MorseCode.push_back(".-..");
		MorseCode.push_back("--");
		MorseCode.push_back("-.");
		MorseCode.push_back("---");
		MorseCode.push_back(".--.");
		MorseCode.push_back("--.-");
		MorseCode.push_back(".-.");
		MorseCode.push_back("...");
		MorseCode.push_back("-");
		MorseCode.push_back("..-");
		MorseCode.push_back("...-");
		MorseCode.push_back(".--");
		MorseCode.push_back("-..-");
		MorseCode.push_back("-.--");
		MorseCode.push_back("--..");
		return MorseCode;
	}
        int uniqueMorseRepresentations(std::vector<string>& words){
        	std::vector<string> MorseCode = morseCode();
		//std::vector<string> TransferResult(words.size());
		map<string, string> TransferResult;
		map<string, string>::iterator iter;
		for(int i=0; i<words.size(); i++){
			string str="";
			for(int j=0; j<words[i].size(); j++){
				str = str + MorseCode[words[i][j]-'a'];
			}
			cout << str << endl;
			iter = TransferResult.find(str);
			if(iter==TransferResult.end()){
				TransferResult[str] = to_string(i);
			}
		}
		/* TODO: compare the difference of category*/
		return TransferResult.size();
		
	}
};

int main(){
	std::vector<string> words;
	words.push_back("gin");
	words.push_back("zen");
	words.push_back("gig");
	words.push_back("msg");
	Solution sol;
	cout << sol.uniqueMorseRepresentations(words)<<endl;
	return 0;
}
