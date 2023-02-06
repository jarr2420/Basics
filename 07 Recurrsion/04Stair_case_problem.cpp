
// In the first test case, there are only two ways to climb the stairs, i.e. {1,1} and {2}.
// In the second test case, there are three ways to climb the stairs i.e. {1,1,1} , {1,2} and {2,1}.
#include<iostream>
#include<string>
#include<vector>
using namespace std;
 long long countDistinctWays(long long nStairs) {
    //base case
    if (nStairs<0) return 0;
    if (nStairs==0) return 1;
    //recursive relation
    long long ans=countDistinctWays( nStairs-1)+countDistinctWays( nStairs-2);
    return ans;
}
int main(){
    cout<<countDistinctWays(5);
return 0;
}