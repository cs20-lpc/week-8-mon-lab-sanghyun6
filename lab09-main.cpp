#include <iostream>
#include "ArrayStack.hpp"
using namespace std;

int main()
{

    ArrayStack<int> s1(5);
    cout << s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout << s1;

    s1.rotate(Stack<int>::RIGHT);

    cout << "peek: " << s1.peek() << endl;
    s1.pop();
    cout << "After pop:\n"
         << s1;

    s1.rotate(Stack<int>::RIGHT);
    s1.rotate(Stack<int>::LEFT);

    ArrayStack<int> s2(3);
    s2.push(1);
    s2.push(2);
    s2.push(3);
    try
    {
        s2.push(4);
    }
    catch (string e)
    {
        cout << "Exception: " << e << endl;
    }

    ArrayStack<int> s3(3);
    try
    {
        s3.pop();
    }
    catch (string e)
    {
        cout << "Exception: " << e << endl;
    }
    try
    {
        s3.peek();
    }
    catch (string e)
    {
        cout << "Exception: " << e << endl;
    }

    ArrayStack<int> s5(s2);
    cout << "s2:\n"
         << s2;
    cout << "s5 (copy of s2):\n"
         << s5;
    s5.pop();
    cout << "After pop on s5:\n";
    cout << "s2:\n"
         << s2;
    cout << "s5:\n"
         << s5;

    return 0;
}