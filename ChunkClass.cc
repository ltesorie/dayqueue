#pragma once
#include <iostream>
using namespace std;

class person{
public:
	int inTime;
	int timeInLine;
	int orderTime;
	int processTime;
	int outTime;
	chunk *next;
	
	person() {
		value = 0;
		order = 0;
		next = NULL;
	}
};
