#pragma once
#include <iostream>
using namespace std;

class chunk{
public:
	int value;
	chunk *next;
	chunk() {
		value = 0;
		next = NULL;
	}
};
