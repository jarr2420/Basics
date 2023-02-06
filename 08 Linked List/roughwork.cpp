#include<iostream>
#include<string>
#include<vector>
using namespace std;
int isPossible (string S)
{
    string ans;
    int n=S.length();
    for(int i=0;i<n;i++){
    int flag=0;
        for(int j=i+1;j<n;j++){
            if(S[i]==S[j]){
                S[i]=S[j]='\0';
                flag=1;
            }
            }
            if(flag==0){
                ans+=S[i];
        }
    }
    cout<<"hello"<<endl;
    //         cout<<ans<<endl;
            cout<<ans.size()<<endl;
            for(auto x:ans){
                x='*';
                cout<<x;
            }
    if(ans.length()<=2) return 1;
    else return 0;
}
int main(){
    string S = "vy";
    cout<<isPossible(S);
return 0;
}