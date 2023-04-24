/* group project 
GROUP MEMBERS
1 BARKLGN MULUGETA    RU2141/14
2 NAOL TOLOSA         RU 0691/14
3 TOMAS BALCHA        RU 1087/14
4 UMAR GEMEDA         RU 0779/14
*/

#include <iostream>
using namespace std;
int main(){

//program that identifies vowels
	char ch;
cout << "enter the character to determine if it is vowel or not" << endl;
cin >> ch;
if (ch == 'a'){
	cout << "it's vowel" << endl;
}
	else if (ch == 'i'){
	
	}
	else if (ch == 'o'){
		cout << "it's vowel" << endl;
	}
		else if (ch == 'u'){
		cout << "it's vowel" << endl;
	}
		else if (ch == 'e'){
		cout << "it's vowel" << endl;
	}
	
	
	
	
//switch statement	
cout << "inter number between 1 and 5";
int w;
switch(w){
case 1:
	cout << "it's one" << endl;
	break;
case 2:
	cout << "it's two" << endl;
	break;
case 3:
	cout << "it's three" << endl;
	break;
case 4:
	cout << "it's four" << endl;
	break;
case 5:
	cout << "it's five" << endl;
break;
default:
	cout << "not known" << endl;
}



//foe loop
	for(int i =0; i <= 10; i++){
		cout << i << endl;
	}
	
	
	
	
//do while loop
	int i;
	do{
	i++;
	cout << i << endl;
	}
	while(i < 10);



//while loop
int xu = 0;
while(xu < 10  ){
	xu ++;
	if(xu == 5){
		continue;
	}
	cout << xu << endl;
}
   
//important statements
int uu = 0;
while(uu < 10  ){
	uu ++;
	if(xu == 5){
		goto info;
	}
	cout << xu << endl;
	break;
}

//label for goto statement
info:
	cout << "hello everyone";


//declaring one dimentional array
int arr[5] = {1,2,3,4,5};
	
//giving output of the array
for(int i = 0; i < 5; i++){
	cout << arr[i] << endl;
}


//declaring two dimentional array
int arr2[3][2] = {{1,2},{2,3},{3,4}};
//giving output of the array
for(int i = 0; i < 3; i++){
for(int x = 0; x < 2; x++){
cout <<	arr2[i][x] << " ";
}
cout << endl;
}
	return 0;
	
}
