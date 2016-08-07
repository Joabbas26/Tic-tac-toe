//Project: Tic-tac-toe using mouse input
#include <QCoreApplication>
#include <iostream>
#include <fstream>
using namespace std;

void Board() {}
void Piece() {}
void Choice() {}

int main() {



    return 0;
}

void Board() {
    char a, b, c, d, e, f, g, h, i;
    cout << " | " << a << " | " << b << " | " << c << "| "<< endl;
    cout << " | " << d << " | " << e << " | " << f << "| "<< endl;
    cout << " | " << g << " | " << h << " | " << i << "| "<< endl;

}

void Piece() {
    char player1_piece, player2_piece;
    cout << "Enter: X or O " << endl;
    cin >> player1_piece;
    while (player1_piece == 'X' || 'x')
    {
        cout << "Player 1 <" << player1_piece << "> - Player 2 <"
             << player2_piece << endl;
    }

void Choice(); {
    char choice;
    cout << "Choose a location from a-i" << endl;
    cin >> choice;
    if (choice == 'a')
    {
        Board(a); == player1_piece
    }

}

    }
