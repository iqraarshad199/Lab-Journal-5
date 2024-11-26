#include "Doublylist.h"
#include<iostream>

using namespace std;

int main() {
	                                   //TASK2
	cout << "\n\t\t=====================LAB JOURNAL 5===========================" << endl;
	Doublylist l;
		int choice;
	int val,pos;

	do {
		
		cout << "\n\n1.Insert a node at the beg." << endl;
		cout << "2.Insert a node at the pos." << endl;
		cout << "3.Insert a node at the end." << endl;
		cout << "4.Delete a node from the beginning." << endl;
		cout << "5.Delete a node from the pos." << endl;
		cout << "6.Delete a node from the end." << endl;
		cout << "7.Display a list." << endl;
		cout << "8.Reverse a list." << endl;
		cout << "9.Display a alternate list." << endl;
		cout << "10.Exit!." << endl;
		cout << "\nEnter a choice:";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Enter a value:";
			cin >> val;
			l.insertbegin(val);
			l.traverse();
			break;
		case 2:
			cout << "Enter a value:";
			cin >> val;
			l.insertafter(2,val);
			l.traverse();
			break;
		case 3:
			cout << "Enter a value:";
			cin >> val;
			l.insertend(val);
			l.traverse();
			break;
		case 4:
			l.deletebegin();
			l.traverse();
			break;
		case 5:
			cout << "Enter a value:";
			cin >> pos;
			l.deletenode(pos);
			l.traverse();
			break;
		case 6:
			
			l.deleteend();
			l.traverse();
			break;
		case 7:
			l.traverse();
			break;
		
		case 8:
			l.reverselist();
			l.traverse();
			break;
		case 9:
			l.displayAlternate();
			break;
		default:
			cout << "Invalid!" << endl;
			break;
		case 10:
			exit(0);
			break;
        }
	} while (choice != 0);	

	cout << "\n\t\t=========================================================" << endl;
	return 0;

}

                                      //TASK 1
//int main() {
//	Doublylist list;
//
//
//	list.insertend(17);  
//	list.insertend(26);  
//	list.insertend(9);   
//	
//	Node* last = list.tail;   
//
//	cout << "\nValue at last: " << last->data << endl; // Output: 26
//
//	return 0;
//}

//int main() {
//    Doublylist list;
//
//    list.insertend(17);  
//    list.insertend(26);  
//    list.insertend(9);  
//
//    Node* first = list.head;  
//
//    // b. Print the value 17 using the pointer ‘first’
//    cout << "\nValue at first: " << first->data << endl; // Output: 17
//
//    return 0;
//}

//int main() {
//    Doublylist list;
//
//    list.insertend(17);  // first node
//    list.insertend(26);  // last node
//    list.insertend(9);   // another node
//
//    Node* last = list.tail;   
//
//    // c. Print the address of the node containing value 9 using the pointer ‘last’
//    Node* temp = last;
//    while (temp != nullptr) {
//        if (temp->data == 9) { 
//            cout << "\nAddress of node containing value 9: " << temp << endl;
//            break; 
//        }
//        temp = temp->prev; 
//    }
//
//    return 0;
//}