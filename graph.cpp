#include<iostream>
using namespace std;
struct Node{
int data;
Node *next;
};
struct Node *p[6];
void Insert(int i,int x)
{
 Node* temp=new Node();
 temp->data=x;
 temp->next=p[i];
 p[i]=temp;
}
void Print(int i)
{
Node *conductor=p[i];
while(conductor!=NULL)
{ cout<<conductor->data;
  conductor=conductor->next;
  
  }
  cout<<endl;
}


int main()
{
for(int i=0;i<7;i++)
p[i]=NULL;
Insert(0,1);
Insert(0,2);
Insert(0,3);
Insert(1,0);
Insert(1,6);
Insert(2,0);
Insert(2,7);
Insert(3,1);
Insert(3,7);
Insert(4,1);
Insert(4,7);
Insert(5,2);
Insert(5,7);
Insert(6,3);
Insert(6,4);
Insert(6,5);
Insert(6,6);
for(int i=0;i<7;i++)
{
Print(i);
}
cout<<"Done";
return 0;
}
