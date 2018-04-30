// Kalee Burns and Laura Tesoriero 
// Day in a Queue 
// Final Project - CPE 360 


#include <iostream>
using namespace std;

int main() {
	queue object;
	int choice, value;
	while (1) {
		cout << "Press 1 to enqueue" << endl;
		cout << "Press 2 to display" << endl;
		cout << "Anything else to quit" << endl;
		cin >> choice;
		switch (choice) {
		case 1: cout << "Add what?" << endl;
			cin >> value;
			object.enqueue(value);
			break;
		case 2: object.display();
			break;
		default: exit(1);
		}

		system("pause");
		return 1;
	}
} 

