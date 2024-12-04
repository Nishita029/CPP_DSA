#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(int x) {
        string s = to_string(x);
        int rev=0;
        string t = x;
        while(x!='\0'){
            int d= x%10;
            rev=(rev*10)+d;
            x/=10;
        }
        if(rev == temp)
        return true;
        else
        return false;
        
    }
    int main(){
        int x;
        cout <<"Enter value: ";
        cin>>x;
        isPalindrpme(x);
        return 0;
    }