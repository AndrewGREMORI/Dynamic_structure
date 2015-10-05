#include "stdafx.h"
#include "list.h"

Node *first(int data)
{
  Node *new_field = new Node;
  new_field->data = data;
  new_field->next = 0;
  return new_field;
}

void add(node *field_beg, int data)
{
  Node * new_field = new Node;
  new_field->data = data;
  new_field->next = 0;
  Node *fiekd = field_beg;
  while(field->next)
    field = field->next;
  field->next =  new_field;
}

Node *find(node *const field_beg, int data)
{
  Node *new_field = field_bag;
  while(new_field)
    {
      if(new_field->data == data)
        break;
      new_field = new_field->next;
    }
  return new_field;
}

Node *insert(noe *const field_beg, int key, int data)
{
  if(Node *field_key = find (field_beg, key)
  {
    Node *new_field = new Node;
    new_field->data = data;
    new_field->next = field_key->next;
    field_key->next = new_field;
    return new_field;
  }
  return 0;
}

Node *insert_befor(noe **field_beg, int key, int data)
{
  if(Node *field_key = find (field_beg, key)
  {
    Node *new_field = new Node;
    new_field->data = data;
    if(field_key == *field_beg)
    {
       new_field->next = *field_beg;
       *field_beg =  new_field;
       return field_beg;
    }
    else
    {
      new_field->next = field_key;
      Node *field = *field_beg;
      while(field->next != field)
        field = field->next;
      field->next = new_field;
      return new_field;
    }
  }
}
