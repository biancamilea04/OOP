#pragma once
#include <iostream>
#include <functional>
#include "Node.h"

template <class T>
class DoubleLinkedList : public Node<T> {
private:
	Node<T>* head;
	Node<T>* tail;
	int count;
public:
	DoubleLinkedList():head(nullptr),tail(nullptr),count(0){}

	~DoubleLinkedList() {
		while (head != nullptr) {
			Node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}
	void PushOnFront(T val) {
		Node<T>* newNode = new Node<T>(val);
		if (head == nullptr) {
			head = tail = newNode;
		}
		else
		{
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
		}

	}
	void PushOnBack(T val) {
		Node<T>* newNode = new Node<T>(val);
		if (tail == nullptr) {
			tail = head = newNode;
		}
		else {
			newNode->prev = tail;
			tail->next = newNode;
			tail = newNode;
		}

	}
	T PopFromBack();
	void PrintAll(const std::function <void (const T&)>& print) const;
	int GetCount();


};