// doublelinklist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Node
{
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

Node* START = NULL;

void addNode() {
	Node* newNode = new Node(); // step1 : create a new mode
	cout << "\nEnter the roll number of the student: ";
	cin >> newNode->noMhs; //Assign value to the data field of the new node
	cout << "\nEnter the roll name of the student: ";
	cin >> newNode->name; //Assign value to the data field of the new node
}

int main()
{
   
}

