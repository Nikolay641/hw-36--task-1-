#pragma once
#include <iostream>
#include <vector>
using std::cout;
using std::vector;
using std::endl;

namespace MyStack {
	template<typename T>
	class Stack {
		vector<T> arr;
	public:
		bool isEmpty()const { return arr.empty(); };
		
		T top()const {
			if (isEmpty()) throw "Stack is empty!";
			return arr.back(); 
		};

		void push(T value) { arr.push_back(value); };
		
		void pop() { arr.pop_back(); };
		
		void show() {
			if (isEmpty()) {
				cout << "Array is empty" << endl;
			}
			for (auto item : arr) {
				cout << item << " ";
			}
			cout << endl;
		};


	};
}