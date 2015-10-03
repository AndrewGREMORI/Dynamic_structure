// Stack_(1_1).cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Stack.h"


int main()
{
	Node *top = first(1); 

	int k;
	cout << "Enter";
	cin >> k;
	for (int i = 2; i < k; i++)
		push(&top, i); 

    cout << "Print" <<endl;
    print(top);

    cout << endl<< endl <<"Print and delete"<<endl;
	while (top)
		cout << pop(&top) << endl;
        
    return 0;
}

