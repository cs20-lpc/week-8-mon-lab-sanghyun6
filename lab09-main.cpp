#include <iostream>
#include "ArrayStack.hpp"
using namespace std;

int main()
{
    ArrayStack<int> stackA(10);
    for (int i = 0; i < 10; i++)
    {
        stackA.push(i);
        cout << i;
        if (i < 9)
            cout << " ";
    }
    cout << endl;

    if (stackA.isFull())
    {
        cout << "Stack A is full!" << endl;
    }
    cout << "Stack A length: " << stackA.getLength() << endl;

    ArrayStack<int> stackB(stackA);
    cout << "Stack B length: " << stackB.getLength() << endl;

    try
    {
        stackB.push(99);
    }
    catch (string e)
    {
        cout << "push: error, stack is full, avoiding overflow" << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Popping " << stackB.peek() << " from stack B" << endl;
        stackB.pop();
    }
    cout << "Stack B length: " << stackB.getLength() << endl;

    stackB.clear();
    cout << "Stack B is now empty after being cleared" << endl;

    try
    {
        stackB.pop();
    }
    catch (string e)
    {
        cout << "pop: error, stack is empty, avoiding underflow" << endl;
    }

    try
    {
        stackB.peek();
    }
    catch (string e)
    {
        cout << "peek: error, stack is empty, cannot access the top" << endl;
    }

    ArrayStack<int> stackC(10);
    stackC = stackA;
    cout << "Stack A length: " << stackA.getLength() << endl;
    cout << "Stack C length: " << stackC.getLength() << endl;

    return 0;
}