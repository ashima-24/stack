#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool pir(char open , char close)
{
    if( open == '(' && close == ')')
               return true;
 
                else if (open == '[' && close == ']')
               return true;
            else if (open == '{' && close == '}')
                      
               return true;
                        else return false;

}
int isValid(string A) {
    int n = A.length();
    stack<char> S;
    bool val;

    for(int i = 0; i<n; i++)
        {        
            if(A[i] == '(' || A[i] == '{' || A[i] == '[')
                S.push(A[i]);

            else if (S.empty() ||  !pir(S.top(),A[i]))
                    return false;
            else
            S.pop();

        }

            if(S.empty())
            return true;
            else 
                return false;


}
int main()

{
string brackt ;
cout<<"enter the string for testing brackets";
cin>>brackt;
int u = isValid(brackt);
cout<<"\n answer  = "<<u;



}
