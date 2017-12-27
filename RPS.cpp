// Rock/Paper/Scissors
// by: Kingsley Udoyi

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    char player1, player2;
    string p[2];
    int score1 = 0, score2 = 0; //players starting scores are initialized here

    cout << "3 rounds of play. The player with the most points at the end wins. Let's go!" << endl;

    // treating the following for loop as a while loop
    for(int i = 0; i < 3; i++) {
        cout << "Player 1, enter your choice: Rock(r), Paper(p) or Scissor(s)" << endl;
        cin >> p[0];
        cout << "Player 2, take your turn please" << endl;
        cin >> p[1];
        player1=toupper(p[0][0]); // Gets first letter of Player 1 choice, and capitalizes it
        player2=toupper(p[1][0]);

        // Sets conditionals
        switch(player1) {
        case 'R': // takes care of scenarios where the players enter rock
        if (player2 == 'R')
            cout << "Draw" << endl;
        if (player2 == 'P') {
            cout << "Player 2 wins" << endl;
            score2++; // score for player 2 is updated
        }
        if (player2 == 'S') {
            cout << "Player 1 wins" << endl;
            score1++; // score for player 1 is updated
        }
        break;
        
        if (score1 < score2)
            cout << "Player 2 wins this round" << endl;

        case 'P': // takes care of scenarios where the players enter paper
        if (player2 == 'R') {
            cout << "Player 1 wins" << endl;
            score1++;
        }
        if (player2 == 'P')
            cout << "Draw" << endl;
        if (player2 == 'S') {
            cout << "Player 2 wins" << endl;
            score2++;
        }
        break;
        
        case 'S':
        if (player2 == 'R') {
            cout << "Player 2 wins" << endl;
            score2++;
        }
        if (player2 == 'P') {
            cout << "Player 1 wins" << endl;
            score1++;
        }
        if (player2 == 'S')
            cout << "Draw" << endl;
        break;
        
        default:
            cout << "Invalid Entry";
        return 0;
    } 
}

// score is calculated
if (score1 > score2)
    cout << "PLayer 1 wins the game. Congrats!" << endl;
else
    cout << "Player 2 wins the game. Congrats!" << endl;
 
return 0;
}