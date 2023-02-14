#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int required_length(int a[], int k, int N)
{
    priority_queue <int> pq;

    int sum=0,count=0;

    for(int i=0; i<N; i++)
    {
        pq.push(a[i]);
    }

    while(!pq.empty() && sum<k)
    {
        sum = sum + pq.top();
        pq.pop();

        count++;
    }

    if (sum<k)
    {
        return -1;
    }
    else
    {
        return count;
    }

}

int main ()
{
   int arr[] = {2,3,1,5,6,3,7,9,14,10,2,5};
   int K=35;
   int Size = sizeof(arr)/sizeof(arr[0]);
   cout<<"Output-1 : "<<required_length(arr,K,Size)<<endl;

   int arr2[] = {1,2,2,2,3,4,5,4,7,6,5,12};
   K=70;
   int Size2 = sizeof(arr2)/sizeof(arr2[0]);
   cout<<"Output-2 : "<<required_length(arr2,K,Size2)<<endl;

   return 0;
}
