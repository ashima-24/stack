#include <iostream>
#include<vector>
using namespace std;
int main() {
	cout<<"Hi from main\n ";
int a[5]={1,2,3,4,5};
int b=22,val;
for(int k=0;k<b;k++)
{ val=a[0];
for(int i=0;i<5;i++)
{

if (i==4)
{
    a[i]=val;
    break;

}
a[i]=a[i+1];

}


}
for(int j=0;j<5;j++)
cout<<a[j]<<"\n";
    
    /*

int a;
int *p;
p=&a;
a=5;
cout<<"\n"<<p;
cout<<"\n"<<&p;    
cout<<*p<<\n;
  */  return 0;
}
