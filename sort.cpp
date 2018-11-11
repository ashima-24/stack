#include<iostream>

using namespace std;
;

int main()
{ int val;
    int a[5]={11,63,5,26,7};
    /*    for(int i=0;i<5;i++)
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
          */
    int mid,l=0,val1;   int o[3],t[3];
    int b[6]={3,6,9,10,1,32};
    mid=3;
    for(int i=0;i<mid;i++)
        o[i]=b[i];
    for(int i=mid;i<6;i++)
    {
        t[l]=b[i];
        l++;
    }
    for(int r=0;r<mid;r++)
    {
        if(o[r]>o[r+1])
        {
            val=o[r];
            o[r]=o[r+1];
            o[r+1]=val;

        }
        else
            continue;


    }
    for(int e=0;e<mid;e++)
        cout<<o[e]<<"\n";

    for(int r=0;r<mid;r++)
    {
        if(t[r]>t[r+1])

        {
            val1=t[r];
            t[r]=t[r+1];
            t[r+1]=val1;

        }
        else
            continue;

    }

int k=0;
    for(int f=0;f<mid;f++)
        cout<<t[f]<<"\n";

    int merge[6];
    int i=0,j=0;
while(i<3&&j<3)
{

    if(o[i]<=t[j])
    {
    merge[k]=o[i];
    i=i+1;
    k=k+1;   
   cout<<"\n"; 
    }
    else

    {
    
    merge[k]=t[j];
    k=k+1;
    j=j+1;
    
    }


}

//cout<<"\n"<<k;
while(j<3)
{
merge[k]=t[j];
j=j+1;
k=k+1;
//cout<<"t";

}
while(i<3)
{
merge[k]=o[i];
i=i+1;
k=k+1;
cout<<"o";
}

for(int h=0;h<=5;h++)
    cout<<merge[h]<<"\n";
}
