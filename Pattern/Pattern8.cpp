// * * * * * * * * * 
//   * * * * * * *
//     * * * * *
//       * * *
//         * 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of rows in the pattern ";
cin>>n;

// ⁡⁢⁣⁢Aprroach 1⁡ 

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         cout<<"  ";
//     }
//     for (int j = n-i-1; j > 0 ; j--)
//     {
//         cout<<"* ";
//     }
//     cout<<"* ";
//     for (int j = n-i-1; j > 0 ; j--)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
    
// }

// ⁡⁢⁣⁣Approach 2⁡

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++)
    {
        cout<<"  ";
    }
    for (int j =0; j < 2*(n-i-1) ; j++)
    {
        cout<<"* ";
    }
    cout<<"* ";
    cout<<endl;
    
}



return 0;
}