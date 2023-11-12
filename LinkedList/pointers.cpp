#include<iostream>
using namespace std;

int main(){
    int a = 10;

    cout << "location of a is &a : " << &a << endl;

    int* a_ptr = &a;

    cout << "location of a is a_ptr : " << a_ptr << endl;
    cout << "value of a is a_ptr is *a_ptr : " << *a_ptr<< endl;

    *a_ptr = 20;

    cout << "value of new a is :" << a<<endl;

    //pointer arithmetic
    a_ptr++;
        cout << "new location of a is a_ptr : " << a_ptr << endl;

    //that means we can use *a_ptr to change value

    return 0;
}