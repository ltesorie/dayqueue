#pragma once
#include <iostream>
using namespace std;

class customer{
	public:
	int inTime; 
	int outTime;
	int orderTime;
	int processTime;
//wait time is time in line
//total time is waiting in line plus waiting for food
	Customer(){
		
	}
};


class Queue{
 customer *head
//void enqueue()  -- add new customer
//void dequeue() -- customer done, remove from store
//int getLength()


 
};



int main()
{
//simulate starting at 8am to 1am
	int time = 0;
	int guess; // for the time 

	while (time < 1020){
		if(time >= 0 && time <= 120){
			//breakfast zone,  p_a(t)=0.3
			guess = rand()%100 +1
			if (guess <= 30){
				enqueue(time, order);
			}
			else{
				//do nothing
			}
					
		}
		else if(time >120 && time <= 210){
			guess = rand()%100 +1
			if (guess <= 10){
				enqueue(time, order);
			}
			else{
				//do nothing 
			}
		}
		else if(time >210 && time <= 330){
			guess = rand()%100 +1
			if (guess <= 40){
				enqueue(time, order);
			}
			else{
				//do nothing 
			}
		}
		else if(time >330 && time <= 570){
			guess = rand()%100 +1
			if (guess <= 10){
				enqueue(time, order);
			}
			else{
				//do nothing 
			}
		}
		else if(time >570 && time <= 720){
			guess = rand()%100 +1
			if (guess <= 25){
				enqueue(time, order);
			}
			else{
				//do nothing 
			}
		}else if(time >720 && time <= 900){
			guess = rand()%100 +1
			if (guess <= 20){
				enqueue(time, order);
			}
			else{
				//do nothing 
			}
		}else if(time >900 && time < 1020){
			guess = rand()%100 +1
			if (guess <= 10){
				enqueue(time, order);
			}
			else{
				//do nothing 
			}
		}
		
		
	time++;

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

}


//how long it takes..
//what happens at tail end of queue
//