#include "linkedlist.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	linkedlist list;

	list.insertAtHead(450);
	list.insertAtHead(340);
	list.insertAtHead(206);
	list.insertAtHead(1440);
	list.insertAtHead(135);


	int target;

	cout << "What is the target?: ";
	cin >> target;

	cout << "Elements of the list are: ";

	list.print();
	bool found = list.searchTarget(target);

	if (found == true)
	{
		cout << "The target was found." << endl;
	}

	else
	{
		cout << "Target not found." << endl;
	}
	cout << endl;

	int count = list.getLenList();
	cout << count << endl;

	list.insertAtTail(163);
	list.print();

	Node *temp = list.getHead();
	list.printRecursive(temp);

	return 0;
}
