#include <iostream>

using namespace std;

int main() {
	cout<<"Hi from main\n ";
int a;
int *p;
p=&a;
a=5;
cout<<"\n"<<p;
cout<<"\n"<<&p;    
cout<<*p<<\n;
    return 0;
}
