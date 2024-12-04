// Duplicates in sorted array

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    int n = v.size();
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    string s1 = to_string(v); 
    
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    cout<< endl;
    sort(v.begin(), v.end());

     for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
     for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n ; j++){

            if(v[i]==v[j]){
                v.erase(j,1);
            }
    
        }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}