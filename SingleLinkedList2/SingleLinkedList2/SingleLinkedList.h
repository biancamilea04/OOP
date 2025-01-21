#pragma once
#include <iostream>

template <class T>
class SingleLinkedList {
private:

	struct Node {
		Node* next;
		T data;
		Node(T value) : data(value), next(nullptr) {};
	};
	Node* head;
public:
	SingleLinkedList():head(nullptr) {};
	~SingleLinkedList() {
		Node* temp = head;
		while (head != nullptr) {
			temp = head->next;
			delete head ;
			head = temp;
		}
	};

	SingleLinkedList& operator +=(T val) {
		Node* NewNode = new Node(val);
		if (head == nullptr) {
			head = NewNode;
		}
		else {
			Node* temp = head;
			while (temp ->next != nullptr) {
				temp = temp ->next;
			}
			temp->next = NewNode;
		}
		return *this;
  }

	void print() {
		Node* temp = head;
		while (temp != nullptr) {
			std::cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void print( void(*p) (const T& val) ) {
		Node* temp = head;
		while (temp != nullptr) {
			p(temp->data);
			temp = temp->next;
		}
	}

	bool operator && (T val) {
		Node* temp = head;
		while (temp != nullptr) {
			if (temp->data == val)
				return true;
			temp = temp->next;
		}

		return false;
	}

	T pop_first() {
		if (head != nullptr) {
			T val = head->data;
			head = head->next;
			return val;
		}
		else
			return T();
	
	}

	operator bool() {

		if (this->head == nullptr)
			return false;
		else
			return true;
	}

};

// (((s += 10) += 20) += 30);
//  s += 10; 
//  ((s += 20) += 30)