#include<iostream>
#include<string>
#include<ctype.h>
 
using namespace std;

int isPalindrome(string A) {

    int len = A.length();
    string h = "";
    int i = 0;
    while(i<len)
        {
            if(isalnum(A[i]))
         {

             h += tolower(A[i]);


         }
            ++i;

        }
    int len1 = h.length();
    int j = 0;
    int count = 0;
   
    for(i = 0 , j = len1-1  ; i < len1/2; i++, j--)
    {
        if (h[i] == h[j])
            {
                ++count;
            }
    }

    if (count == len1/2)
        return 1;
    else
        return 0;

}
int main ()

{

    int r = isPalindrome("A man, a plan, a canal: Panama");
    cout<<r;
        return r;

}
