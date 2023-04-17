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

    
    
    
    
//switch statement    
cout << "inter a character (a to z)";
char mychar;
switch(mychar){
case a:
    cout << "it's a" << endl;
    break;
case b:
    cout << "it's b" << endl;
    break;
case c:
    cout << "it's c" << endl;
    break;
case d:
    cout << "it's d" << endl;
    break;
case e:
    cout << "it's e" << endl;
break;
default:
    cout << "it's out of a to e" << endl;
}



//for loop
    for(int loops = 0; loops <= 15; i++){
        cout << loops << endl;
    }
    
    
    
    
//do while loop
    int i;
    do{
    i++;
    cout << i << endl;
    }
    while(i < 15);



//while loop
int whiles = 0;
while(whiles < 10  ){
    xu ++;
    
    cout << whiles << endl;
}


//continue statement
int tp = 0;
while(tp < 10  ){
    tp ++;
    if( == 4){
        continue;
    }
    cout << xu << endl;
}
   
//Break and Goto
int barklgn = 0;
while(barklgn < 15  ){
    barklgn ++;
    if(barklgn == 7){
        goto news;
    }
    cout << barklgn << endl;
    break;
}

//extension for goto statement
news:
    cout << "i'm a coder";

    return 0;

}
