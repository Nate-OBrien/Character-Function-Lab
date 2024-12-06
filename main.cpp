/*
* Name: Nate O'Brien
* Date: 12/6/24
* Program Name: Character Function Lab
*/


#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
    //gets input
    string str;
    cout << "Enter your name: ";
    getline(cin, str);

    //loops through
    for (int i = 0; i < str.length(); i++) {
        //ignores if not alpha or space
        if (!isalpha(str[i]) || isspace(str[i])){ 
            str[i] = str[i];
        } else {
            //converts to uppercase
            str[i] = toupper(str[i]);
        }
     }

    cout << str;
    return 0;
}