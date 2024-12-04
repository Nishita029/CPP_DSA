// Min and Max element of array

// #include<iostream>
// using namespace std;
// int getMax(int Arr[], int n){

//     int M = Arr[0];

//     for(int i = 1; i < n; i++){

//         if(M < Arr[i])
//         M = Arr[i];
//     }

//     return M;
// }
// int getMin(int Arr[], int n){
    
//     int m = Arr[0];

//     for(int i = 1; i < n; i++){

//         if(m > Arr[i])
//            m = Arr[i];
//     }

//     return m;

// }

// int main(){
//     int size;
//     cin>>size;

//     int Arr[20];

//     cout<<"elements of array: ";

//     for(int i = 0; i < size; i++){

//         cin>>Arr[i];
//     }

//     cout<<"Minimum element of array: "<< getMin(Arr, size) << endl;
//     cout<<"Maximum element of array: "<< getMax(Arr, size);
    
//     return 0;
// }


// Second min and second max element of array

#include<iostream>
using namespace std;
int getSmax(int Arr[], int n){

    int M = Arr[0];

    for(int i = 1; i < n; i++){

        if(M < Arr[i])
        M = Arr[i];
    }

     // Second maximum element
       int Smax = Arr[0];

       for(int i= 1; i < n; i++){
        if(Smax < Arr[i] && Arr[i] != M )
            Smax = Arr[i];
       }
       
    return Smax;
}
int getSmin(int Arr[], int n){
    
    int m = Arr[0];

    for(int i = 1; i < n; i++){

        if(m > Arr[i])
           m = Arr[i];
    }

    // Second minimum element
    int Smin = Arr[0];

       for(int i= 1; i < n; i++){
        if(Smin > Arr[i] && Arr[i] != m )
            Smin = Arr[i];
       }

    return Smin;

}

int main(){
    int size;
    cin>>size;

    int Arr[20];
    cout<<"elements of array: ";

    for(int i = 0; i < size; i++){

        cin>>Arr[i];
    }
   
    cout<<"Second Minimum element of array: " << getSmin(Arr, size) << endl;
    cout<<"second Maximum element of array: " << getSmax(Arr, size);

    return 0;
}