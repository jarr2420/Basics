#include<iostream>
using namespace std;
int main(){
    string a="PuneEEEt";
    int ar[26]={0};      //for storing letter count 
    int i=0;
    while(a[i]!='\0'){
        int ch;
        if(a[i]>='a'&&a[i]<='z'){     
         ch=a[i]-'a';             //dealing with upper and lower case
        }
         else  ch=a[i]-'A';
     ar[ch]++;
     i++;
    }
        int x , max=0, maxindex;
    for( x=0;x<26;x++){
        if(max<ar[x]){          //finding max index and converting that into letter
            max=ar[x];
             maxindex=x;
        }
    }
    char chr='A'+maxindex;
    cout<<"Character comes : " <<max<<" times"<<endl;
    cout<<"index of max character : "<<maxindex<<endl;
    cout<<" maximum character is : "<<chr;
    // cout<<"maximum  "<<max<<"  :"<<chr<<" "<<x-1;
return 0;
}