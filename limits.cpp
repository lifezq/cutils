#include<iostream>
#include "math/limits.h"

using namespace std;

int main(){
    printf( "INT_MAX:%d - %d\n", INT_MAX, INT_MAX == (int)(((unsigned)1<<31) -1) );
    cout << "INT_MIN:" << (int)INT_MIN << endl;
    cout << "LONG_MAX:" << (long)LONG_MAX << endl;
}
