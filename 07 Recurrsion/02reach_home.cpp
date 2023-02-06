#include<iostream>      ///love babbar recursion
#include<string>
#include<vector>
using namespace std;
void reach_home(int source,int destination){
    //base case     
    if(source==destination){
        cout<<"At 10th step : pauch gaya ghar"<<endl;
        return;
    }
        cout<<"taken step : "<<source<<endl;
    //processing -->ek step agge badh jao
    source++;

    reach_home(source,destination);
}
int main(){
    int src=1,dest=10;
    reach_home(src,dest);
return 0;
}