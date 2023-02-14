#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count_triplets(int a1[], int a2[], int a3[], int N)
{
    sort(a1, a1+N);

    priority_queue<int, vector<int>, greater <int> > Y;
    priority_queue<int, vector<int>, greater <int> > Z;

    for (int i=0; i<N; i++)
    {
        Y.push(a2[i]);
    }
    for (int i=0; i<N; i++)
    {
        Z.push(a3[i]);
    }

    int x,y,z,ans=0;

    for(int i=0; i<N; i++)
    {
        x=a1[i];

        while(!Y.empty() && Y.top()<= x)
            Y.pop();

        if (Y.empty())
            break;

        y = Y.top();
        Y.pop();

        while(!Z.empty() && Z.top()<= y)
            Z.pop();

        if (Z.empty())
            break;

        z = Z.top();
        Z.pop();

        ++ans;
    }

    return ans;
}

int main()
{
    int X[] = {9,6,14,1,8};
    int Y[] = {2,10,3,12,11};
    int Z[] = {15,13,5,7,4};
    int N = sizeof(X)/sizeof(X[0]);

    cout<<"Possible no. of such triplets = "<<count_triplets(X,Y,Z,N)<<endl;

    return 0;
}
