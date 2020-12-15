#include <iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;

    cout<< "enter number of values you want to store(size fo array):"<<endl;
    cin>>size;
    ptr=new int [size];
    cout<< "enter values to be stored in the array"<<endl;
    for(int i=0; i<size;i++)
    {
        cin >> ptr[i];
    }
     cout<<"Values in the are:"<<endl;
    for(int i=0; i<size;i++)
    {
        cout << ptr[i]<<endl;
    }
    }
