#ifndef STACK_H 
#define STACK_H

template<typename T>
class Stack {
private:
	T *elements;
	int size;
	int capacity;
	void ensureCapacity();
public:
	Stack();
	Stack(const Stack &stack);
	~Stack();
	bool empty() const;
	T peek() const;
	void push(T value);
	T pop();
	int getSize() const;
};
#endif 

template<typename T>
Stack<T>::Stack()
{
	this->size = 0;
	this->capacity = 10;
	elements = new T[capacity];
}

template<typename T>
Stack<T>::Stack(const Stack & stack)
{
	size = stack.size();
	capacity = stack.capacity();
	elements = new T[capacity];
	for (int i = 0; i < size; i++)
		elements[i] = stack.elements[i];
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] elements;
}

template<typename T>
bool Stack<T>::empty() const
{
	return (size == 0);
}

template<typename T>
T Stack<T>::peek() const
{
	return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
	ensureCapacity();
	elements[size++] = value;
}

template<typename T>
void Stack<T>::ensureCapacity()
{
	if (size >= capacity) {
		T * old = elements;
		capacity = 2 * size;
		elements = new T[size * 2];

		for (int i = 0; i < size; i++)
			elements[i] = old[i];

		delete[] old;
	}
}

template<typename T>
T Stack<T>::pop()
{
	return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
	return size;
}

#include <iostream>
using namespace std;

char Arithmetic(char a, char n, char b) {
	int num1 = a - '0';
	int num2 = b - '0';

	switch (n) {
	case '+': cout << num1 + num2 << endl; return ((num1 + num2));
	case '-': cout << num1 - num2 << endl; return ((num1 - num2));
	case '*': cout << num1 * num2 << endl; return ((num1 * num2));
	case '/': cout << num1 / num2 << endl; return ((num1 / num2));
	default: break;
	}
}

void POPstack(Stack<char> &stack) {
	char array[3], num3;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			array[j] = stack.peek();
			stack.pop();
		}
		num3 = Arithmetic(array[2], array[1], array[0]) + '0';
		stack.push(num3);
	}
}

int main() {
	Stack<char> stack;
	char number;

	for (int i = 0; i < 9; i++) {
		cin >> number;
		stack.push(number);
	}
	POPstack(stack);

	system("pause");
	return 0;
}

/*
�Q�ε{��12.7 ImproveStack.h�M�{��12.5 TestGenericStack.cpp���ϥΤ覡�C


��J9�Ӧr��push��Stack�]�H�r���B�z�^�A�M��pop�T�ӫ�A�H�������Ÿ��B��A�N���Gpush�^Stack�C


���Ʀ��ʧ@����⦡�����A�̫�Ʀr�����G�C




�d�ҿ�J�G
7-9/9-3*2

�d�ҿ�X�G
6
3
3
4
*/