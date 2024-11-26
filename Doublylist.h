#pragma once
#include "Node.h"
class Doublylist
{
public:
	Node* head;
	Node* tail;
public:

	/**
* @Constructor for the Node class.
*/
	Doublylist();
	
	/**
 * @Checks if the list is empty.
 * @return true if the list is empty; otherwise false.
 */
	bool isEmpty();

	/**
 * @Inserts a new node with the specified value at the beginning of the list.
 * @val the value to be inserted at the beginning.
 */
	void insertbegin(int val);
	
	/**
 * @brief Inserts a new node with the specified value after a node with a given value.
 *
 * @pos The value after which the new node should be inserted.
 * @val The value to be inserted.
 */
	void insertafter(int pos, int val);

	/**
 * @Inserts a new node with the specified value at the end of the list.
 * @val The value to be inserted at the end.
 */
	void insertend(int val);

	/**
 * @Deletes the first node from the list.
 */
	void deletebegin();

	/**
 * @Deletes the first occurrence of a node with a specified value from the list.
 * @val The value of the node to be deleted.
 */
	void deletenode(int val);


	/**
	 * Deletes the last node from the list.
	 */
	void deleteend();

	/**
 * Traverses and prints all elements in the list from head to tail.
 */
	void traverse();

	/**
 * @Reverses the order of nodes in the list.
 */
	void reverselist();

	/**
 * @Displays every alternate element in the list starting from head.
 */
	void displayAlternate();
};

