#include<iostream>                 ///SQUAREROOT USING BINARY METHOD
using namespace std;
  long long int temp_ans(int n){
        int s=0,e=n;
        long long int mid=s+(e-s)/2,ans=-1;
        while(s<=e){
       long long  int sq=mid*mid;
            if(sq==n) return mid;
            if(sq<n){
                ans=mid;     s=mid+1;
            }
            else {   e=mid-1;   }
             mid=s+(e-s)/2;
            }
        return ans;
        }
        
double precise(int n,int precision,int tempsol){
         double ans=tempsol;
        double fact=1;
    for(int i=0;i<precision;i++){
        fact=fact/10;
        for(double j=ans;j*j<n;j=j+fact){
            ans=j;
        }
    }
    return ans;
}
int main(){             ///squareroot of 37
    int tempsol=temp_ans(37);
    cout<<precise(37,3,tempsol);
return 0;   }