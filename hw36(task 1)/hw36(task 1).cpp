#include "MyStack.h"
#include <string>
using std::string;

int main()
{
    MyStack::Stack<string> a;

    a.push("abc");
    a.push("fx");
    a.push("glc");
    a.push("hi");
    a.push("gogo");
    a.show();
    cout << "--------------------\n";
    a.pop();
    a.push("the end");
    a.show();
    cout << "--------------------\n";
    int count = 0;
    while (!a.isEmpty()) {
        if (a.top().size() == 2) { count++; }
        a.pop();
    }
    cout << "Total count of elements with 2 symbols: " << count << endl;
}