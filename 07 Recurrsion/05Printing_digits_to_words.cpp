 #include<iostream>
 using namespace std;
 void speak_digits(string *arr,int n){
    //base case
    if(n==0) return;
    //processing
    int r=n%10;
    n/=10;
    
    speak_digits(arr,n);

    cout<<arr[r]<<endl;

 }
 int main(){
    string digits[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    speak_digits(digits,1234);
 return 0;
 }