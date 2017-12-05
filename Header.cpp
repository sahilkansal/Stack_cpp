#include"Header.h"
#include<iostream>

using namespace std;

stack::stack() :top(0){}

node::node(int dat, node *nxt) : data(dat), next(nxt){}

void stack::push(int data){
	node *newnode = new node(data, top);
	top = newnode;
}

void stack::print(){
	node *curr = top;
	while (curr != 0){
		cout << "stack elements:" << curr->data << endl;
		curr = curr->next;
	}
}

void stack::pop(){
	int info = top->data;
	node *temp = top;
	top = top->next;
	temp->next = 0;
	delete temp;
	cout << "deleted node info is: " << info << endl;
}