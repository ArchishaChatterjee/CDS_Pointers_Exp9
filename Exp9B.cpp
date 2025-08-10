// EXPERIMENT 9B : Finding the sum and difference of two numbers using pointers

# include <iostream>
using namespace std;

int main(){
    int *a, *b;
    *a = 10;
    *b = 20;
    cout << "Difference : " <<*a-*b << endl;
    cout << "Sum is : "<< *a+*b << endl;


    return 0;
}

/* 
OUTPUT : 
Difference : -10
Sum is : 30

*/
