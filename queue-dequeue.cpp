// my_program.cpp
// #include "my_class.h"
// #include "array_fiddling.h"
// #include "StackPushPop.h"

// #include "StackPushPop.h"
#include <iostream>
#include <stdio.h>

using namespace std;

//
// Created by Hannah Godofsky on 2/6/22.
//



/* C++ program to implement a queue */

struct Queue {
    int front, rear, capacity;
    int* queue;
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }
    ~Queue() { delete[] queue;}
    // function to insert an element at the rear of the queue
    void queueEnqueue(int data)
    {
        // check queue is full or not
        if (capacity == rear) {
            printf("\nQueue is full\n");
            return;
        }
        // insert element at the rear
        else {
            queue[rear] = data;
            rear++;
        }
        return;}
        // function to delete an element
        // from the front of the queue
        void queueDequeue()
        {
            //if the queue is empty
            if (front == rear) {
                printf("\nQueue is empty\n");
                return;
            }
            //shift all the elements from index 2 till rear
            // to the left by one
            else {
                for (int i = 0; i < rear - 1; i++) {
                    queue[i] = queue[i+1];
                }
                // decrement rear
                rear--;
            }
            return;
        }
        void queueDisplay()
        {
            int i;
            if (front ==rear) {
                printf("\nQueue is Empty\n");
                return;
            }
            for (i = front; i < rear; i++) {
                printf(" %d <-- ", queue[i]);
            }
            return;
        }
        // print front of queue
        void queueFront()
        {
            if (front ==rear) {
                printf("\nQueue is Empty\n");
                return;
            }
            printf("\nFront Element is: %d", queue[front]);
            return;
        }
    };
    //Driver code
    int main(void)
    {
        // Create a queue of capacity 4
        Queue q(4);
        // print Queue elements
        q.queueDisplay();
        // insert elements into queue
        q.queueEnqueue(20);
        q.queueEnqueue(30);
        q.queueEnqueue(40);
        q.queueEnqueue(50);
        q.queueDisplay();
        q.queueEnqueue(60);
        q.queueDisplay();
        q.queueDequeue();
        q.queueDequeue();
        printf("\n\n after two node deletion\n\n");
        //print queue elements
        q.queueDisplay();
        //print front of queue
        q.queueFront();
        return 0;


    }