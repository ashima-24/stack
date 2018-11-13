#include<iostream>
#include<vector>
using namespace std;

int main()

{
    std:: vector<int>a={1,2,3,4};
int b=a.size();
std::cout<<b<<"\n";
//cout<<b<<"\n";
a[b-1]=a[b-1]+1;
for(int y=0;y<b;y++)
std::cout<<a[y];

return 0;



}
