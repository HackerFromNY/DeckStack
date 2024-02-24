#pragma once
#include "iostream"

template <typename T>
class Dequeue
{
public:
	Dequeue()
	{
		head = nullptr;
	}

private:
	struct Node
	{
		T data;
		Node* next;
		Node* prev;

		Node(T data)
		{
			this->data = data;
			next = nullptr;
			prev = nullptr;
		}
		~Node()
		{
			if (next) delete next;
		}

		bool isEmpty() const
		{
			return head == nullptr;
		}

		void pushBack(T data)
		{
			Node* newNode = new Node(data);
			newNode->next = nullptr;

			if (head == nullptr) {
				head = newNode; 
			}
			else {
				Node* current = head;
				while (current->next != nullptr) {
					current = current->next;
				}
				current->next = newNode; 
			}
		}

		void pushForward(T data)
		{
			Node* newNode = new Node(data);
			newNode->next = nullptr;

			if (head == nullptr)
			{
				head = newNode;
			}
			else
			{
				Node* current = tail;
				while(current->)
			}
		}

		T popBack()
		{


			if (head == nullptr) {
				throw "Очередь пуста";
			}
			else {
				head->next = nullptr;
				T data = head->data;
				Node* temp = head;
				head = head->next;
				delete temp;
				return data;
			}
		}

		T popForward()
		{
			if (head == nullptr)
			{
				throw "Очередь пуста";
			}
			else
			{
				head->prev = nullptr;
				T data = head->data;
				Node* temp = head;
				head = head->prev;
				delete temp;
				return data;
			}
		}

		
	}
private:
	Node* head;
	Node* tail;

};