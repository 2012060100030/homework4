#include<iostream>
using namespace std;

class Stack{
public:
	void push(int item);
	int pop();
	bool isFull();
	bool isEmpty();
private:
	int data[100];
	int sp;
};

class Array{
public:
	Array(int capicality);
	void set(int index,int value);
	int get(int index,bool error){
		if(index<0)
			error=true;
		else
			error=false;
		return data[index];
	}
private:
	int * data;
	int max;
};


Array::Array(int cap){
	data=new int[cap];
}
void Array::set(int index,int value){

	if(index<0||index>=max)
		cout<<"ArrayÔ½½ç";
	else data[index]=value;
}

void Stack::push(int item){
	data[--sp]=item;
}
int Stack::pop(){
	return data[sp++];
}
bool Stack::isFull(){
	return(0==sp);
}
bool Stack::isEmpty(){
	return(sp=100);
}