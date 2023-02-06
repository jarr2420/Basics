#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    // Input: nums = [4,3,2,7,8,2,3,1]
    // Output: [2,3]
    int a[8]={4,3,2,7,8,2,3,1};
    int n=8;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
          if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
    // pring after sorting
      for(int j=0;j<n;j++){
          cout<<a[j]<<endl;
        }
    //counting elements
    vector<int> ans;
    int s=0,e=n-1;
     while(s<e){
        if(a[s]==a[s+1]){
            ans.push_back(a[s]);
            s+=2;
        }
        else   s++;
      
     }

     //printing
     cout<<"printing real ans"<<endl;
      for(int j=0;j<ans.size();j++){
          cout<<ans[j]<<endl;
        }
     
    
return 0;
}