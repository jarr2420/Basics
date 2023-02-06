 #include<iostream>
 #include<string>
 #include<vector>
 using namespace std;
 int main(){           //leetcode 443
    char s[7]={'A','B','B','B','C','C','C'};
      int i=0,j=7;
    vector<char>ans;
      while(i<j){
        int count=1;
        char temp=s[i];
        i++;
        while(i<j && temp==s[i]){
            count++;
            i++;
        }
        ans.push_back(temp);
        //converting count to string 
        string cnt=to_string(count);
        if(count>1){

          for(auto x : cnt){
        ans.push_back(x);

          }
        }
        
      
      } 
      for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
      }
        
 return 0;
 }