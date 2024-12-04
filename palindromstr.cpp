#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string S1;
    cout<<"enter line or string\n";
    getline(cin,S1);
   // cout<<S1<<endl;
    int i;
    bool flag= true;
    for( i=0; S1[i]!='\0';i++);
   int len=i;
   i--;
    for(int j=0;j<len/2;j++){
        if(S1[j]!=S1[i]){
            flag=false;
          break;
        }
        i--;
        
        
    }
   // cout<<i;
    if(flag)
    cout<<"palindrom";
    else
    cout<<"not palindrom";
    return 0;
}