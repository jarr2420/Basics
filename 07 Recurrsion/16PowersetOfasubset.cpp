#include<iostream>
using namespace std;
#include<vector>
void solve(vector<int>nums,vector<int>output,int index,vector<vector<int> >&ans){
     //base case
     if(index>=nums.size()){
     //    ans.push_back(output);
     for(int i=0;i<output.size();i++){
     cout<<output[i]<<"  ";
     }
     cout<<endl;
        return;
     }
     //exclude process
     solve(nums,output,index+1,ans);
     //include process 
     int element=nums[index];
     output.push_back(element);
     solve(nums,output,index+1,ans);
}
vector<vector<int>> subset(vector<int> &nums){
    vector<int>output;
    int index=0;
    vector<vector<int> >ans;
    solve(nums,output,index,ans);   
}

int main(){
     vector<int>nums={1,2,3};
    //  int n=nums.size();
    //  cout<<n;
    //  int index=0;int e=n-1;
     subset(nums);
return 0;
}