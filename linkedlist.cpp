#include "linkedlist.h"
#include <iostream>
using namespace std;

Node::Node()
{
	data = 0;
	next = NULL;
}

Node::Node(int myData)
{
	data = myData;
	next = NULL;
}

Node::Node(int myData, Node *myNext)
{
	data = myData;
	next = myNext;
}

linkedlist::linkedlist()
{
	head = NULL;
}

void linkedlist::insertAtHead(int data)
{
	Node* newNode = new Node(data);

	if (head == NULL)
	{
		head = newNode;
		return;
	}

	newNode->next = head;
	head = newNode;
}

void linkedlist::insertAtTail(int data)
{
	Node* newNode = new Node(data);

	newNode->next = NULL;
	Node* temp = head;

	if (temp == NULL)
	{
		temp = newNode;
		return;
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
}

void linkedlist::print(void)
{
	Node* temp = head;

	if (head == NULL)
	{
		cout << "List empty" << endl;
		return;
	}

	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

void linkedlist::printRecursive(Node *ptr)
{
	if (ptr != NULL)
	{
		cout << ptr->data << " ";
		printRecursive(ptr->next);
	}
}

bool linkedlist::searchTarget(int target)
{
	Node* backup = head;

	if (head == NULL)
	{
		return false;
	}

	while (backup != NULL)
	{
		if (target == backup->data)
		{
			return true;
		}
		backup = backup->next;
	}

	return false;
}

int linkedlist::getLenList(void)
{
	int count = 0;
	Node* temp = head;

	if (temp == NULL)
	{
		return 0;
	}

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return count;
}

Node* linkedlist::getHead(void)
{
	return head;
}
