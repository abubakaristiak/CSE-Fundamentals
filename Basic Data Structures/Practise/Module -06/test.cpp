#include <bits/stdc++.h>
using namespace std;

class Node // একটা node class create করবো।
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val) // reference সহ পয়েন্টার পাস করছি যাতে করে main এর head পয়েন্টার change হয়ে যায়
{

    Node *newNode = new Node(val); // নতুন একটি Node ক্রিয়েট করলাম
    
    // Important : Exception Handling 
    if (head == NULL) // যদি লিঙ্কড লিস্ট খালি থাকে তবে এই নোড কে head বানিয়ে দিলাম
    {
        head = newNode;
        return;
    }

    Node *temp = head; // লুপের জন্য temp পয়েন্টার নিলাম

    while (temp->next != NULL) // যতক্ষন tail এ আসছি না , ততক্ষন লুপ চলবে
    {
        temp = temp->next; // প্রতি লুপে temp কে ডানে অর্থাৎ পরবর্তী Node এ shift করছি
    }

    temp->next = newNode; // tail এর next পয়েন্টার এ নতুন Node এর এড্রেস রেখে দিচ্ছি এবং এর মাধ্যমে Node টি লিঙ্কড লিস্টে এড হয়ে যাবে। 
}
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if(v==-1) break;
        insert_at_tail(head, v);
    }
    
    print(head);

    
    

}
