 #include<iostream>
 #include<string>
 #include<queue>
 using namespace std;




 vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        queue<int>min(k);
        queue<int>max(k);
        //process for first window
        for(int i=0;i<k;i++){
            if(!min.empty() && arr[i]<min.front()){
                min.pop();
        }
            if(!max.empty() && arr[i]>min.front()){
                max.pop();
        }
        min.push(i);
        max.push(i);
    }
       int ans=0;
        ans+=min.front()+max.front();

         //processing rest elements
        for(int i=k;i<n;i++){
            //remove elements which is not required
            while(i-min.front()>=k){
                min.pop();
            }
            while(i-max.front()>=k){
                max.pop();
            }
            //adding elements
              if(!min.empty() && arr[i]<min.front()){
                min.pop();
        }
            if(!max.empty() && arr[i]>min.front()){
                max.pop();
        }
        min.push(i);
        max.push(i);
        ans+=min.front()+max.front();
        }
         return ans;
    }






 int main(){
    
 return 0;
 }