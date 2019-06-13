#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& A){
        map<int, int> count;
        for(int i=0; i<A.size(); i++){
            if(count.find(A[i])==count.end()){
                count[A[i]] = 1;
            }else{
                count[A[i]]+=1;
            }
        }
        map<int, int>::const_iterator it;
        
        for (it = count.begin(); it != count.end(); ++it)
        {
            if (it->second == (A.size()/2))
            {
                return it->first;
            }
        }
        return 0;
    }
};

int main(){
        Solution sol;
        vector<int> input1{1,2,3,3};
        cout << sol.repeatedNTimes(input1) << endl;
        vector<int> input2{2,1,2,5,3,2};
        cout << sol.repeatedNTimes(input2) << endl;
        vector<int> input3{5,1,5,2,5,3,5,4};
        cout << sol.repeatedNTimes(input3) << endl;
        return 0;
}