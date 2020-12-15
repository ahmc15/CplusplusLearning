#include <iostream>

using namespace std;

main(){
    int a = 10, var=30;

    cout << "a = " << a << endl;
    int *p = &a;
    int **q = &p;
    cout << "*p = " <<  *p << endl;
    cout << "*q = " <<  *q << endl;
    *p=var;
    cout << "a = " <<  a << endl << "p* = " <<  *p << endl;

}
