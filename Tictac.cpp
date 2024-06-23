#include <iostream>
using namespace std;

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkwin(){
    if(square[1]==square[2] &&square[2]==square[3]){
        return 1;
    }
    else if(square[4]==square[5] &&square[5]==square[6]){
        return 1;
    }
    else if(square[7]==square[8] &&square[8]==square[9]){
        return 1;
    }
    else if(square[1]==square[5] &&square[5]==square[9]){
        return 1;
    }
    else if(square[3]==square[5] &&square[5]==square[7]){
        return 1;
    }
    else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9'){
        return 0;
    }
    else{
        return -1;
    }
}

void board() {
    cout << "Tic Tac Toe Game" << endl;
    cout << "PLAYER - 1 [X] vs PLAYER - 2 [O]" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  | " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  | " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  | " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl << endl;
}

int main() {
    int player = 1, choice;
    char mark;

    do {
        board();
        player = (player % 2) ? 1 : 2;
        cout << "Player " << player << ", enter a number: ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 9 && square[choice] == '0' + choice) {
            mark = (player == 1) ? 'X' : 'O';
            square[choice] = mark;
        } else {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        int result = checkwin();
        if (result == 1) {
            board();
            cout << "Player " << player << " wins!" << endl;
            break;
        } else if (result == 0) {
            board();
            cout << "It's a draw!" << endl;
            break;
        }

        player++;
    } while (true);

    return 0;
}
