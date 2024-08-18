//https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=PROBLEM
/*
#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int> st;
    for(int i=0; i<k; i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop(); 
    }
    int size = q.size();
    for(int i=0; i<size-k; i++){
        q.push(q.front());
        q.pop();
    }
    return q;
}

*/