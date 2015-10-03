#include "stdafx.h"
#include "queue.h"



Node *first_queue(int data)
{
    Node* new_field = new Node;
    new_field->data = data;
    new_field->field=NULL;
    return new_field;
}


void add_queue(Node **field_end, int data)
{
    Node *new_field = new Node;
    new_field->data=data;
    new_field->field=NULL;
    (*field_end)->field=new_field;
    *field_end=new_field;
}

int del_queue(Node **field_beg)
{
    int temp=(*field_beg)->data;
    Node *new_field = *field_beg;
    *field_beg=(*field_beg)->field;
    delete new_field
}
