/* This code is created by
Name : BARKLGN MULUGETA
Id : Ru 2141/14 
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {

//a program that calculates a quadratic equation
cout << "the 4th program do quadratic equations" << endl;
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

