#pragma once
#include <iostream>
using namespace std;

class Customer{
public:	
	int nextCustomer;
	int inTime;
	int timeInLine; //not established yet
	int orderTime;
	int processTime;  //not established yet
	int outTime;     //not established yet....should be in dequeue
	Customer* next;

	Customer(){
		orderTime = 0;
		inTime = 0;
		next = NULL;
		nextCustomer = -1;
	}
};

class Queue: public Customer{
private:
		int rank = 0; 
		Customer *head;
		
public:

	void enqueue(int time) {
		Customer *temp = new Customer;
		temp->inTime = time;
		temp->next = NULL;
		temp->orderTime = rand()%6 + 1;

		if (head == NULL) {
			head = temp;
			rank = 1;
		}
		else {
			temp->next = head;
			head = temp;
			rank = rank + 1; 
		}
		
	}
	
	void dequeue() {
		Customer *temp, *target;

		if (head == NULL) {
			cout << "No one in line" << endl;
		}
		else if (head->next == NULL) {
			//store their info..
			delete head;
			cout << "No one left in line" << endl;
		}
		else {
			target = head;
			while (target->next != NULL) {
				temp = target;
				target = target->next;
			}
			temp->next = NULL;
			delete target;
			cout << "Next Customer!" << endl;
		}
	}
 
	int getLength(){
		int count = 0;
		if (head == NULL) {
			cout << "No one in line" << endl;
		}
		else if (head->next == NULL) {
			cout << "One person left line" << endl;
		}
		else {
			target = head;
			while (target->next != NULL) {
				temp = target;
				target = target->next;
				count ++;
			}
			cout << count <<" Customers in line." << endl;
		}
	}
	void waitTime(int inLine){
		//create second linked list named newll
		//this class adds LL to head with the value being the wait time
		//we can getlength...add values and  divide by length...
		
		if (head == NULL) {
			head = newll;
		}
		else {
			newll->next = head;
			head = newll;
		}
		
		
	}
	void serviceTime(){
		
	}
	void queueLength(){
		if(time >= 0 && time <= 120){
				//calculate avergae people in line at that time
			}
			else if(time >120 && time <= 210){
				//calculate avergae people in line at that time
			}
			else if(time >210 && time <= 330){
				//calculate avergae people in line at that time
			}
			else if(time >330 && time <= 570){
				//calculate avergae people in line at that time
			}
			else if(time >570 && time <= 720){
				//calculate avergae people in line at that time
			}else if(time >720 && time <= 900){
				//calculate avergae people in line at that time
			}else if(time >900 && time <= 1020){
				//calculate avergae people in line at that time
			}
	//Average queue length. The mean number of people in line at any given time averaged over the entire day.
	}
	void queueBest(){}
	void queueWorst(){}
	void queueTime(){ 
	// wait time + service time 
	}
		
//void enqueue()  -- add new customer
//void dequeue() -- customer done, remove from store
//int getLength()
 
};



int main()
{
//simulate starting at 8am to 1am

	int time = 0;
	int guess; // for the time 
	Queue person;

	for (int i = time ; i <= 1020 ; i++) {
		guess = rand()%145 +1;
		while (time <= 1020){
			if(time >= 0 && time <= 120){
				//breakfast zone,  p_a(t)=0.3
				if (guess <= 30){
					person.enqueue(time);
				}
			}
			else if(time >120 && time <= 210){
				if (guess <= 10){
					person.enqueue(time);
				}
			}
			else if(time >210 && time <= 330){
				if (guess <= 40){
					person.enqueue(time);
				}
			}
			else if(time >330 && time <= 570){
				if (guess <= 10){
					person.enqueue(time);
				}
			}
			else if(time >570 && time <= 720){
				if (guess <= 25){
					person.enqueue(time);
				}
			}else if(time >720 && time <= 900){
				if (guess <= 20){
					person.enqueue(time);
				}
			}else if(time >900 && time <= 1020){
				if (guess <= 10){
					person.enqueue(time);
				}
			}
			time++;
	    }
		if (time > 1020) {
			cout << "Sorry we are closed and will open at 8 a.m. " << '\n';
			break;
		}
	}		
}

//someone walks in --what order
	// 433 -- what does that mean.. what zone
	//8-10am 0-120
	//10-12  121-210
	//what zone you in 
	//enqueue customer-- need to store time...
	//get to front at 449=wait time...order takes 4 min.. out of store at 453... --service time is all things

	//someone is done, and will walk out with their food
	//100% of your data collection happens at dequeue 

//how long it takes..
//what happens at tail end of queue
//