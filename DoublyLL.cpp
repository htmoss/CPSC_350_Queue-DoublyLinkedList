#include "DoublyLL.h"

DoublyLL::DoublyLL()
{
	node * front = NULL;
	node * back= NULL;
	int times = 0;
}
DoublyLL::~DoublyLL()
{

}
void DoublyLL::insert(node *& head)
{	
	node * temp = new node;

	temp->next = head;
	temp->prev = NULL;

	if(head != NULL)
	{
		head->prev = temp;
	}
	head = temp;
}
void DoublyLL::deleteN(node *& head, int time)
{
	node * front;
	node * back;

	front = head;
	back = head;
	
	while((front->times != time) && (front->next != NULL))
	{
		back = front;
		front = front->next;
	}

	if((front->times != time) && (front->next == NULL))
	{
		cout << "Not in the list." << endl;
	}
	//deleting last node in the list
	else if((front->times == time) && (front->next == NULL))
	{
		back->next = NULL;
		delete front;
	}
	//deleting the first node in the list
	else if((front->times == time) && (front->prev == NULL))
	{
		head = head->next;
		head->prev = NULL;
		delete front;
	}
	//deleting a node other than first or last
	else
	{
		back->next = front->next;
		front->next->prev = back;
		delete front;
	}
}
void DoublyLL::displayLtoR(node *& head)
{

}
void DoublyLL::displayRtoL(node *& head)
{

}