// A 
// B B 
// C C C 
// D D D D 
// E E E E E 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of rows in the pattern ";
cin>>n;
char ch;

// Approach 1

for (int i = 0; i < n; i++)
{
    ch='A';
   for(int j = 0;j <= i; j++)
   {
    cout<<(char)(ch+i)<<" ";
   }
   cout<<endl;
}



return 0;
}