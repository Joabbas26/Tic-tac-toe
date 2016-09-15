//Project: Tic-tac-toe game
#include <iostream>
#include <fstream>
using namespace std;

void Board() {}
void Piece() {}
void Choice() {}
void Win() {}

int main() {
    // print board on loop every time the players input their choice
    while (Choice(0)) {
        cout << Board;
    }

    return 0;
}

void Board() {
    char a, b, c, d, e, f, g, h, i;
    cout << " | " << a << " | " << b << " | " << c << "| "<< endl;
    cout << "____ ____ ____" << endl;
    cout << " | " << d << " | " << e << " | " << f << "| "<< endl;
    cout << "____ ____ ____" << endl;
    cout << " | " << g << " | " << h << " | " << i << "| "<< endl;
    cout << "____ ____ ____" << endl;

}

void Piece() {
    char player1_piece, player2_piece;
    cout << "Enter: X or O " << endl;
    cin >> player1_piece;
    if (player1_piece == 'X' || 'x')
    {
        player1_piece = 'X';
        player2_piece = 'O';
        
    }
    
    else [
        player1_piece = 'O';
        player2_piece = 'X';
        ]
    
    
    
    cout << "Player 1 <" << player1_piece << "> - Player 2 <"
             << player2_piece << endl;

void Choice(); {
    char choice;
    cout << "Choose a location from a-i" << endl;
    cin >> choice;
    
    choice == Board(choice);
    
    }

    void Win () {
    
        if (a == player1_piece && b == player1_piece && c == player1_piece) {
        
        cout << player1_piece << " is the winner" << endl;"
        }
    
    }
