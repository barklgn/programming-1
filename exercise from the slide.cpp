/* This code is created by
Name : BARKLGN MULUGETA
Id : Ru 2141/14 
*/


#include <iostream>
using namespace std;

int main() {

//Question 1 (a program that calculates the product of 3 numbers)

int x,y,z,result;
cout << "inter the three numbers to multiply" << endl;
cin >> x >> y >> z;
result = x*y*z;
cout << "the product is " << result;




//Question 2 (a program that takes two numbers and do sum,difference,product and division also tells which one is greater and smaller)

float number1,number2,sum,difference,product,division;

cout << "enter the two numbers" << endl;
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
    cout << "the first number is greater \n";
}
else if(number2 > number1){
    cout << "the second number is greater \n";
}
else {
    cout << "the numbers are equal";
}




//program that calculates the circumference of a circle

float const pi = 3.14;
float radius,circumference;

cout << "enter the radius of the circle " << endl;
cin >> radius;

circumference = ((2*pi) * radius);
cout << "the circumference of the circle is " << circumference;




//a program that calculates a quadratic equation

int a,b,c;
int x1,x2;

cout<<"enter leading cofficient" << endl;
cin>>a;
cout<<"enter middle term cofficient" << endl;
cin>>b;
cout<<"enter the constant part" << endl;
cin>>c;

x1 = (-b + sqrt(b*b-4*a*c)) / 2*a;
cout<<"first solution is "<< x1 <<endl;
x2 = (-b - sqrt(b*b-4*a*c)) / 2*a;
cout<<"second solution is"<< x2 <<endl;

return 0;
}



