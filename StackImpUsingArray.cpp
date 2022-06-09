#include <bits/stdc++.h>
using namespace std;

#define n 10000

class stackarray 
{
	int high;

public:
	int array[n]; 
	stackarray() 
	{ 
	  high = -1; 
	}
	bool Push(int i);
	int Pop();
	int Peek();
	bool empty();
};

bool stackarray::Push(int i)
{
	if (high >= (n - 1)) 
	{
		cout << "Stack is Overflow";
		return false;
	}
	else 
	{
		array[++high] = i;
		cout << i << " Push in the Stack \n";
		return true;
	}
}

int stackarray::Pop()
{
	if (high < 0)
	{
		cout << "Stack is Underflow";
		return 0;
	}
	else 
	{
		int i = array[high--];
		return i;
	}
}
int stackarray::Peek()
{
	if (high < 0) 
	{
		cout << "Stack is Empty";
		return 0;
	}
	else 
	{
		int i = array[high];
		return i;
	}
}

bool stackarray::empty()
{
	return (high < 0);
}
int main()
{
	class stackarray Sa;
	Sa.Push(4);
	Sa.Push(6);
	Sa.Push(10);
	Sa.Push(20);
	Sa.Push(13);
	
	cout << Sa.Pop() << " is pop from the stack\n";
	cout << Sa.Pop() << " is pop from the stack\n";
	cout << "Highest element is : " << Sa.Peek() << endl;
	
	cout<<"The elements are present in stack is : ";
	while(!Sa.empty())
	{
		cout<<Sa.Peek()<<" ";
		Sa.Pop();
	}

	return 0;
}

