#include <iostream>

using namespace std;
int a =4;
void add4(int &);
main(){
    cout << "a = " << a << endl;
    int &x = a;
    cout << "a = " << &a << endl;
    cout << "x = " << &x << endl;

return 0;
}
void add4(int &x)
{
    x=x+4;
    cout << "result is " << x << endl;
}
