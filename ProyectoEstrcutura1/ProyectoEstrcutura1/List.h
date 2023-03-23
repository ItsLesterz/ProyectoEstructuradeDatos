#pragma once
#include "Node.h"
class List
{
private:
	Node* first;
	Ui::ProyectoEstrcutura1Class ui;
public:
	List();
	~List();
	void insertNode(int);
	void printList();
	int size();
	int valueAt(int index);
	bool contains(int valor);
	bool deleteNode(int valueToDelete);
};