#include<bits/stdc++.h>
using namespace std;

void removevowel(string str){
    for(int i=0;str[i]!='\0';i++){
          if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]== 'i' || str[i]=='O' || str[i]=='o'|| str[i]=='U' || str[i]=='u'  ){
            str = str.substr(0, i) + str.substr(i+ 1);
           i--;
        }
    }
    // for(int i=0;str[i]!='\0';i++){
    //       if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]== 'i' || str[i]=='O' || str[i]=='o'|| str[i]=='U' || str[i]=='u'  ){
    //         str.erase(i,1);
           
    //     }
    // }
    cout<<"string without vowel is"<<endl<<str;

}

int main(){
    string str;
    getline(cin,str);
   
   
    cout<<str<<endl;
  removevowel(str);
    return 0;
}

