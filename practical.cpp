#include<iostream>
using namespace std;
int main()
{
    int star=0,hash=0;
    string s;
        cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='*')
            star++;
        else if(s[i]=='#')
            hash++;
        
        
    }    if(star>hash)
        cout<<star - hash<< " * is more than # ";

    else if(star<hash) 
        cout<<star - hash << " # is more than * ";
    else
        cout<<0 << " * and # are equal";
    
    
    // cout<<s[0]<<endl;
    // cout<<s[1]<<endl;
    // cout<<s[2]<<endl;
    // cout<<s[3]<<endl;
    // cout<<s[4]<<endl;
    // cout<<s[5]<<endl;
    // cout<<s[6]<<endl;
    cout<<endl;
   // cout<<s;
   return 0;
}