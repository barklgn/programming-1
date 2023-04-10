﻿/* This code is created by
Name : BARKLGN MULUGETA
Id : Ru 2141/14 
*/


#include <iostream>
using namespace std;

int main() {

cout << "the 2nd program accepts 2 number and do operations" << endl;
float number1,number2,sum,difference,product,division;

cout << "enter the two numbers to calculate" << endl;
cin >> number1 >> number2;

sum = number1 + number2;
difference = number1 - number2;
product = number1 * number2;
division = number1 / number2;

cout << "the sum is " << sum << endl;
cout << "the difference is " << difference << endl;
cout << "the product is " << product << endl;
cout << "the division is " << division << endl;

if (number1 > number2){
    cout << "the first number is greater \n" << endl << endl;
}
else if(number2 > number1){
    cout << "the second number is greater \n" << endl << endl;
}
else {
    cout << "the numbers are equal" << endl << endl;
}
return 0;
}
