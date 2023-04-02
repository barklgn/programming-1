/* This code is created by
Name : BARKLGN MULUGETA
Id : Ru 2141/14 
*/

#include <iostream>
using namespace std;

int main() {

//variable declaration
int original;

//creating more than one variable by one statment
float radius;

//assigning value to a created variable 
original = 3;

//creating and assigning Character data type variable
char grade = 'A';

//creating and assigning Constant data type variable
float const pi = 3.14;

//prompt the user and accept input from the user
cout << "input the radius you measured" << endl;
cin >> radius;

//giving the output of (area of the circle) by the radius you given
float r = radius * radius;
float area = pi * r;
cout <<"-> the area of the circle is " << area << endl;

//showing Increment(pre) of a number
int increased = ++original;
cout << "-> the original is 3 " << " the Increment result is " << increased << endl;

//showing Decrement(pre) of a number
int original_2 = 3;
int decreased = --original_2;
cout << "-> the original is 3 " << "the Decrement result is " << decreased << endl;

//changing the data type (implicit type) by example
float converted_number = 3.7;
int converted_number_2;
converted_number = converted_number_2;
cout << "-> converted_number_2 is changed the data type from float to int" << endl;

//changing the data type (explicit type) by example
double changed_number = 6.8;
int changed_number_2 = (int)changed_number;
cout << "-> changed_number_2 is changed the data type from double to int" << endl;

/*
the clmpiler may give some warnings due to unused variables 
but i can't fix it because to describe what i've done and to decrease 
code complexity i used new variables over and over again, sorry for that.
*/
    return 0;
}
