#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

int main()
{

    map<int, int> a;

    a.insert(pair<int, int>(1, 40));
    a.insert(pair<int, int>(2, 30));
    a.insert(pair<int, int>(3, 60));
    a.insert(pair<int, int>(4, 20));
    a.insert(pair<int, int>(5, 50));
    a.insert(pair<int, int>(6, 50));

    map<int, int>::iterator itr;

    for (itr = a.begin(); itr != a.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
}