//https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTabValue=PROBLEM

/*
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    // Write your code here.
    stack<int> newSt;
    while(!st.empty()){
        newSt.push(st.top());
        st.pop();
    }
    newSt.push(x);
    while(!newSt.empty()){
        st.push(newSt.top());
        newSt.pop();
    }
    return st;

}

*/