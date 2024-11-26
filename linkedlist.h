#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node
{
public:
	int data;
	Node *next;

	Node();
	Node(int data);

	Node(int data, Node *next);
};

class linkedlist
{
private:
	Node *head;

public:
	linkedlist();
	void insertAtHead(int data);
	void insertAtTail(int data);
	void print(void);
	void printRecursive(Node *);
	bool searchTarget(int target);
	int getLenList(void);
	Node * getHead(void);
};

#endif
