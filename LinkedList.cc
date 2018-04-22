#pragma once
#include <iostream>
using namespace std;

class LinkedList {
public:
	int length;
	//chunk *head;

private:

	LL() {
		head = NULL;
		length = 0;
	}

	void insertAtHead(int value) {
		chunk *body = new chunk;
		body->value = value;
		body->next = head;
		head = body;
	}

	
	/*
	#include <iostream>
using namespace std;

class chunk {
public:
	int value;
	chunk *next;

	chunk() {
		value = 0;
		next = NULL;
	}
};

class queue {
public:
	chunk *head; 

	queue() {
		head = NULL;
	}

	void enqueue(int x) {
		chunk *temp = new chunk;
		temp->value = x;
		temp->next = NULL;

		if (head == NULL) {
			head = temp;
		}
		else {
			temp->next = head;
			head = temp;
		}
	}

	void dequeue() {
		chunk *temp, *target;

		if (head == NULL) {
			cout << "Nothing in queue.. awkward" << endl;
		}
		else if (head->next == NULL) {
			delete head;
			cout << "Nothing left in the queue" << endl;
		}

		else {
			target = head;
			while (target->next != NULL) {
				temp = target;
				target = target->next;
			}
			temp->next = NULL;
			delete target;
			cout << "Delete complete" << endl;
		}
	}

	void display() {
		chunk *traverse;
		traverse = head;

		while (traverse != NULL) {
			cout << traverse->value;
			cout << "-->";
			traverse = traverse->next;
		}
		cout << "NULL" << endl;
	}
};

int main() {
	queue object;
	int choice, value;
	while (1) {
		cout << "Press 1 to enqueue" << endl;
		cout << "Press 2 to dequeue" << endl;
		cout << "Press 3 to display" << endl;
		cout << "Anything else to quit" << endl;
		cin >> choice;
		switch (choice) {
		case 1: cout << "Add what?" << endl;
			cin >> value;
			object.enqueue(value);
			break;
		case 2: object.dequeue();
			break;
		case 3: object.display();
			break;
		default: exit(1);
		}

		system("pause");
		return 1;
	}
}
	*/
	
	

};