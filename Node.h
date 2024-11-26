#pragma once

/**
 * @A class that represents a node in a doubly linked list.
 * Each node contains data and pointers to both the next and previous nodes,
 * allowing for bidirectional traversal of the list.
 */
class Node
{
public:
	int data;
	Node* next;
	Node* prev;
    /**
 * @Constructor for the Node class.
 * Initializes a new node with a specified value. If no value is provided,
 * it defaults to 0.
 * @val The value to be stored in the node default is 0.
 */
	Node(int val=0);
};

