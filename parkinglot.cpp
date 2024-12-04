#include <iostream>

using namespace std;

int main(){
    int R,S;
    int arr[20][20];
    int count=-1,temp=0;
    int rowindex=-1;
    cout<<"enter the rows";
    cin>>R;
    cout<<"enter the column";
    cin>>S;
    for(int i=0;i<R;i++){
        for(int j=0;j<S;j++){
           cin>>arr[i][j];
        }
    }
    for(int i=0;i<R;i++){
        count=0;
        for(int j=0;j<S;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
    if (temp<count){
        temp=count;
        rowindex=i+1;
    }

    }
    cout<<rowindex;
}
