#include<iostream>
#include<sstream>
#include<vector>
#include<stack>
using namespace std;
int evalRPN(vector<string> &A)
{
    int n = A.size();
    cout<<"size = "<<n<<"\n";
    stack<int> s;
    int h = 0, in = 0;
    for(int i = 0; i<n ; ++i)
    {  // cout<<i<<" "<<A[i]<<"\n";

        if (A[i] == "+" || A[i] == "-" || A[i] == "/" || A[i] == "*")
        {
            int opr2 = s.top();
            s.pop();
            int opr1 = s.top();
            s.pop();

            if(A[i] == "+")
            {
                h = opr1 + opr2 ;

            }
            else if (A[i] == "-")
            {
                h = opr1 - opr2 ;
            }
            else if(A[i] == "*")
            {
                h = opr1 * opr2 ;

            }
            else if(A[i] == "/")
                h = opr1 / opr2 ;

            s.push(h);
        }
        else
        {
            istringstream (A[i]) >> in;
            s.push(in);
        }
    }
    int res = s.top();
    s.pop();
    return res;
}

int main()
{
   vector<string> a = {"4", "13", "5", "/", "+"};
    int s  = evalRPN(a);
    cout<<s;
}
