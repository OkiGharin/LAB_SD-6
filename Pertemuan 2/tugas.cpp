#include <iostream>
using namespace std;

// deklarasi struktur node
struct node {
    int value;
    node *next;
};

node *top = NULL;

// push = insert di depan
void push(int n) {
    node *newNode = new node;
    newNode->value = n;
    newNode->next = top;   
    top = newNode;         
}

// pop = hapus node paling depan
void pop() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    node *temp = top;
    top = top->next;
    delete temp;
}

// lihat isi paling atas
void peek() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Top stack: " << top->value << endl;
    }
}

// cetak stack
void displayStack() {
    node *temp = top;
    cout << "isi stack (atas -> bawah): ";
    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node *front = NULL;
node *rear = NULL;

// enqueue = insert di belakang
void enqueue(int n) {
    node *newNode = new node;
    newNode->value = n;
    newNode->next = NULL;

    if (front == NULL) {       
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;  
        rear = newNode;        
    }
}

// dequeue = hapus node paling depan
void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong!" << endl;
        return;
    }

    node *temp = front;
    front = front->next;
    if (front == NULL) rear = NULL;   
    delete temp;
}

// lihat isi paling depan
void peekFront() {
    if (front == NULL) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Front queue: " << front->value << endl;
    }
}

// cetak queue
void displayQueue() {
    node *temp = front;
    cout << "isi queue (depan -> belakang): ";
    while (temp != NULL) {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    cout << "STACK" << endl;
    push(10);
    push(20);
    push(30);
    displayStack();   
    peek();           
    pop();
    displayStack();  

    cout << endl;

    cout << "QUEUE" << endl;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    displayQueue();   
    peekFront();      
    dequeue();
    displayQueue();   

    return 0;
}