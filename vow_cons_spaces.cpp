#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    int vow=0,spaces=0,cons=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]== 'i' || s[i]=='O' || s[i]=='o'|| s[i]=='U' || s[i]=='u'  ){
            vow++;
        }
        if (s[i]== ' '){
            spaces++;
        }
    }
    cons= s.length() - (vow+spaces);

    cout<<"vowels="<<vow<<endl;
    cout<<"consonent="<<cons<<endl;
    cout<<"spaces="<<spaces<<endl;

    return 0;

}
