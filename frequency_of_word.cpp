#include<bits/stdc++.h>
using namespace std;
void frequency(string str, int size){
    map<char,int> mp;
    sort(str.begin(),str.end());
    for(int i=0;i<size;i++){
        mp[str[i]]++;
    }
    for(auto i:mp){
        cout<<i.first<<i.second<<' ';
    }


}
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    int len = str.length();
    frequency(str,len);
    return 0;
}