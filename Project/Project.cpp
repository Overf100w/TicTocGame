#include "pch.h"
#include <iostream>

using namespace std;

void reload(char *arr) {
	system("cls");

	cout << "     |     |     " << endl;
	cout << "  " << arr[1] << "  |  " << arr[2] << "  |  " << arr[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << arr[4] << "  |  " << arr[5] << "  |  " << arr[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << arr[7] << "  |  " << arr[8] << "  |  " << arr[9] << endl;

	cout << "     |     |     " << endl << endl;
}

int chek_up(char *arr, char player) {
	if (arr[1] == player && arr[2] == player && arr[3] == player) return 1;
	if (arr[4] == player && arr[5] == player && arr[6] == player) return 1;
	if (arr[7] == player && arr[8] == player && arr[9] == player) return 1;
	if (arr[1] == player && arr[4] == player && arr[7] == player) return 1;
	if (arr[2] == player && arr[5] == player && arr[8] == player) return 1;
	if (arr[3] == player && arr[6] == player && arr[9] == player) return 1;
	if (arr[1] == player && arr[5] == player && arr[9] == player) return 1;
	if (arr[3] == player && arr[5] == player && arr[7] == player) return 1;
	else return 0;
}

int main() {
	char player = 'X';
	char num;
	char square[] = "0123456789";

	while (true) {
		reload(square);

		cout << " Player - "<< player << " enter a num:\t";
		cin >> num;
	
		for (int i = 0; square[i] != '\0'; i++) {
			if (square[i] == num) {
				if (square[i] == num) {
					square[i] = player;
				}
			}
		}

		if (chek_up(square, player) == 1) {
			cout << player << " - player wins!" << endl;
			break;
		};
		
		if (player == 'X') player = 'O';
		else player = 'X';
	}

	system("pause");
	return 0;
}