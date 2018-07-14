#include <iostream>
using namespace std;
int j=-1;
int arr[101];
int isEmpty()
{
if(j==-1)
cout<<"stack is empty"<<endl;
else 
cout<<"stack not empty"<<endl;
}
void Push(int x)
{
j=j+1;
arr[j]=x;
cout<<"\nThe number "<<x<<" has been stacked"<<endl;
}
void Pop()
{ 
 cout<<"The number "<<arr[j]<<" has been popped"<<endl;
 j--;
 
}
void Print()
{
for(int i=0;i<j;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}

int main()
{
if(isEmpty()==0)
cout<<"The stack is empty"<<endl;
else
cout<<"The stack is not empty"<<endl;
for(int i=0;i<5;i++)
{
Push(i+5);
Print();
}
for(int i=0;i<5;i++)
{
Pop();
Print();
}
return 0;
}



