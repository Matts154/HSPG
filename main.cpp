#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    unsigned int input;
    string keyboard[2] = {"123456!@#$qwertasdfgzxcvb",	// Left half of the keyboard
                          "7890yuiophjklnm[]"};		// Right half

    srand(time(NULL));

    do {
	// Prompt the user for a password length
        cout << "\nNum: ";
        cin >> input;
        cin.ignore();

        for(unsigned int i = 0; i < input; i++)
            cout << keyboard[i%2][rand() % keyboard[i%2].length()]	// First array index changes sides of the keyboard.
									// Second array index chooses a random character.
        cout << "\n\nAgain? [y/n]: ";
    } while(getchar() == 'y');

    cout << "\nGoodbye!" << endl;

    return 0;
}
