#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{

    queue<int> a;
    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        a.push(i);
    }

    cout << "Sixe is " << a.size() << endl;

    if (!a.empty())
    {
        cout << a.back();
    }
   while (!a.empty())
    {
        cout << a.front() << endl;
        a.pop();
    }
}
