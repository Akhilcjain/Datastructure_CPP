#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
int data;
Node *next;
};
struct Node *head;
void Push(int x)
{
 Node* temp=new Node();
 temp->data=x;
 temp->next=head;
 head=temp;
}
void Pop()
{Node* temp=head;
cout<<"\n\n"<<temp->data<<" has been popped";
head=temp->next;
}
/*int isEmpty()
{
if(head==NULL)
return 1;
else 
return 0;
}*/
void Print()
{Node *conductor=head;
cout<<endl;
while(conductor!=NULL)
{ cout<<conductor->data;
  conductor=conductor->next;
  }
  cout<<endl;
}
//Node *head;
//int j=0;
int main()
{char a;
int b;
while(1)
{
cout<<"Enter an option: "<<endl;
cout<<"1. Push"<<endl;
cout<<"2. Pop"<<endl;
cout<<"3. Exit"<<endl;
cin>>a;
switch(a)
{
case '1': cout<<"Enter the number"<<endl;
          cin>>b;
          Push(b);
          Print();
          break;
case '2': Pop();
          Print();
          break;
case '3': exit(0);
          break;
}
}
return 0;
}          

