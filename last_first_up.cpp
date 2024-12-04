#include<bits/stdc++.h>
using namespace std;
string upperstr(string str , int size){
   
    for(int i=0 ; str[i]!='\0'; i++){
        if(i==0 || str[i-1]==' '){
            cout<<i<<endl;
            str[i]=toupper(str[i]);
        }
        if(i==size-1 || str[i+1]==' '){
            cout<<i<<endl;
            str[i]=toupper(str[i]);
        }
    }
    return str;

}
int main(){  
    string str;
    getline(cin,str);
    cout<<"  origial string is"<<str<<endl;
    int len=str.length();
    cout<<  upperstr(str,len);
    return 0;
}