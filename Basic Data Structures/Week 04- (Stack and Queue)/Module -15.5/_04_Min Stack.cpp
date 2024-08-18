//https://www.naukri.com/code360/problems/min-stack_3843991?leftPanelTabValue=PROBLEM
/*
#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		stack<int> mainSt;
		stack<int> minSt;
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			mainSt.push(num);
			if(minSt.empty() || num <= minSt.top()){
				minSt.push(num);
			}
			else{
				minSt.push(minSt.top());
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(mainSt.empty()) return -1;
			int pop_value = mainSt.top();
			mainSt.pop();
			minSt.pop();
			return pop_value;
			
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(mainSt.empty()) return -1;
			return mainSt.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(minSt.empty()) return -1;
			return minSt.top();
		}
};
*/