#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {


        if(n<= 2){
            return n;
        }

        int f =1;
        int s =2 ;
        int ans =0;

        //start from step 3
        for ( int i = 3 ; i<=n ;i++){
            ans = f +s ;
            f =s ;
            s = ans ;
        }
        
        return ans ;
    }
};

int main() {
    Solution solution;
    int n = 7; // Example input
    int result = solution.climbStairs(n);
    std::cout << "Number of distinct ways to climb to the top: " << result << std::endl;
    return 0;
}