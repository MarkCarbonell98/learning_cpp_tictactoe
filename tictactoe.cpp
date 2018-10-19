#include <iostream>
#include <ostream>
#include <vector> 
#include <string>
#include <algorithm>
using namespace std;

bool theNewFind(vector<int> theNewVector, int number) {
    if(std::find(theNewVector.begin(), theNewVector.end(), number) != theNewVector.end()) {
        return true;
    } else {
        return false;
    }
}

bool findValues(vector<int> theVector, int a, int b, int c) {
    if(theNewFind(theVector, a) && theNewFind(theVector, b) && theNewFind(theVector, c)) {
        return true;
    } else {
        return false;
    }
}

int checkField(unsigned theMove, vector<int> theVector, vector<int> hisOwnVector) {
    // bool check1 = false, check2 = false, check3 = false;


    while((theMove > 9 || theMove == 0) || (std::find(theVector.begin(), theVector.end(), theMove) != theVector.end()) || (std::find(hisOwnVector.begin(), hisOwnVector.end(), theMove) != hisOwnVector.end())) {
        theMove = NULL;
        cout << "The number you entered is incorrect, try again" << endl;
        cin >> theMove;
        // if(theMove > 9 || theMove == 0) {
        //     check1 = true;
        // }
    }

    
    // if((theMove > 9 || theMove == 0) && (std::find(theVector.begin(), theVector.end(), theMove) != theVector.end()) && (std::find(hisOwnVector.begin(), hisOwnVector.end(), theMove) != hisOwnVector.end())) {
    //     hisOwnVector.push_back(theMove);
    // } else {
    //     checkField(theMove, theVector, hisOwnVector);
    // }

    // while(std::find(theVector.begin(), theVector.end(), theMove) != theVector.end()) {
    //     theMove = NULL;
    //     cout << "The field has already been taken, choose another one" << endl;
    //     cin >> theMove;
    //     // if(std::find(theVector.begin(), theVector.end(), theMove) != theVector.end()) {
    //     //     check2 = true;
    //     // }
    // }

    // while(std::find(hisOwnVector.begin(), hisOwnVector.end(), theMove) != hisOwnVector.end()) {
    //     theMove = NULL;
    //     cout << "You already played in that field, please choose another one" << endl;
    //     cin >> theMove;
    //     // if(std::find(hisOwnVector.begin(), hisOwnVector.end(), theMove) != hisOwnVector.end()) {
    //     //     check3 = true;
    //     // }
    // }

    // if(check1 && check2 && check3) {
    //     hisOwnVector.push_back(theMove);
    // } else {
    // }
    //     checkField(theMove, theVector, hisOwnVector);
    return 0;
}

bool checkWinner(vector<int> firstVector) {
    if(findValues(firstVector, 1,2,3) || findValues(firstVector, 4,5,6) || findValues(firstVector, 7,8,9) || findValues(firstVector, 1,4,7) || findValues(firstVector, 2,5,8) || findValues(firstVector, 3,6,9) || findValues(firstVector, 1,5,9) || findValues(firstVector, 3,5,7)) {
        cout << "Congratulations! You won!" << endl;
        return true;
    } else {
        return false;
    }
}


int tictactoe() {
    vector<int> board ={
                        1,2,3,
                        4,5,6,
                        7,8,9
                        };
    vector<int> movesPlayer1 = {};
    vector<int> movesPlayer2 = {};
    bool winner = false;
    bool player1 = true;
    unsigned move;

    cout << "welcome to the Tic Tac Toe C++ Game!" << endl;
    cout << "Player 1, please enter a number between 1 and 9 to begin, the board looks like this: \n1,2,3\n4,5,6\n7,8,9\n" << endl;
    cin >> move;
    movesPlayer1.push_back(move);
    checkField(move, movesPlayer2, movesPlayer1);
    // movesPlayer1.push_back(move);
    player1 = !player1;
    while(!winner) {
        //here plays player 2
        if(!player1) {
            cout << "player two, its your turn to play" << endl;
            cin >> move;
            movesPlayer2.push_back(move);
            checkField(move, movesPlayer1, movesPlayer2);
            // movesPlayer2.push_back(move);
            if (checkWinner(movesPlayer2)) {
                winner = true;
            } else {
                player1 = !player1;
            }
        //here plays player 1
        } else {
            cout << "player one, its your turn to play" << endl;
            cin >> move;
            movesPlayer1.push_back(move);
            checkField(move, movesPlayer2, movesPlayer1);
            // movesPlayer1.push_back(move);
            if (checkWinner(movesPlayer1)) {
                winner = true;
            } else {
                player1 = !player1;
            }
        }
    }


    if (winner) {
        string question = "";
        if (player1) {
            cout << "Player 1 has won, would you like to play again ?" << endl;
        } else {
            cout << "Player 2 has won, would you like to play again ?" << endl;
        }
        cout << "Type 'yes' or 'no'" << endl;
        cin >> question;
        if(question == "yes") {
            tictactoe();
        } else if( question == "no") {
            cout << "Thanks for playing!" << endl;
        } else {
            while(question != "yes" || question != "no") {
                cout << "please enter 'yes' or 'no'" << endl;
                cin >> question;
            }
        }
    }
    return 0;
}

// int declareWinner(bool player) {
//     string question = "";
//     if (player) {
//         cout << "Player 1 has won, would you like to play again ?" << endl;
//     } else {
//         cout << "Player 2 has won, would you like to play again ?" << endl;
//     }
//     cout << "Type 'yes' or 'no'" << endl;
//     cin >> question;
//     if(question == "yes") {
//         tictactoe();
//     } else if( question == "no") {
//         cout << "Thanks for playing!" << endl;
//     } else {
//         while(question != "yes" || question != "no") {
//             cout << "please enter 'yes' or 'no'" << endl;
//             cin >> question;
//         }
//     }
//     return 0;
// }

int main() {
    tictactoe();
    return 0;
}
