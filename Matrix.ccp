#include <iostream>;
#include <iostream>;
#include <stdlib.h>;
#include<stdio.h>
#include <time.h>;
using namespace std;

struct MatrixElement {
public:
	int row;
	int col; 
	int value;
	struct MatrixElement *next;

	MatrixElement() {
		row = 0;
		col = 0;
		value = 0;
		next = NULL;
	}
	
	void newMatrixElement(struct MatrixElement** begin, int nonZero, int rowLoc, int colLoc){
		 struct newMatrixElement *temp, *s;
				temp = *start;
				if (temp == NULL)
							{
       
					temp = (struct newMatrixElement *) malloc (sizeof(struct newMatrixElement));
					temp->value = nonZero;
					temp->row = rowLoc;
					temp->col = colLoc;
					temp->next = NULL;
					*start = temp;
 
					}
						else
							{
							while (temp->next != NULL)
								temp = temp->next;
								s = (struct newMatrixElement *) malloc (sizeof(struct newMatrixElement));
								s->value = nonZero;
								s->row = rowLoc;
								s->col = colLoc;
								s->next = NULL;
								temp->next = s;
 
							}
	}
	
	void printMatrix(struct newMatrixElement){
		struct newMatrixElement *temp, *r, *s;
		temp = r = s = start;
	 
		printf("row_position: ");
		while(temp != NULL){
			printf("%d ", temp->row_position);
			temp = temp->next;
		}
		printf("\n");
	 
		printf("column_postion: ");
		while(r != NULL){
			printf("%d ", r->column_postion);
			r = r->next;
		}
		printf("\n");
		printf("Value: ");
		while(s != NULL)
		{
			printf("%d ", s->value);
			s = s->next;
		}
		printf("\n");
	
	
	}
};



int main() {
	srand(time(NULL));
	int guess;

	MatrixElement *A= NULL; //pointer 

//generate a 10x10 matrix so only 5% elements are non zero
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			guess = rand() % 10 + 1;
			if (guess <= 5)
				//guess clearly falls in the probability region
				//1. if matrix a is empty, get a new node and make it first
				//2. if its not emoty, add to end
				if (matA == NULL)
				{
					matA = new MartixElement;
					matA->row = i + 1;
					matA->col = j + 1;
					matA->value = 1;
					tempA = matA;	//get temp to point to first one
				}
				else {
					tempA->next = new MartixElement;
					tempA = tempA->next;
					tempA->row = i + 1;
					tempA->col = j + 1;
					tempA->value = 1;
				}

				cout << 1 << " ";
			else
				cout << 0 << " ";
		}
		cout << endl;
	}

	cout << "Just generated the matrix, and stored it in the heap" << endl;
	//part 2: use the linked list to print the matrix on screen...
	//we have matA, the pointer, which stores entire list
	int done = 0;
	tempA = matA;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 0; j++) {
			//do we print 0 or non zero
			if (done != 1) {
				if (tempA->row == i + 1 && tempA->col == j + 1){
					cout << " " << tempA->value << "";
					tempA = tempA->next;
					if (tempA == NULL)
						done = 1;
				}
				else {
					cout << " " << 0 << endl;
				}
			else {
				cout << " " << 0 << endl;
			}
			}
		}
	}





	system("pause");
}





	system("pause");
}




//#include <iostream>;
//#include <stdlib.h>;
//#include <time.h>;
//using namespace std;
//
//
////rand c++
//
//int main() {
//
//	srand(time(NULL));
//
//	//range of 1->10
//	int secret = rand() % 10 + 1;
//	int userGuess, count = 0;
//	while (count < 3){
//	cout << "Guess " << count + 1 << endl;
//	cin >> userGuess;
//	if (userGuess == secret) {
//		cout << "You win. WOW" << endl;
//		exit(1);
//		}
//	count++;
//	}
//	cout << "Secret: " << secret<< endl;
//
//	system("pause");
//}


