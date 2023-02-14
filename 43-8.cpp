#include<bits/stdc++.h>
using namespace std;

void Priority_queue(int arr[],int N)
{
   priority_queue<int> temp;
   int num1,num2,D;

   for(int i=0; i<N; i++)
   {
       temp.push(arr[i]);
   }

   while (temp.size() > 1)
   {
        num1 = temp.top();
        temp.pop();

        num2 = temp.top();
        temp.pop();

        if (num1!=num2)
        {
            D=num1-num2;
            temp.push(D);
        }
   }
   if (temp.size() == 1)
   {
       cout<<temp.top()<<endl;
   }
   else
    cout<<"-1"<<endl;

}

int main ()
{
   int arr[4]= {3,5,2,7};

   cout<<"Output = ";
    Priority_queue(arr,4);

   return 0;

}
