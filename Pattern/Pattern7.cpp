//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *

#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"Enter the number of row ";
cin>>n;

// ⁡⁢⁣⁢Approach 1⁡
for (int i = 0; i < n; i++)
{
    for (int j = 1; j < n-i; j++)
{
    cout<<"  ";
}
cout<<"* ";
for (int j = 0; j < i; j++)
{
    cout<<"* ";
}
for (int j = 0; j < i; j++)
{
    cout<<"* ";
}
cout<<endl;
}

// ⁡⁣⁢⁢Approach 2

// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++)
//     cout<<"  ";
//     for(int j=0;j<2*i+1;j++)
//     cout<<"* ";
//     cout<<endl;
// }

return 0;
}