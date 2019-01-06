#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>a ;
   int rem,b = 7, temp = 357;
    while(temp >= 1)
        {
            rem = temp % b;
            temp = temp / b;
            a.push_back(rem); 
           
   //         cout<<rem<<" ";
        }
    
    for(int i = a.size() - 1; i >=0; i--)
        cout<<a[i]<<" ";
}
