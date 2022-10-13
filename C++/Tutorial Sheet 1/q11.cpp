//0 = Rock
//1 = Paper
//2 = Scissors
//dotdotdot, 1 wins against 0 who wins against 2 who wins against 1
#include <iostream>

using namespace std;

int decide();

    int main() {
    char quit;
    int computer = 0, player = 0, player_play, computer_play;
    do {
        cout << "Leaderboard" << endl;
        cout << "_____________" << endl;
        cout << "Player: " << player << endl;
        cout << "Computer: " << computer <<  endl;
        cout << "\n Ready To Play? Press Any Key! \n Want to Quit? Press q! " << endl;
        cin >> quit;

        cout << "To Choose Rock, Enter 0 \n To Choose Paper, Enter 1 \n To Choose Scissors, Enter 2" << endl;
        cin >> player_play;
        computer_play = decide();

        if (player_play == computer_play){
            cout << "It is a Tie!" << endl;
        }

        if(player_play == 0){
            if (computer_play == 1){
                cout << "Computer Chose Paper and Wins!" << endl;
                computer++;
            }

            if(computer_play == 2){
                cout << "Computer Chose Scissors and Player Wins!" << endl;
                player++;
            }
        }

        if (player_play == 1) {
            if (computer_play == 2) {
                cout << "Computer Chose Scissors and Wins!" << endl;
                computer++;
            }

            if (computer_play == 0) {
                cout << "Computer Chose Rock and Player Wins!" << endl;
                player++;
            }
        }

        if (player_play == 2) {
            if (computer_play == 0) {
                cout << "Computer Chose Rock and Computer Wins!" << endl;
                computer++;
            }

            if (computer_play == 1) {
                cout << "Computer Chose Paper and Player Wins!" << endl;
                player++;
            }
        }
    } while (quit != 'q');

    return 0;
}

int decide(){
    int choice;
    choice = rand() %3;
    return choice;
}