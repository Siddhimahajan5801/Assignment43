#include<bits/stdc++.h>
using namespace std;

int main ()
{
    priority_queue <int> q;
    q.push(5);
    q.push(9);
    q.push(1);
    q.push(2);
    q.push(7);
    q.push(3);

    cout<<"Priority Queue =  ";   //Max heap
    while (!q.empty())
    {
        cout<<q.top()<<"  ";
        q.pop();
    }

    cout<<endl<<endl;

    return 0;
}
