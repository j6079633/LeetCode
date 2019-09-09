#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people){
        vector<int> dis(num_people, 0);
        int n = 0; // person id
        int c = 1; // candy to give
        while(candies > 0){
            printf("%d %d %d %d\n", n, c, dis[n], candies);
            if(candies - c <=0){
                dis[n] += candies;
                break;
            }
            else{
                candies -= c;
                dis[n]+=c;
                c+=1;
                if(n+1==num_people){
                    n=0;
                }
                else{
                    n+=1;
                }
                
            }
        }
        return dis;
    }
};

int main(){
    Solution sol = Solution();
    int c1 = 10;
    int p1 = 3;
    vector<int> ans1 = sol.distributeCandies(c1, p1);
    for(int i = 0; i < p1; i++){
        cout<< ans1[i]<< " ";
    }
    return 0;
}