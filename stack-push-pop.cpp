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



/* C++ program to implement basic stack
operations */

// using namespace std;

#define SIZE 1000

class stk {
    int stack[SIZE];
    int top;

public:
    void push();

    int pop();

    void display();

    stk() { top = -1; }
};

void stk::push() // push function def
{
    int item;
    if (top == (SIZE - 1)) {
        cout << "Stack Overflow \n";
    }
    else {
        cout << "Enter element to push: \n";
        cin>>item;
        top=top+1;
        stack[top]=item;
    }
}

int stk::pop()
{
    int temp;
    if (top==-1) {
        cout << "Empty stack \n";
        return 0;
    }
    else {
        temp=stack[top];
        top=top-1;
    }return(temp);
}
void stk::display()
{
    if(top==-1)
        cout<<"stack empty\n";
    else
    {
        for (int i=top; i>0; i--)
        {
            cout<<"Elements are:\t";
            cout<<stack[i];
        }
    }cout<<endl;
}

int main(){

    int option=0;
    stk s;
    int element;
    while(1)
    {
        cout<<" ---------------------------------\n";
        cout<<"enter 1 to push:\nenter 2 for pop:\n";
        cout<<"enter 3 for display:\nenter 4 for exit\n";
        cout<<" ---------------------------------\n";

        cout<<"Enter option: \n";
        cin>>option;

        switch(option){
            case 1:
                s.push();
                break;
            case 2:
                element=s.pop();
                cout<<" ----  successful    ----";
                cout<<"popped element is= "<<element<<endl;
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"wrong choice\n";
                break;
        }
    }

    getchar();
    return 0;

}