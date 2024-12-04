#include<bits/stdc++.h>
using namespace std;

void removespaces(string str){
    for(int i=0;str[i]!='\0';i++){
          if(str[i]==' '){
            str = str.substr(0, i) + str.substr(i+ 1);
          // i--;
        }
    }
    cout<<"string without spaces is"<<endl<<str;

}

int main(){
    string str;
    getline(cin,str);
    removespaces(str);
    return 0;
}