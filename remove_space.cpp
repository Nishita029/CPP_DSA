 
 // remove spaces from a given string
 
 
 #include<iostream>
#include<vector>
using namespace std;
int main()
{   
   char s1[]={"ni shi  ta"};
  
  
   int j = 0;
   for(int i = 0; s1[i]; i++){

        if (s1[i]==' '){

            continue;
        }
        else{
            s1[j] = s1[i];
            j++;
        }
        
   }
    


  //s1[j] ='\0';
   cout<< s1 <<" "<<endl;

   char n[]={"ab c d ef"};
    n[5]='\0';
    cout << n;

    return 0;
}