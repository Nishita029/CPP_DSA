// Sum of all elements of array and Average too

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7);
    int n = v.size();
    int sum = 0;
    float avg;
    cout <<"Enter elements of array: ";
    for(int i=0; i<n ; i++){
        cin>>v[i];
    }
    for(int i=0; i<n ; i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    for(int i=0; i<n ; i++){
        sum = sum + v[i];
    }
    cout<<"Sum: "<< sum<< endl;
    avg = sum/n;
    cout<<"Average: "<<avg ;


    return 0;
}
