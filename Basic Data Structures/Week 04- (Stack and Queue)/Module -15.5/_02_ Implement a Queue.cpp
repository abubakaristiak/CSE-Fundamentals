//https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTabValue=PROBLEM
/*
#include <bits/stdc++.h> 
class Node
{
    public:
        int data;
        Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*

    bool isEmpty() {
        // Implement the isEmpty() function
        return size==0;

    }

    void enqueue(int data) {
        // Implement the enqueue() function
        size++;
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }

    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;
        }
        size--;
        Node *deleteNode = head;
        int front_value = head->data;
        head = head->next;
        delete deleteNode;
        return front_value;

    }

    int front() {
        // Implement the front() function
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }
};

*/
