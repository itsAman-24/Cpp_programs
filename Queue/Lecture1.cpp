#include <bits/stdc++.h>
using namespace std;
#define MAX 4
int queue_arr[MAX];
int rare = 0;
int first = 0;

void enqueue(int data) {
    if(rare == MAX) {
        cout << "Your queue is full" << endl;
    }

    else {
        queue_arr[rare] = data;
        rare++;
    }
}

void dequeue() {
    if(first == rare) {
        cout << "Your have empty queue" << endl;
    }

    else {
        queue_arr[first] = -1;
        first++;
    }

    if(first == rare) {
        first = 0;
        rare = 0;
    }
}

void print() {
    for(int i = 0; i < MAX; i++) {
        cout << queue_arr[i] << endl;
    }
}


int main() {
    enqueue(5);
    enqueue(6);
    enqueue(13);
    enqueue(53);

    print();
    
    cout << endl << endl;
    dequeue();

    print();
}

