// Rearrange half elements in increasing order and other half in decreasing order

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    vector<int> v(5);
    int n = v.size();
    for(int i =0; i<v.size(); i++){

        cin >> v[i];
    }
    for(int i =0; i<v.size(); i++){

        cout<< v[i] << "  ";
    }
    cout<< endl;

    sort(v.begin(), v.end());
     for(int i =0; i<v.size(); i++){

        cout<< v[i] << "  ";
    }
    cout<<endl;
    
    reverse(v.begin()+n/2 , v.end());
    for(int i =0; i<v.size(); i++){

        cout<< v[i] << "  ";
    }
    return 0;
}