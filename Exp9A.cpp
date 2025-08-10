//EXPERIMENT 9A : Incrementing pointers for different data types

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    cout << &a << endl;
    int *aptr;
    aptr = &a;
    cout << *aptr << endl;
    cout << aptr << endl;

    //////////////////////////

    float b = 3.14;
    cout << "Orginal : " << b << endl;
    cout << "Address : " << &b << endl;
    cout << "Incremented : " <<  ++b << endl;
    
    bool c = 1;
    cout << "Address : " << &c << endl;
    cout << "Boolean does not get incremented. " << endl;

    char d = 'a';
    cout << "Original : " << d << endl;
    cout << "Address : " << &d << endl;
    cout << "Incremented is : " << ++d << endl;

    double e = 123456.12345;
    cout << "Original :" << e << endl;
    cout << "Address : " << &e << endl;
    cout << "Incremented is :" << ++e << endl;

    cout << endl;
    cout << "Size of int is " << sizeof(b) << endl;
    cout << "Size of boolean is " << sizeof(c) << endl;
    cout << "Size of char is " << sizeof(d) << endl;
    cout << "Size of double is " << sizeof(e) << endl;
    


    return 0;
}


/*
OUTPUT :
0x7ffc6b6ec220
10
0x7ffc6b6ec220
Orginal : 3.14
Address : 0x7ffc6b6ec224
Incremented : 4.14
Address : 0x7ffc6b6ec21e
Boolean does not get incremented. 
Original : a
Address : a

Incremented is : b
Original :123456
Address : 0x7ffc6b6ec228
Incremented is :123457

Size of int is 4
Size of boolean is 1
Size of char is 1
Size of double is 8


*/
