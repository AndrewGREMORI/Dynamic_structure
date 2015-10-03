/*
field_beg - начало
field_end - конец
*/
#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node *field;
};

Node *first_queue(int data);

void add_queue(Node **field_end, int data);

int del_queue(Node **field_beg);
