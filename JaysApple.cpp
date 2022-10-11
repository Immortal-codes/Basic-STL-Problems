#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include<algorithm>
#include<queue>


using namespace std;

int main()
{
     
     int arr[]={1, 1, 1, 1, 1};
     int n=5;
    queue<int>a;

    for (int i = 0; i < n; i++)
    {
       a.push(arr[i]);
    }
   
    for (int i =0; i!=a.empty(); ++i)
    {
        cout<<i;
    }
    

   
   


}