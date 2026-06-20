#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    // Insert at end
    void insert(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete a node by value
    void remove(int val) {
        if (head == NULL) return;

        Node* temp = head;

        // If head needs to be deleted
        if (head->data == val) {
            head = head->next;
            if (head != NULL)
                head->prev = NULL;

            delete temp;
            return;
        }

        while (temp != NULL && temp->data != val) {
            temp = temp->next;
        }

        if (temp == NULL) return;

        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        if (temp->prev != NULL)
            temp->prev->next = temp->next;

        delete temp;
    }

    // Display forward
    void displayForward() {
        Node* temp = head;

        cout << "Forward: ";
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Display backward
    void displayBackward() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;

        // Move to last node
        while (temp->next != NULL) {
            temp = temp->next;
        }

        cout << "Backward: ";
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.displayForward();
    list.displayBackward();

    list.remove(30);

    list.displayForward();
    list.displayBackward();

    return 0;
}
