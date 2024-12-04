#include<bits/stdc++.h>
using namespace std;

void removesp(string S1){
    string S2;
    int j=0;

    
    for ( int i=0 ; S1[i]!='\0'; i++){
        
        if ( S1[i]== ' '){
            continue;
        }
    //cout<<S1[i];
        S2.push_back(S1[i]);
       
      
    }
      cout<<S2;
    
 // cout<<S1;
}
int main(){
    string S1;
    cout<<"enter your string"<<endl;
    getline(cin,S1);
    removesp(S1);
    return 0;
}
