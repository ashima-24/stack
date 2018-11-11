#include<iostream>

using namespace std;
;

int main()
{ int val;
    int a[5]={11,63,5,26,7};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                val = a[i];
                a[i]=a[j];
                a[j]=val;
            }

            else
                continue;

        }
    }
    for(int j=0;j<5;j++)
        cout<<a[j]<<"\n";

    return 0;
}
