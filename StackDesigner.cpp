#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    stack<int> stack;
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        stack.push(i);
    }
    while (!stack.empty())
    {

        cout << stack.top() << endl;
        stack.pop();
    }
}