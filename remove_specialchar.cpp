#include<bits/stdc++.h>
using namespace std;

string remove_special_char(string str){
    
    string result;
    for(int i=0;str[i]!='\0';i++){
        int ascii = (int) str[i];
        if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122){
            result.push_back(str[i]);
        }          
    }
    return result;
    
}

int main(){
    string str;
    getline(cin,str);
    cout<<remove_special_char(str);
    return 0;
}

