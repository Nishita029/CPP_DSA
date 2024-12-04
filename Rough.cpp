#include<bits/stdc++.h>
using namespace std;
   int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(int i =0; i< nums.size(); i++){
            if(nums[i] != val)
                count ++ ;//is code me kya kiya hai smjh hi nhi aa rha remove krna hai na element ye remove krne ki jgh count return kr rha hai
        }
        return count;
    }
    int main(){
        vector<int> nums(5);
        int val;
        cout<<"enter values: ";
        cin>>val;
        for(int i=0; i < nums.size(); i++){
            cin>>nums[i];
        }
        for(int i=0; i < nums.size(); i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    cout<<removeElement(nums,val);
    
    return 0;
}
