#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    unsigned int input;
    string keyboard[2] = {"123456!@#$qwertasdfgzxcvb",
                          "7890yuiophjklnm[]"};

    srand(time(NULL));

    do {
        cout << "\nNum: ";
        cin >> input;
        cin.ignore();

        for(unsigned int i = 0; i < input; i++)
            cout << keyboard[i%2][rand() % keyboard[i%2].length()];

        cout << "\n\nAgain? [y/n]: ";
    } while(getchar() == 'y');

    cout << "\nGoodbye!" << endl;

    return 0;
}
