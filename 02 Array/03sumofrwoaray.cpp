#include<iostream>           //sum of elements of two aray treating them as a number
#include<vector>
using namespace std; 
vector<int> reverse(vector<int>&a){
    int i=0,j=a.size()-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++; j--;
    }
     for(int x=0;x<a.size();x++){
        cout<<a[x]<<" ";
      }
    return a;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int carry=0;
    int i=n-1;
    int j=m-1;
    int sum;
    vector<int> ans;
    while(i>=0 && j>=0){
        sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;j--;
    }
    while(i>=0){
         sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
     while(j>=0){
        sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
     }
      while(carry!=0){
         sum=carry;
          carry=sum/10;
          sum=sum%10;
      ans.push_back(sum);
      }
     
    return reverse(ans);
    
}
int main(){
  vector<int>a;
  a.push_back(4);
  a.push_back(9);
  a.push_back(9);
  vector<int>b;
   b.push_back(9);
  b.push_back(9);
  b.push_back(9);
   findArraySum(a,3,b,3);
   
return 0;
}