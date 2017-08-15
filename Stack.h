#ifndef STACK
#define STACK

const int STACK_CAPACITY = 128;
typedef int StackElement;

class Stack{
	public:
		Stack();
		bool empty() const;
		void push(const StackElement & value);
		void display(ostream & out) const;
		StackElement top() const;
		void pop();
	private:
		StackElement myArray[STACK_CAPACITY];
		int myTop;
};
#endif
