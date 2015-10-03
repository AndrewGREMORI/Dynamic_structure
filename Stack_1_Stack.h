#include <iostream>
using namespace std;


struct Node
{
	int data;
	Node *field;
};


  Node *first(int data);

  void push(Node **top, int data);

  int pop(Node **top);

  void print(Node *top);
