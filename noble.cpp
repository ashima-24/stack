
#include<iostream>
#include<vector>
using namespace std ;
int noble (vector<int> &A) {
    int s;
   
    s=A.size();
    vector<int>count(s,0);
    int y,j;
    
    for( j=0;j<s;j++)
    {
        for( y=0;y<s;y++)
        {
            if(A[j]<A[y])
            count[j]=count[j]+1;
                   }
        if(count[j]==A[j])
            return 1;
        
            }

    
    return -1;
}
 int main ()
{

vector<int> a={5,6,2};
int s=noble(a);
cout<<s<<"\n";
}


