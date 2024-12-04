// REARRANGE THE BINARY NUMBER 

#include<iostream>
#include<vector>
using namespace std;
int main()
{   
     string s1,s2;
     cout<<"enter binary number";
     cin>>s1>>s2;
     int count0_1=0,count1_1=0;
     int count0_2=0,count1_2=0;
     for(int i=0;s1[i]!='\0';i++)
     {
        if(s1[i]=='1')
            count1_1++;
        else
            count0_1++;
     }
     for(int i=0;s2[i]!='\0';i++)
     {
        if(s2[i]=='1')
            count1_2++;
        else
            count0_2++;
     }
     if(count0_1==count0_2 && count1_1==count1_2 )
        cout<<"yes";
    else
    cout<<"no";


return 0;
}