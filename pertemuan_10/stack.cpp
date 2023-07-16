#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
int size = 0;

struct stack {
	int items[MAX];
	int top;
};
typedef struct stack st;

void createEmptyStack(st *s){
	s->top = -1;
	
}

int isFull(st *s){
	if(s->top == MAX - 1){
		return 1;
	}else{
		return 0;
	} 
}

int isEmpty(st *s){
	if(s->top == -1){
		return 1;
	} else {
		return 0;
	}
}

void push(st *s,  int newItem){
	if(isFull(s)){
		cout << "STACK FULL";	
	} else {
		s->top++;
		s->items[s->top] = newItem;
	}
	size++;
}

void pop(st *s){
	if(isEmpty(s)){
		cout << "\n STACK EMPTY \n";
	} else {
		cout << "Item popped = " << s->items[s->top];
		s->top--;
	}
	size--;
	cout << endl;
}

void printStack(st *s){
	cout << "Stack: ";
	for(int i = 0; i < size; i++){
		cout << s->items[i] << " ";
	}
	cout << endl;
}

int main(){
//	int ch;
	st *s = (st *)malloc(sizeof(st));
	
	createEmptyStack(s);
	
	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);
	
	printStack(s);
	
	pop(s);
	
	cout << "\nAfter popping out\n";
	printStack(s);
}