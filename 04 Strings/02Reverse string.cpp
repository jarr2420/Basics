 #include<iostream>
 #include<vector>
 #include<string>
 using namespace std;
 int main(){
    string a="THE SKY IS BLUE";
    vector<string>temp;
    string str="";
    int s=0,e=a.size()-1;
    // cout<<e;
    while(s<=e){
      if(a[s]==' '){
        temp.push_back(str);
        str="";
      }
      else{
        str+=a[s];
      }
      s++;
    }
    //pushing last word to the vector
     temp.push_back(str);
    //pushing into an string 
     int i=0;
     int j=temp.size()-1;
        str="";
     	for (i = temp.size() - 1; i > 0; i--)
		str+= temp[i]+"@";
        //removing last space 
       str.pop_back();
   
    cout<<str;

    
 return 0;
 }