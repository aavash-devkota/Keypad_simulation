/*
 * Keypad simulator using C++
 * Author: Aavash Devkota
*/

#include <iostream>
using namespace std;

char LUT[][5] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

int main(){
	string input;

	cout << "Enter the keywords equivalent of the word you want to type: (separated by a comma)"<< endl;
	cout << "Example ::: 2,2,888,2,7777,44"<<endl;
	cin >> input;

	int count[7];
	int i = 0;
	//looping through given numbers until end
	while (input[i] != '\0') {
		if (input[i] == ',') { //denoting end of the keystrikes
			i++;
			continue;
		}

		int counting = 0; //no need waste can just use count[..] = 1,2.....

		switch (input[i]) {
		//checking the numbers
		case '2':
			if (input[i] == '2' && input[i + 1] == '2' &&
			    input[i + 2] == '2') {
				counting = 2;
				count[0] = counting;
				i = i + 3;
			} else if (input[i] == '2' && input[i + 1] == '2') {
				counting++;
				count[0] = counting;
				i = i + 2;
			} else {
				count[0] = 0;
				i++;
			}
			cout << LUT[0][count[0]];
			break;
		case '3':
			if (input[i] == '3' && input[i + 1] == '3' &&
			    input[i + 2] == '3') {
				counting = 2;
				count[1] = counting;
				i = i + 3;
			} else if (input[i] == '3' && input[i + 1] == '3') {
				counting++;
				count[1] = counting;
				i = i + 2;
			} else {
				count[1] = 0;
				i++;
			}
			cout << LUT[1][count[1]];
			break;

		case '4':
			if (input[i] == '4' && input[i + 1] == '4' &&
			    input[i + 2] == '4') {
				counting = 2;
				count[2] = counting;
				i = i + 3;
			} else if (input[i] = '4' && input[i + 1] == '4') {
				counting++;
				count[2] = counting;
				i = i + 2;
			} else {
				count[2] = 0;
				i++;
			}
			cout << LUT[2][count[2]];
			break;

		case '5':
			if (input[i] == '5' && input[i + 1] == '5' &&
			    input[i + 2] == '5') {
				counting = 2;
				count[3] = counting;
				i = i + 3;
			} else if (input[i] == '5' && input[i + 1] == '5') {
				counting++;
				count[3] = counting;
				i = i + 2;
			} else {
				count[3] = 0;
				i++;
			}
			cout << LUT[3][count[3]];
			break;

		case '6':
			if (input[i] == '6' && input[i + 1] == '6' &&
			    input[i + 2] == '6') {
				counting = 2;
				count[4] = counting;
				i = i + 3;
			} else if (input[i] == '6' && input[i + 1] == '6') {
				counting++;
				count[4] = counting;
				i = i + 2;
			} else {
				count[4] = 0;
				i++;
			}
			cout << LUT[4][count[4]];
			break;

		case '7':
			if (input[i] == '7' && input[i + 1] == '7' &&
			    input[i + 2] == '7' && input[i + 3] == '7') {
				counting = 3;
				count[5] = counting;
				i = i + 4;
			} else if (input[i] == '7' && input[i + 1] == '7' &&
			           input[i + 2] == '7') {
				counting = 2;
				count[5] = counting;
				i = i + 3;
			} else if (input[i] && input[i + 1] == '7') {
				counting++;
				count[5] = counting;
				i = i + 2;
			} else {
				count[5] = 0;
				i++;
			}
			cout << LUT[5][count[5]];
			break;

		case '8':
			if (input[i] == '8' && input[i + 1] == '8' && input[i + 2] == '8') {
				counting = 2;
				count[6] = counting;
				i = i + 3;
			} else if (input[i] == '8' && input[i + 1] == '8') {
				counting++;
				count[6] = counting;
				i = i + 2;
			} else {
				count[6] = 0;
				i++;
			}
			cout << LUT[6][count[6]];
			break;

		case '9':
			if (input[i] == '9' && input[i + 1] == '9' &&
			    input[i + 2] == '9' && input[i + 3] == '9') {
				counting = 3;
				count[7] = counting;
				i = i + 4;
			} else if (input[i] == '9' && input[i + 1] == '9' &&
			           input[i + 2] == '9') {
				counting = 2;
				count[7] = counting;
				i = i + 3;
			} else if (input[i] && input[i + 1] == '9') {
				counting++;
				count[7] = counting;
				i = i + 2;
			} else {
				count[7] = 0;
				i++;
			}
			cout << LUT[7][count[7]];
			break;

		default:
			cout << "Try again." << endl;
			i++;
			break;
		}
	}
	cout << endl;
}
