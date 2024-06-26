// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int val=0;
//     Node * Next;
//     Node(int val)
//     {
//         this->val=val;
//         this->Next=NULL;
//     }
// };
// void insert_at_tail(Node * &head, int val)
// {
//     Node * newnode= new Node(val);
//     if(head==NULL)
//     {
//         head=newnode;
//         return;
//     }
//     Node tmp=head;
//     while(tmp->Next!=NULL)
//     {
//         tmp=tmp->Next;
//     }
//     tmp->Next=newnode;

// }

// void print(Node head)
// {
//     Node tmp=head;
//     while(tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->Next;
//     }
//     cout<<endl;
// }

// void insert_at_head(Node &head,int val)
// {
//     Node * newnode= new Node(val);
//     newnode->Next=head;
//     head=newnode;
//     print(head);
// }



// void insert_at_position(Node * head,int val,int pos)
// {

//     Node * newnode= new Node(val);

//     Node * tmp=head;
//     for(int i=1;i<=pos-1;i++)
//     {

//         tmp=tmp->Next;
//          if(tmp==NULL)
//         {
//             cout<<"Invalid"<<endl;
//             return;
//         }
//     }
//     newnode->Next=tmp->Next;
//     tmp->Next=newnode;
//     print(head);
// }


// int main()
// {
//     Node * head=NULL;
//     while(true)
//     {
//         int val;
//         cin>>val;
//         if(val==-1)
//         {
//             break;
//         }
//         insert_at_tail(head,val);
//     }
//     int q;
//     cin>>q;
//     while(q--)
//     {
//          int pos,val;
//     cin>>pos>>val;
//     if(pos==0)
//     {
//         insert_at_head(head,val);

//     }
//     else insert_at_position(head,val,pos);
//     }

//     return 0;
// }