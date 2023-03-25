#include <iostream>
using namespace std;


void calculator() {
	int repeat = 0;
	while (repeat == 0) {
		cout << "Enter which operation do you want\n0 - exit\n1 - multiplication\n2 - division\n3 - addition\n4 - subtraction\n5 - exponentiation\n";
		int choice;
		cin >> choice;
		int num1;
		int num2;
		switch (choice) {
			case 0:
				repeat++;
				break;
			case 1:
				cout << "Enter numbers.(You can enter only integer numbers)" << endl;
				cin >> num1;
				cin >> num2;
				cout << "Answer:"<<num1 * num2 << endl;
				break;
			case 2:
				cout << "Enter numbers.(You can enter only integer numbers)" << endl;
				cin >> num1;
				cin >> num2;
				cout << "Answer:" << num1 / num2 << endl;
				break;
			case 3:
				cout << "Enter numbers.(You can enter only integer numbers)" << endl;
				cin >> num1;
				cin >> num2;
				cout << "Answer:" << num1 + num2 << endl;
				break;
			case 4:
				cout << "Enter numbers.(You can enter only integer numbers)" << endl;
				cin >> num1;
				cin >> num2;
				cout << "Answer:" << num1 - num2 << endl;
				break;
			case 5:
				cout << "Enter numbers.(You can enter only integer numbers)" << endl;
				cin >> num1;
				cin >> num2;
				cout << "Answer:" <<	pow(num1,num2) << endl;
				break;
			default:
				cout << "Wrong number or datatype\n";
		}
	}
}

void ropasc() {
	cout << "Welcome to rock, paper, scissors!";
	int x = 0;
	int choice1;
	int gamechc;
	int botchc;
	int draw=0;
	int win=0;
	int defeat=0;
	while (x == 0) {
		cout << "Enter number:\n0 - exit\n1 - player vs bot\n2 - watch your results" << endl;
		cin >> choice1;
		switch (choice1) {
			case 0:
				x++;
				break;
			case 1:
				cout << "0 - rock\n1 - paper\n2 - scissors\nEnter number:";
				cin >> gamechc;
				botchc = rand() % 3;
				cout << botchc<<endl;
				if (gamechc == botchc) { cout << "Draw"<<endl; draw++;}
				else if (gamechc == 0 && botchc == 1 || gamechc == 1 && botchc == 2 || gamechc == 2 && botchc == 0) { cout << "Defeat"<<endl; defeat++;}
				else if (gamechc == 0 && botchc == 2 || gamechc == 1 && botchc == 0 || gamechc == 2 && botchc == 1) { cout << "Win"<<endl; win++; }
				break;
			case 2:
				cout << "Wins: " << win << endl;
				cout << "Defeats: " << defeat << endl;
				cout << "Draws: " << draw << endl;
				break;
			default:
				cout << "Wrong number" << endl;
		}
	}

}

int main() {
	int mainchc;
	int x = 0;
	while (x == 0) {
		cout << "Enter number of function what you want\n1 - calculator\n2 - rock,paper,scissors\n";
		cin >> mainchc;
		switch (mainchc) {
		case 1:
			calculator();
			break;
		case 2:
			ropasc();
			break;
		default:
			cout << "False number or datatype\n\n";
		}
	}
}
