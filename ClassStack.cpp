#include <iostream>

const int size = 5;

class Stack {
public:
	void push(Stack *, int);
	int pop(Stack *);
private:
	int res = -1;
	int stack[size];

};


int main() {
	Stack * tmp = new Stack;
	tmp->push(tmp, 1);
	tmp->push(tmp, 2);
	tmp->push(tmp, 3);
	tmp->push(tmp, 4);
	tmp->push(tmp, 5);
	std::cout << std::endl;
	std::cout << "pop items " << tmp->pop(tmp) << std::endl;
	std::cout << "pop items " << tmp->pop(tmp) << std::endl;
	std::cout << "pop items " << tmp->pop(tmp) << std::endl;
	std::cout << "pop items " << tmp->pop(tmp) << std::endl;
	std::cout << "pop items " << tmp->pop(tmp) << std::endl;
	std::cout << std::endl;
}

void Stack::push(Stack * tmp, int sum) {
	if (tmp->res >= size)
		return;
	tmp->stack[++tmp->res] = sum;
	std::cout << "push items " << sum << std::endl;
}

int Stack::pop(Stack * tmp) {
	int sum = tmp->stack[tmp->res--];
	return  sum;
}