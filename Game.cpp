#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;
int main()
{
    int answer; // to store the computer-generated answer
    int input; // to store user input
    bool win = false; // check if we have won
    
    srand(time(0)); // set the seed
    answer = rand() % 100; // answer is now a random number from 1-100
    
    while (!win) {
        
        cout << "Enter a number" << endl;
        cin >> input;
        
        if (input < answer) {
            cout << "Too low." << endl;
        } else if (input > answer) {
            cout << "Too high." << endl;
        } else {
            cout << "YOU WIN!" << endl;
            win = true;
        }
    }

    return 0;
}
