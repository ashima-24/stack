#include<iostream>
#include<sstream>
#include<vector>
#include<stack>
using namespace std;

int braces(string A)
{
    stack<int> s;
    int count1 = 0;
    char opr ;
    int n = A.length();
    int flag = 0 ;
    for( int i =0 ; i<n; ++i)
    {
        if(A[i] == ')')
        {
            opr = s.top();
            cout<<opr;
            s.pop();
            if(opr == '+' || opr == '-' || opr == '*' || opr == '/')
                flag = 0; 
            else   
                flag = 1;
            cout<<flag<<" "<<opr<<"\n";

            while(opr != '(' )
            {
                if(opr == '+' || opr == '-' || opr == '*' || opr == '/')
                    flag = 0;  
                opr = s.top();
                if(opr == '(')
                    break;
                cout<<opr<<" "; 
                s.pop();

            }
            if(flag == 1)
                return flag;
        }
        else
        {
            s.push(A[i]);
        }
    }
    return flag;    
}


int main()
{
    string a = "(a+(a))";
    int s  = braces(a);
    cout<<"s = "<<s;

}
