#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
      string s="ABCD";
    for(int i=0;i<s.length();i++){
        for(int lenght=1;lenght<=4-i;lenght++){
            cout<<s.substr(i,lenght)<<endl;
        }
    }
return 0;
}