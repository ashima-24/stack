#include<iostream>
#include<vector>
using namespace std;

int main()

{ 
    std:: vector<int>a={0};
//cout<<b<<"\n";
int b=a.size();
std::cout<<b<<"\n";
    a[b-1]=a[b-1]+1;

if(a[b-1]==10)
{
a[b-1]=0;
for(int i=b-2;i>=0;i--)
{
    a[i]+=1;
if(a[i]!=10)
break;
else{

    a[i]=0;
if (i==0)
    a[i]=10;

}
}
 
}
for(int y=0;y<b;y++)
std::cout<<a[y];

return 0;



}
