/* This code is created by
Name : BARKLGN MULUGETA
Id : Ru 2141/14 
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {

//array declaration
int myarr[3];

//array initialization
myarr[0] = 2;
myarr[1] = 3;
myarr[2] = 4;

//accessing array elements
cout << myarr[0] << " " << myarr[1] << " " << myarr[2] << " " << endl;

//two dimensional array declaration
int myarr2[2][2];

//two dimensional array initialization
myarr2[0][0] = 0;
myarr2[0][1] = 1;
myarr2[1][0] = 3;
myarr2[1][1] = 4;

//accessing two dimensional array with loop
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
        cout << myarr2[i][j] << " ";
    }
    cout << endl;
}

//string declaration and initialization
char mystr[4] = "c++";

//printing the atring
cout << mystr << endl;

//string function strcpy() with example
char str1[10] = "Hello "; 
char str2[10]; 
    
strcpy(str2,str1); 
    
cout << "orginal string: " << str1 << endl;
cout << "copied string: " << str2 << endl;

//string function strcat() with example
strcat(str1,str2);

cout <<  "the concatinated string: " << str1 << endl;

//string function strlen() with example
cout << "the length of str1 is: " << strlen(str1) << endl;

//string function strcmp() with example
cout << "the comparision of str1 and str2 is: " << strcmp(str1,str2) << endl;

//pointer with example
int ptr1 = 3;
int *ptr2 = &ptr1;
cout << "memory space of str1 is: " << ptr2 << endl;
cout << "value stored in str1 is: " << *ptr2 << endl;

    return 0;
}
