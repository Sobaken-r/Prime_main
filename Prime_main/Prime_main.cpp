#include <iostream>
#include <Windows.h>
#include "Prime.h"
using namespace std;

int main()
{
    setlocale(0, "");

    Prime num1, num2;
    num1.setValue(2);
    num2 = num1.nextPrime();         
    bool result = num1.checkPrime(17); 
    num2.setValue(17);              
    int count = num2.countBetween(num1); 
    bool ans = num2.isValid();


    cout << num1.getValue();
    cout << num2.getValue();
}

