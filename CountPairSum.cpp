#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

/*int main()
{

    int m=4;
    int n=4;
    int count=0;

    int arr1[]={1, 3, 5, 7};

    int arr2[]={2, 3, 5, 8} ;


      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i]+arr2[j]==10)
            {
               count++;
            }

        }

      }

      cout<<count;



}*/

// Using STL

int main()
{
    vector<int> arr1;
    vector<int> arr2;

    int m = 4;
    int n = 4;
    int x;
    for (int i = 1; i <=n; i++)
    {
        cin>>x;
        arr1.push_back(x);
    }

    vector<int>::iterator i;
  
    for ( i = arr1.begin(); i != arr1.end(); i++)
    {
       
        cout<<*i<<endl;
    }
   // arr1.pop_back();
}