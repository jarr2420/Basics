 #include<iostream>
 using namespace std;                     //pivot and key finding
 int main(){                    
    int a[8]={7,8,9,1,2,3,4,5};
    int key=3;
  int s=0,e=7,mid;
   while(s<e){                               // }
      mid=(e+s)/2;
      if(a[mid]>a[0]){
         s=mid+1;     
      }
      else{                                            //pivot finding 
          e=mid;
      }
    }
    cout<<"Pivot is present at : "<<s<<endl;   //}
    e=7;
    while(s<=e){
      mid=(e+s)/2;
      if(a[mid]==key){
         cout<<"Key found at : "<<mid;
         return 0;
      }
      else if(a[mid]>key) {e=mid-1;}
      else if(a[mid]<key) {s=mid+1;}
    }
      return 0;
  }
  