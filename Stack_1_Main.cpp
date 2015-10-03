// Stack_(1_1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Stack.h"


#include <iostream>
using namespace std;

int main()
{
	Node *top = first(1); 

	int k;
	cout << "Enter";
	cin >> k;
	for (int i = 2; i < k; i++)
		push(&top, i); 

	while (top)
		cout << pop(&top) << endl;

    return 0;
}
