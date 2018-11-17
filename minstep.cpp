#include<iostream>
using namespace std;
int main()
{
    int count[3]={0,0,0};

    int a[3]={5,6,2};


   for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if (a[i]<a[j])
                count[i]=count[i]+1;
        }
    }
    for(int k=0;k<3;k++)
    { cout<<count[k]<<"\n";
        if(count[k]==a[k])
            cout<<a[k]<<"\n";
    }
    return 0;


}
