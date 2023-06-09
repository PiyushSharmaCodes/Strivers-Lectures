// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of row in the pattern ";
cin>>n;

// Approach 1

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <= i; j++)
//     {
//        cout<<"* ";
//     }
//     cout<<endl;

// }
// for (int i = 0; i < n; i++)
// {
//     for (int j = n-i-1; j  > 0; j--)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
    
// Approach 1

for (int i = 0; i < 2*n-1; i++)
{
    int stars=i+1;
    if (i>n-1)
    {
        stars=2*n-i-1;
    }
    for (int j = 0; j < stars; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
    
}

    



return 0;
}