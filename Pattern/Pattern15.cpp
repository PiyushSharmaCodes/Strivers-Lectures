// A B C D E 
// A B C D   
// A B C     
// A B       
// A    
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of rows in the pattern ";
cin>>n;
char ch;
for (int i = 0; i < n; i++)
{
   for (char ch = 'A'; ch < 'A'+(n-i); ch++)
   {
    cout<<ch<<" ";
   }
   cout<<endl;
}

return 0;
}