#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s="SNNNEWE";
    int x=0, y=0;
    int n=s.size(),i=0;
    while(n--){
    switch(s[i]){
        case 'N' : y++; 
        break;
        case 'S' : y--; 
        break;
        case 'E' : x++; 
        break;
        case 'W' : x--; 
        break;
    }
    i++;
    }
        // cout<<"hello";
  
    if(y>0){
        while(y--){
            cout<<"N";
        }
    }
    else{
         while(y++){
            cout<<"S";
        }
    }
  if(x>0){
        while(x--){
            cout<<"E";
        }
    }
    else{
         while(x++){
            cout<<"W";
        }
    }
return 0;
}