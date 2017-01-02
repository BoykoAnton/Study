#include "stdafx.h"

struct list
{
	short data;
	list *next;
};

inline bool inlFunc(list *poiner);
void function1(list *&begin, list *&end, short data);
void function2(list *&begin, list *&end, short data);

int main()
{
	list *begin = 0,
		 *end = 0;

	list *begin1 = 0,
		 *end1 = 0;

	for (int i = 0; i < 11; i++)
	{
		function1(begin, end, i);
	}
	///////////////////////////////////2//////////////////////////////////////////
	list *temp = begin;
	while (temp != NULL)
	{
		if (( temp->data % 2 ) != 0)
		{
			function2(begin1, end1, temp->data);
		}
		temp = temp->next;
	}

	return 0;
}

inline bool inlFunc(list *pointer)
{
	if (pointer == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void function1(list *&begin, list *&end, short data)
{
	list*cur = new(list);
	cur->data = data;
	cur->next = 0;

	if (inlFunc(begin))
	{
		begin = cur;
		end = cur;
	}
	else
	{
		end->next = cur;
		end = cur;
	}
}


void function2(list *&begin, list *&end, short data)
{
	list* newnode = new list;
	newnode->data = data;
	newnode->next = begin;
	begin = newnode;
}