// E   
// D E 
// C D E 
// B C D E 
// A B C D E 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of rows in the pattern ";
cin>>n;
char ch;
for (int i = 0; i < n; i++)
{
    ch='A'+n-i-1;
    for (int j = 0; j <= i; j++)
    {
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
}


return 0;
}