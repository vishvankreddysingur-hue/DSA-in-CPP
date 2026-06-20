#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Circular Linked List class
class CircularLinkedList {
    Node* head;

public:
    CircularLinkedList() {
        head = NULL;
    }

    // Insert at end
    void insert(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    // Delete a node by value
    void remove(int val) {
        if (head == NULL) return;

        Node *curr = head, *prev = NULL;

        // If head node is to be deleted
        if (head->data == val) {
            if (head->next == head) {
                delete head;
                head = NULL;
                return;
            }

            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }

            temp->next = head->next;
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        prev = head;
        curr = head->next;

        while (curr != head && curr->data != val) {
            prev = curr;
            curr = curr->next;
        }

        if (curr == head) return; // not found

        prev->next = curr->next;
        delete curr;
    }

    // Display list
    void display() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;

        cout << "Circular Linked List: ";

        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(back to head)" << endl;
    }
};

int main() {
    CircularLinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.display();

    list.remove(20);
    list.display();

    return 0;
}
