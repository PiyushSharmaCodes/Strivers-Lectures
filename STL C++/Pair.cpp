#include<iostream>
using namespace std;
int main(){
    pair <int ,int > p = {1,2};
    cout<<p.first<<" "<<p.second<<"  "<<endl;
    pair <int,pair <int,int>> pairtwo = {1 , {3,4}};
    cout<<pairtwo.second.second<<endl;
    pair <int,int> pairarray[] = {{1,2},{2,3},{3,4}};
    cout<<pairarray[2].first;

return 0;
}