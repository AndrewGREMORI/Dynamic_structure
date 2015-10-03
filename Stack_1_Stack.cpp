

#include "stdafx.h"
#include "stack.h"

Node *first(int data)
{
	Node *top = new Node;
	top->data = data;
	top->field = 0;
	return top;
}

void push(Node **top, int data)
{
	Node *new_field = new Node;
	new_field->data = data;
	new_field->field = *top;
	*top = new_field;
}

int pop(Node **top)
{
	int temp = (*top)->data;
	Node *new_field = *top;
	*top = (*top)->field;
	delete new_field;
	return temp;
}

void print(Node *top)
{
    while(top)
    {
        int temp = top->data;
        cout << temp << endl;
        Node *new_field = top;
        top=top->field;
    }
}
