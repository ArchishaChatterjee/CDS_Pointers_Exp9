// EXPERIMENT 9D : Concatenating a string using Pointers

#include <iostream>
using namespace std;

int main(){
    char str[] = "Hello";
    char *ptr = str;

    cout << " World !" ;
    while (*ptr != '\0'){
        cout << *ptr ;
        ptr++;

    }
    cout << endl;

    return 0;
}

/*
OUTPUT :
 World !Hello
 
*/
