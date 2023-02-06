#include<iostream>
using namespace std;
#include<vector>
#include<string>
void solve(string nums,string output,int index,vector<string>&ans){
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
     char element=nums[index];
     output.push_back(element);
     solve(nums,output,index+1,ans);
}
vector<string> subsequences(string nums){
    string  output="";
    int index=0;
    vector<string>ans;
    solve(nums,output,index,ans);
    }
    int main(){
     string nums="abc";
    //  int n=nums.size();
    //  cout<<n;
    //  int index=0;int e=n-1;
     subsequences(nums);
return 0;
}