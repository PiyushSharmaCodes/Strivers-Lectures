// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of rows in the pattern ";
cin>>n;
char ch;

// Approach 1

// for (int i = 0; i < n; i++)
// {
//     ch='A';
//     for (int j = 0; j <= i; j++)
//     {
//         cout<<(char)(ch+j)<<" ";
//     }
//     cout<<endl;
// }

 
// Approach 2 


 for(int i=0;i<n;i++){
          
          
          for(ch = 'A'; ch<='A'+i;ch++){
              cout<<ch<<" ";
              
          }
         
          cout<<endl;
          
      }

return 0;
}