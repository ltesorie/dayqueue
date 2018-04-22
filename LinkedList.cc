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
//looser
	void insertAtHead(int value) {
		chunk *body = new chunk;
		body->value = value;
		body->next = head;
		head = body;
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