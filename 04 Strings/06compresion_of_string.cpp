 #include<iostream>
 #include<string>
 #include<vector>
 using namespace std;
 int main(){
    string s="abbcccdddd"; //no need to add 1 for single letter
    int n=s.size();
    string output="";
    for(int i=0;i<n;i++){
    int count =1;
    output+=s[i] ;
    while(i < n-1 && s[i]==s[i+1]){
    count++;
    i++;
    }
    if(count>1)
    output+=to_string(count);
    }
    if(output.size()<s.size()){
        cout<<output<<endl;
    }
    else{
        cout<<s;
    }
 return 0;
 }
