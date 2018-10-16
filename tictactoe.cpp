#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int checkField(unsigned theMove, vector<int> theVector) {
    while(theMove > 9 || theMove == 0) {
        theMove = NULL;
        cout << "The number you entered is incorrect, try again" << endl;
        cin >> theMove;
    }

    for(int i = 0; i< theVector.size(); i++) {
        while(theMove == theVector[i]) {
            theMove = NULL;
            cout << "The field has already been taken, choose another one" << endl;
            cin >> theMove;
        }
    }
    return 0;
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
    cout << "Player 1, please enter a number between 1 and 9 to begin" << endl;
    cin >> move;
    checkField(move, movesPlayer2);
    movesPlayer1.push_back(move);
    player1 = !player1;
    while(!winner) {
        if(!player1) {
            cout << "player two, its your turn to play" << endl;
            cin >> move;
            checkField(move, movesPlayer1);
            movesPlayer2.push_back(move);
            player1 = !player1;
        } else {
            cout << "player one, its your turn to play" << endl;
            cin >> move;
            checkField(move, movesPlayer2);
            movesPlayer1.push_back(move);
            player1 = !player1;
        }
    }
    return 0;
}

bool checkWinner(vector<int> firstVector, vector<int> secondVector, vector<int> theBoard) {
    for(int i = 0; i < firstVector.size(); i++) {
        for(int j = 0; j < theBoard.size(); j++) {
            if(firstVector[i] == theBoard[j]) {
                
            }
        }
    }
}

int main() {
    tictactoe();
    return 0;
}
