/* This code is created by
Name : BARKLGN MULUGETA
Id : Ru 2141/14 
*/

#include <iostream>
using namespace std;

int main() {
    return 0;
    
    int score;
    cout << "enter the score" << endl;
    cin >> score;
    
    if(score >= 90){
        cout << "it's A+" << endl;
    }
    if(score >= 85 && score < 90){
        cout << "it's A" << endl;
    }
    if(score >= 80 && score < 85){
        cout << "it's A-" << endl;
    }
    if(score >= 75 && score < 80){
        cout << "it's B+" << endl;
    }
    if(score >= 70 && score < 75){
        cout << "it's B" << endl;
    }
    if(score >= 65 && score < 70){
        cout << "it's B-" << endl;
    }
    if(score >= 60 && score < 65){
        cout << "it's C+" << endl;
    }
    if(score >= 50 && score < 60){
        cout << "it's C" << endl;
    }
    if(score >= 45 && score < 50){
        cout << "it's C-" << endl;
    }
    if(score >= 40 && score < 45){
        cout << "it's D" << endl;
    }
    if(score < 45){
        cout << "it's F / fail" << endl;
    }
    
    return 0;
}
