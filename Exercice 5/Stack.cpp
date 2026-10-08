//
// Created by Kolio on 10/8/2026.
//

#include "Stack.h"

#include <iostream>
#include <ostream>
using namespace std;
Stack::Stack() {
    this->top = -1;

    for (char & i : data) {
        i = '\0';
    }
}

void Stack::push(char c) {
    if (top == 99) {
        cout << "Stack is full" << endl;
        return;
    }
    top++;
    data[top] = c;

}

void Stack::pop() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    data[top]='\0';
    top--;
}

void Stack::clear() {
    top = -1;
}

void Stack::display() const {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    }
    else {
        for (int i = top; i >= 0; i--) {
            cout << data[i] ;
        }
        cout << endl;
    }
}

void Stack::load() {
    for (char i ='a' ; i<='z'; i++) {
        push(i);
    }
}

void Stack::load(bool isUpper) {
    if (isUpper) {
        for (char i ='A' ; i<='Z'; i++) {
            push(i);
        }
    }else {
        load();
    }
}

void Stack::load(char from, char to) {
    if (from == '\0' || to == '\0') {
        cout << "Can't load empty stack" << endl;
    }
    if (from == to) {
        push(from);
    }
    if (to< from) {
        swap(from, to);
    }

    for (char i =from; i<=to; i++) {
        push(i);
    }
}



