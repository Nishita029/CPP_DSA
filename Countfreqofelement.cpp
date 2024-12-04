// count frequency of each element

#include<iostream>
using namespace std;
int main(){

    int n;
    cout <<"Enter size of array: ";
    cin>>n ;
    int a[20];
    cout<<"Enter elements of array :";
    for(int i = 0;i < n; i++){

        cin>> a[i];
    }
    for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){

                if(a[i] > a[j]){
                swap(a[i], a[j]);
                }
            }
        }
    for(int i = 0;i < n; i++){

        cout<< a[i] <<"  ";
    }
    cout<<endl;
    for(int i = 0; i < n; i++){

        int count = 1;
        for(int j = i+1; j < n; j++){

            if(a[i] == a[j])
            count++;
        }

        cout << a[i] <<" - " << count <<" times";
        cout<<endl;
    }
    return 0;

}