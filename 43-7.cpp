#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int A[3] = {5,6,8};
    int B[3] = {4,7,8};

    priority_queue <int,vector<int>,greater<int>> q;

    for (int i=0; i<3; i++)
    {
        q.push(A[i]);
    }


    for (int i=0; i<3; i++)
    {
        q.push(B[i]);
    }

    cout<<"Priority Queue  =  ";
    while (!q.empty())
    {
        cout<<q.top()<<"  ";
        q.pop();
    }

    cout<<endl<<endl;

    return 0;
}
