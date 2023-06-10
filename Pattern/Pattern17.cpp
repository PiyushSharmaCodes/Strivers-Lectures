//       A 
//     A B A 
//   A B C B A 
// A B C D C B A 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number rows in the pattern ";
cin>>n;
for (int i = 1; i < n; i++)
{
    int spaces=n-i;
    for (int j = 1; j < spaces; j++)
    {
        cout<<"  ";
    }
    for (char ch = 'A'; ch < 'A'+i ;ch++ )
    {
        cout<<ch<<" ";
    }
    for (char ch = 'A'+i-2; ch >= 'A' ;ch-- )
    {
        cout<<ch<<" ";
    }
    
    
    cout<<endl;
}


return 0;
}