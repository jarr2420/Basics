 #include<iostream>
 #include<vector>
 #include<string>
 #include<stack>
 using namespace std;
 int main(){
    string s="THE@SKY@ISBLUE";
    string sub1=s.substr(2);      cout<<sub1<<endl;
    string sub2=s.substr(2,3);      cout<<sub2<<endl;
    int pos=s.find('@');          cout<<pos<<endl;
// Copy substring before pos .
    string sub3 = s.substr(0 , pos);  cout<<sub3<<endl;
//converting string into integer function .
    string str1 = "123";
    int x = stoi(str1);
    cout << "stoi(\"" << str1 << "\") :convert string to integer and adding 1 " << x+1 << '\n';
// function s find() part and erase() .
    string a="PUN**T**T**T";
    string part="**";
    cout<<a<<endl;
    cout<<a.find(part)<<endl;
    a.erase(a.find(part),part.length());   
    cout<<a<<endl;
    a.erase(a.find(part),part.length());
    cout<<a<<endl;
//converting number to_string()
    int numbr=199;
    cout<<numbr<<endl;
    string str=to_string(numbr);
    cout<<str[0]<< " converted to string"<<endl;
    cout<<str[1]<<endl;
// upper to lower and vice versa.
cout<<"upper to lower and vice versa"<<endl;
    char g='a';
    cout<<tolower(g)<<endl;
// stack and function.
    stack <char> stk; //size();pop();push();
    cout<<"return true or false : "<<stk.empty()<<endl; 
    stk.push('A');
    cout<<"print top most element of stack : "<<stk.top()<<endl;
    stk.push('B');
    cout<<stk.top()<<endl;
// if  we want to input up to a particular character we can use getline.
    char p[1000];
    cin.getline(p,1000,'g'); //it will read your input up just one char befor     g
    cout<<p<<endl;
//difference between strlen(),strsize();
cout<<"difference between strlen(),strsize()"<<endl;
    char as[]="qwe";
//    cout<<strlen(as)<<endl;  //  because this do not count null character 
    cout<<sizeof(as)<<endl;    //this also counts null character  +1



 return 0;
 }