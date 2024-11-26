#include "Doublylist.h"
#include<iostream>

using namespace std;

Doublylist::Doublylist(){
	head = nullptr;
}
bool Doublylist::isEmpty() {
	if (head == nullptr)
		return true;
	else
		return false;
}

void Doublylist::insertbegin(int val) {
	Node* newnode = new Node;
	newnode->data = val;
	if (isEmpty()) {
		head = tail = newnode;
	}
	else {
		Node* temp = head;
		newnode->next = head;
		head->prev = temp;
		head = newnode;
	}
}

void Doublylist::insertafter(int pos, int val) {
	Node* newnode = new Node;
	newnode->data = val;
	if (isEmpty()) {
		head = tail = newnode;
	}
	else {
		Node* temp = head;
		while (temp != nullptr && temp->data != pos) {
			temp = temp->next;
		}
		newnode->prev = temp;
		newnode->next = temp->next;
		temp->next->prev = newnode;
		temp->next = newnode;
	}
}

void Doublylist::insertend(int val) {
	Node* newnode = new Node;
	newnode->data = val;
	if (isEmpty()) {
		head = tail = newnode;
	}
	else {
		Node* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
		tail = newnode;
	}
}

void Doublylist::deletebegin() {
	Node* temp = head;
	if (isEmpty()) {
		cout << "List is Empty." << endl;
		return;
	}
	else {
		head = head->next;
		if (head != nullptr) {
			head->prev = nullptr;
		}
		else {
			tail = nullptr;
		}
		delete temp;
	}
}

void Doublylist::deletenode(int val) {
	if (isEmpty()) {
		cout << "List is Empty." << endl;
		return;
	}
	Node* temp = head;
	if (head->data == val) {
		head = head->next;
		if (head != nullptr) {
			head->prev = nullptr;
		}
		else {
			tail = nullptr;
		}
		delete temp;
	}
	if (tail->data == val) {
		tail = tail->prev;
		tail->next=nullptr;
		delete temp;
	}
	else {
		while (temp != nullptr && temp->data != val) {
			temp = temp->next;
		}
		temp->prev->next = temp->next;
		if (temp->next != nullptr) {
			temp->next->prev = temp->prev;
		}
		delete temp;
	}
}

void Doublylist::deleteend() {
	if (isEmpty()) {
		cout << "List is Empty." << endl;
		return;
	}
	if (head == tail) {
		delete tail;
		head = tail = nullptr;
	}
	else {
		Node* temp = tail;
		tail = tail->prev;
		tail->next = nullptr;
		delete temp;
	}
}


void Doublylist::traverse() {
		Node* temp = head;
		while (temp != nullptr) {
			cout << temp->data << "<->";
			temp = temp->next;
		}
	}

void Doublylist::reverselist() {

	Node* temp =head;
	Node* next = nullptr;
	Node* prev = nullptr;
	if (isEmpty()) {
		cout << "List is empty." << endl;
		return;
	}
	while (temp != nullptr) {
		next = temp->next;  // Store the next node
		temp->next = prev;  // Reverse the next pointer
		temp->prev = next;  // Reverse the prev pointer
		prev = temp;       // Move prev to this node
		temp = next;       // Move to the next node
	}
	head = prev;
}


void Doublylist::displayAlternate() {
	Node* temp = head;

	while (temp != nullptr) {
		cout << temp->data << " "; 
		temp = temp->next; 
		if (temp != nullptr) { 
			temp = temp->next; 
		}
	} 
}