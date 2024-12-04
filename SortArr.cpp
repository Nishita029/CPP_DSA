// Rearrange the array in increasing decreasing order using vector
 
//  #include<iostream>
//  #include<vector>
//  #include<algorithm>
//  using namespace std;
//  int main(){

//     vector<int> v(5);
    
//     for(int i=0; i<v.size(); i++){
//         cin>>v[i];
//     }
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<"  ";
//     }
//     cout<<endl;
   
//     sort(v.begin(),v.end());

//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<"  ";
//     }
//      //reverse(v.begin(),v.end());
//     return 0;
//  }



 //Basic vector fuctions
    //  cout <<endl;
    //  cout<<v.size()<<endl;
    //  cout<<v.capacity()<<endl;

    // v.push_back(9);
    //  for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<"  ";
    // }
    //  cout<<endl;
    //  cout<<v.size()<<endl;
    //  cout<<v.capacity()<<endl;



    // Rearrange the elements of an array using array

    #include<iostream>
    using namespace std;
    void Sort(int arr[], int size){

        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){

                if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                }
            }
        }
    return ;
    }
    int main(){
        int n;
        cin>>n;
        int a[20];

        cout <<"Enter the elements of array:";
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cout<<a[i]<<"  ";
        }
        cout<<endl;

        Sort(a,n);

        for(int i=0; i<n; i++){
            cout<<a[i]<<"  ";
        }
        return 0;
    }