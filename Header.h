typedef struct node{
	int data;
	node *next;
public:
	node(int, node*);
};

class stack{
	node *top;
public:
	stack();
	void push(int);
	void pop();
	void print();
};