/* This code is created by
Name : BARKLGN MULUGETA
Id : Ru 2141/14 
*/

#include <iostream>
using namespace std;

int main() {
//ONE WAY if statement with example
int x = 3;
if(x == 3){
    cout << "x is three" << endl;
}

//TWO WAY if else statement with example
int y = 5;
if(y == 4){
    cout << "y is four" << endl;
}
else{
    cout << "y is not four" << endl;
}

//MULTI WAY if else statement with example
int z = 10;
if(z == 7){
    cout << "Z is seven" << endl;
}
else if(z == 9){
    cout << "Z is nine" << endl;
}
else{
    cout << "Z is Ten" << endl;
}

//NESTED if else statement with example
if(x ==3){
    if(y == 5){
        cout << "x is 3 and y is 5" << endl;
    }
}
else{
    cout << "x is not 3 and y is not 5";
}
    return 0;
}
