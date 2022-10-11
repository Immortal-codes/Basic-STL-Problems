#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> a;
    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        a.push_back(i);
    }
    vector<int>::iterator i;

    for (i = a.begin(); i != a.end(); ++i)
    {
        cout << *i << " ";
    }

    sort(a.begin(),a.end());


    reverse(a.begin(),a.end());

  cout<<endl;
    for (i = a.begin(); i != a.end(); ++i)
    {
        cout << *i << " ";
    }
}