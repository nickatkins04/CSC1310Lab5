/*****************************************************************
	Filename:       LinkedList.h - Class Specification File for 
				    LinkedList Template Class
	Date Created:   10/18/24
	Author:         Nicholas Atkins
	Purpose:        LAB 5 - A Singly-Linked List implemented in a
				    LinkedList template class that contains a ListNode
				    structure variable
******************************************************************/

#ifndef LinkedList_H
#define LinkedList_H

#include <iostream>
using namespace std;


template <typename T>
class LinkedList
{
	private:
		struct ListNode
		{
			T data;
			ListNode* next;
		}; 

		ListNode *head;	
		ListNode *tail;		

	public:
		LinkedList()
		{ 
			head = NULL; 
			tail = NULL;
		}
		~LinkedList();
		void appendNode(T value);
		void deleteNode(int position);
		void displayList() const;
};

//DEFINE ALL OTHER LinkedList class FUNCTIONS BELOW THIS LINE--------------------------------
template <typename T>
void LinkedList<T>::appendNode(T value)
{
	ListNode *newNode = new T;

	newNode->data = value;
	newNode->next = NULL;

	if(!head)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		tail = newNode;
	}

}

template <typename T>
void LinkedList<T>::deleteNode(int position)
{
	ListNode *nodePtr;
	ListNode *previousNode;

	if(head == NULL)
		return 0;

	p = zeroth();
	while(p->next)
	{
		if(p->next->element == data)
			return p;
		p = p->next;
		previousNode = p;
	}

	if 



	if(position == 0)
		cout << "-----DELETING the node with address: " << 

	


}

#endif