//https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465?leftPanelTabValue=PROBLEM
/*
#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<char>st;
	for(char c: s){
		st.push(c);
	}
	string str = "";
	while(!st.empty()){
		str += st.top();
		st.pop();
	}
	return str;
}

*/