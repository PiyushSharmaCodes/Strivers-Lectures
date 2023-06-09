// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of rows ";
cin>>n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        if ((i+j)%2==0)
        {
            cout<<"1 ";
        }
        else
        cout<<"0 ";
        
    }
    cout<<endl;
}


// {
//       // First row starts by printing a single 1.
//       int start =1;
      
//       // Outer loop for the no. of rows
//       for(int i=0;i<N;i++){
          
//           // if the row index is even then 1 is printed first
//           // in that row.
//           if(i%2 ==0) start = 1;
          
//           // if odd, then the first 0 will be printed in that row.
//           else start = 0;
          
//           // We alternatively print 1's and 0's in each row by using
//           // the inner for loop.
//           for(int j=0;j<=i;j++){
//               cout<<start;
//               start = 1-start;
//           }
      
      
//         // As soon as the numbers for each iteration are printed, we move to the
//         // next row and give a line break otherwise all numbers
//         // would get printed in 1 line.
//         cout<<endl;
//       }
// }


return 0;
}