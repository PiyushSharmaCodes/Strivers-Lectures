// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of rows in the pattern ";
cin>>n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n ; j++)
    {
        if(j <= i)
        {
            cout<<j<<" ";
        }
        else{
            cout<<"  ";
        }
        
        
    }
    for (int j = 1; j <= n ; j++)
    {
        if(j > n-i)
        {
            cout<<n-j+1<<" ";
        }
        else{
            cout<<"  ";
        }
        
        
    }
    cout<<endl;
    
}


return 0;
}


