#include "stdafx.h"

struct node
{
	double data; //  данные 
	node* next; // указатель на следующий
	node* pred; // указатель на предыдущий
};

const int SIZE = 10;

int main()
{
	node *list;
	list = new node;
	list->data = 564;
	list->next = list;
	list->pred = list;

	///////////////////////////////////////////////////////////////////////////////////////////////////
	node *mass;
	
	mass = NULL;
	
	for (int i = 0; i < SIZE; i++)
	{
		node* newnode = new node; 
		newnode->data = i; 
		if (mass == NULL)   
		{
			newnode->next = newnode;
			newnode->pred = newnode;
			mass = newnode; 
		}
		else
		{
			node* temp = mass; 
			for (int j = i; j > 1; j--, temp = temp->next); 
			temp->pred->next = newnode;
			newnode->pred = temp->pred;
			newnode->next = temp; 
			temp->pred = newnode;
		}
	}
	/*
	/////////////////////del element///////////////////////////
	int pos = 6;
	int val;
	if (mass == mass->next)
	{
		val = mass->data;
		delete mass;
		mass = NULL;
	}
	else
	{
		node* temp = mass;
		for (int i = pos; i > 1; i--, temp = temp->next);
		if (temp == mass)
		mass = temp->next;
		temp->pred->next = temp->next; 
		temp->next->pred = temp->pred;
		val = temp->data;
		delete temp;
	}
	*/
	return 0;
}