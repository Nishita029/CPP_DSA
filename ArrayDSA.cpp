// Introduction to arrays 

// #include<iostream>
// using namespace std;
// int main(){


//     int a[] = { 1, 5, 6, 7};

//     cout << "Value of index 3 : " << a[3];
   
//     // int a[] = {1,5,7,6};
//     // for(int i = 0; i < 4 ; i++){

//     //     cout << a[i] << "  ";
//     // }

//     return 0;
// }


// Arrays with functions 

#include<iostream>
using namespace std;
void PrintArray(int a[], int size){

for (int i = 0; i < size ; i++ ){

    cout << "Elements of array : " << a[i] <<"  ";
}
    
}

int main(){
    
    int first[15] = { 1,0,4};
    
    PrintArray(first,15); 


    int second[10] = { 1, 5, 6 , 8 , 7};
    
    PrintArray(second,10); 


    int third[7] = { 1, 5 , 8 , 7};
    
    PrintArray(third,7); 


    int forth[5] = { 6 , 8 , 7};
    
    PrintArray(first,15); 

    return 0 ;
}