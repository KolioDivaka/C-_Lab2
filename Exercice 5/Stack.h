//
// Created by Kolio on 10/8/2026.
//

#ifndef LAB2_STACK_H
#define LAB2_STACK_H


class Stack {
private: char data[100]{};
    int top;
    public:
    Stack();
    void push(char c);
    void pop();
    void clear();
    void display() const;
    void load();
    void load(bool isUpper);
    void load(char from, char to);


};


#endif //LAB2_STACK_H
