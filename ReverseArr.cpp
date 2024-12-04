// Reverse the array without using extra space

#include<iostream>
using namespace std;


int main(){
    int size; 
    cout << "Enter size : ";
    cin>> size;

    int a[15];

    cout<<"Enter elements of array: "<< endl;
    for(int i = 0; i < size; i++){

        cin >> a[i];
    }
    for(int i = 0; i < size; i++){

        cout<< a[i]<<"  " ;
    }
    cout<< endl;
    
    int i = 0;
    int j = size - 1;

    while(i <= j){

        swap(a[i], a[j]);
        i++;
        j--;
    }
    cout<<"After reverse: "<< endl;

    for(int i = 0; i < size; i++){

        cout<< a[i] <<"  ";
    }
    

    return 0;
}