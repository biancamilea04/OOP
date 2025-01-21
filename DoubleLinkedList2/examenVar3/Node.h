#pragma once

template <class T>
class Node {
public:
	Node* next;
	Node* prev;
	T value;
	Node(const T& val) : next(nullptr), prev(nullptr), value(val) {};
};