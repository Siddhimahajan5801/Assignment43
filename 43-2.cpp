#include<bits/stdc++.h>
using namespace std;

void Display(priority_queue <int> q)
{
    while (!q.empty())
    {
        cout<<q.top()<<"  ";
        q.pop();
    }
}

int main ()
{
    priority_queue <int> q;
    q.push(5);
    q.push(9);
    q.push(1);
    q.push(2);
    q.push(7);
    q.push(3);

    cout<<"Priority Queue  =  ";
    Display(q);

    cout<<"\n\nAfter Adding new element the Queue = ";
    q.push(8);
    Display(q);

    cout<<"\n\nAfter removing an element Queue = ";
    q.pop();
    Display(q);

    cout<<"\n\nSize = "<<q.size();

    cout<<endl<<endl;

    return 0;
}
