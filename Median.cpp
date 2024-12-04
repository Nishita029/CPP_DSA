// Median of given array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(4);
    int n = v.size();
    float M;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>v[i];

    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<"  ";        
    }
    cout<<endl;
    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        cout<<v[i]<<"  ";
    }
    if(n%2 == 0){
        int s = (float)(v[(n/2)-1] + v[((n/2))]);
        M = s/2;
        cout<<"Median: "<<M;
    }
    else{
       
        cout<<"Median: "<< v[n/2];
    }

    return 0;
}

// Typecasting in c++

// #include<iostream>
// using namespace std;
// int main(){

//     int a = 50, b = 4 ,c;
//     c = a/b;
//     cout<< (float)c;

//     return 0;
// }