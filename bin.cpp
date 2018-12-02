#include<iostream>
#include<vector>

using namespace std;
int main()
{ int A[6]={1,2,3,4,5,6};
    int mid, strt=0;
    int end=5;
    int B=5,r;
    while(strt<=end)
    {
        mid=(strt+end)/2;
        if (A[mid]==B)
        {
            cout<<mid<<"\n";
        return mid;
  
       
        }
        else if(B>A[mid])
            strt=mid+1;
        else if(B<A[mid])
            end=mid-1;
    }


    return 0;

}


