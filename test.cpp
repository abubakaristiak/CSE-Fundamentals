#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node * Next;

    Node(int val)
    {
        this->val=val;
        this->Next=NULL;
    }
};
void insert_at_tail(Node * &head, int va)
{
    Node * newnode= new Node(va);

    if(head==NULL)
    {
        head=newnode;
        return;
    }

    Nodetmp=head;

    while(tmp->Next!=NULL)
    {
        tmp=tmp->Next;
    }

    tmp->Next=newnode;

}

void print(Node head)
{
    int track=0;
     Node tmp=head;
     while(tmp!=NULL)
     {
        track++;
        tmp=tmp->Next;
     }
     int flag;
     if(track%2==0)
     {
        flag=1;
     }
     else flag=0;
     tmp=head;
     int mid=track/2;
      track=0;
      if(flag==0)
      {
         mid++;
         while(tmp!=NULL)
      {
        track++;
        if(track==mid)
        {
            cout<<tmp->val;
            break;
        }
        else
        {

            tmp=tmp->Next;
        }
      }
      }

      else
      {
        while(tmp!=NULL)
        {
            track++;
            if(track==mid)
            {
                cout<<tmp->val<<" "<<tmp->Next->val;
                break;
            }
            else
            {
                tmp=tmp->Next;
            }
        }
      }
}


int main()
{

    Nodehead=NULL;
     int val;
     while(true)
     {
        cin>>val;
        if(val==-1)
        {
            break;
        }
      insert_at_tail(head,val);

     }
     print(head);
    return 0;
}