#include<bits/stdc++.h>
using namespace std;

void Display (priority_queue <int> q)
{
    while (!q.empty())
    {
        cout<<q.top()<<"  ";
        q.pop();
    }

}

int main ()
{
    priority_queue <int> q1;
    priority_queue <int> q2;

    for (int i=1; i<6; i++)
    {
        q1.push(2*i);
    }

    for (int i=1; i<5; i++)
    {
        q2.push(3*i);
    }

    cout<<"Before Swapping : \n\nQueue-1 = ";
    Display(q1);

    cout<<"\n\nQueue-2 = ";
    Display(q2);

    cout<<"\n\n-------------------------------------------------\n\n";

    q1.swap(q2);

    cout<<"After Swapping : \n\nQueue-1 = ";
    Display(q1);

    cout<<"\n\nQueue-2 = ";
    Display(q2);

    cout<<"\n\n-------------------------------------------------\n\n";


    return 0;
}
