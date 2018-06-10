#include <iostream>

class Stack {
public:
	Stack(const int size = 5);
	~Stack();
	void push(int);
	int pop();
private:
	int res;
	int * stack;
	int size;

};


int main() {
	Stack * tmp = new Stack;
	tmp->push(1);
	tmp->push(2);
	tmp->push(3);
	tmp->push(4);
	tmp->push(5);
	tmp->push(6);
	tmp->push(7);
	tmp->push(8);

	std::cout << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << std::endl;
}

Stack::Stack(int size) {
	this->size = size;
	res = -1;
	stack = new int[size];
}

void Stack::push(int sum) {
	if (this->res == 30) {
		std::cout << "Stack overflow" << std::endl;
		return;
	}
	else if (this->res == this->size - 1) {
		int * newStack = new int[2 * this->size];
		for (int i = 0; i < this->size; ++i) {
			newStack[i] = this->stack[i];
		}
		delete[] this->stack;
		this->stack = newStack;
		this->size = this->size * 2;
	}
	this->stack[++this->res] = sum;
	std::cout << "push items " << sum << std::endl;
}

int Stack::pop() {
	int sum = this->stack[this->res--];
	return  sum;
}

Stack::~Stack() {
	delete[] this->stack;
	this->stack = NULL;
}
