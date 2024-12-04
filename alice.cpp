 #include<iostream>
#include<vector>
using namespace std;
int main()
{   
    int n,count=0 ;
    cout<<"enter the number of person";
    cin>>n;

   vector<int>arr(n);
   cout<<"enter the digit:::";
   for(int i=0;i<arr.size();i++){
    cin>>arr[i];

   }
   if(arr[0]==arr[n-1])
   {
        cout<<0;
   }
   else{
       for(int i=1;i<arr.size();i++){
        if(arr[0]!=arr[i])
            count++;

    }
    cout<<"incorrect guesses"<<count;
   }

    return 0;
}