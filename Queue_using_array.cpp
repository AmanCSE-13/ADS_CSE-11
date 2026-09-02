// Queue using array

#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow!" << endl;
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = value;

    cout << value << " inserted into queue." << endl;
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!" << endl;
        return;
    }

    cout << queue[front] << " deleted from queue." << endl;

    front++;
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Front element is: " << queue[front] << endl;
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Queue: ";

    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    peek();

    dequeue();

    display();

    return 0;
}