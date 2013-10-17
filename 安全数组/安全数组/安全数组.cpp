#include<iostream>
using namespace std;

class Stack{
public:
	void push(int item);
	int pop();
	bool isEmpty();
	Stack(){
		head=new Node();
	}
	~Stack(){
	delete head;
	}
private:
	Node* head;
};

class Node{
public:
	Node(int d):data(d){};
	Node* next;
	Node(){};
private:
	int data;
};
void Stack::push(int item){
	Node* node=new Node(item);
	node->next=head->next;
	head->next=node;
}
int Stack::pop(){
	Node* p=head->next;
	head->next=p->next;
	delete p;
}