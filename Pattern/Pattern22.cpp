//output for n=5


// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value for outer boundary ";
cin>>n;
for (int i = 0; i < 2*n-1; i++)
{
    for (int j = 0; j < 2*n-1; j++)
{
    int top=i;
    int left=j;
    int bottom=2*n-2-i;
    int right=2*n-2-j;
    int value=n-min(min(top,bottom),min(left,right));
    cout<<value<<" ";
}
cout<<endl;
}


return 0;
}