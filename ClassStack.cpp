#include <iostream>

const int size = 5;

class Stack {
public:
	void push(int);
	int pop();
private:
	int res = -1;
	int stack[size];

};


int main() {
	Stack * tmp = new Stack;
	tmp->push(1);
	tmp->push(2);
	tmp->push(3);
	tmp->push(4);
	tmp->push(5);
	std::cout << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << "pop items " << tmp->pop() << std::endl;
	std::cout << std::endl;
}

void Stack::push(int sum) {
	if (this->res >= size)
		return;
	this->stack[++this->res] = sum;
	std::cout << "push items " << sum << std::endl;
}

int Stack::pop() {
	int sum = this->stack[this->res--];
	return  sum;
}
