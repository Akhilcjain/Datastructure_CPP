#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
char data;
Node *next;
};
struct Node *head;
void Push(char x)
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
{char arr[15];
cout<<"Enter a string"<<endl;
whil
}


