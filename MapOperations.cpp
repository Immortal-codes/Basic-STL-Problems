#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n = 10;
    int arr[] = {9, 8, 7, 4, 4, 2, 1, 1, 9, 8};

    map<int, int> a;

    for(int i=0;i<n;i++)
   {
        a[arr[i]]=i;
   }

   map<int, int>::iterator itr;

for (itr = a.begin(); itr != a.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
   
   
}