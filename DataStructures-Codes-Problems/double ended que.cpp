//#include<iostream>
//#include<string>
//using namespace std;
//struct node
//{
//	int data;
//	node* next;
//	node* prev;
//	node(int d)
//	{
//		data = d;
//		next = nullptr;
//		prev = nullptr;
//	}
//};
//class que
//{
//	node* front;
//	node* rear;
//public:
//	que()
//	{
//		front = nullptr;
//		rear = nullptr;
//	}
//	void input_front(int ele)
//	{
//		node* temp = new node(ele);
//		if (is_empty())
//		{
//			front = temp;
//			rear = temp;
//		}
//		temp->next = front;
//		front->prev = temp;
//		front = temp;
//
//	}
//	void input_rear(int ele)
//	{
//		node* temp = new node(ele);
//		if (rear == nullptr)
//		{
//			rear = temp;
//			front = temp;
//		}
//		temp->prev = rear;
//		rear->next = temp;
//		front = temp;
//	}
//	void delete_front()
//	{
//		node* temp = front;
//		front = front->next;
//	if (front != nullptr)
//		{
//			front->prev = nullptr;
//		}
//		else
//		{
//			rear = nullptr;
//		}
//	delete temp;
//	}
//	void delete_rear()
//	{
//		node* temp = rear;
//		rear = rear->prev;
//		if (rear != nullptr)
//		{
//			rear->next = nullptr;
//		}
//		front = nullptr;
//		delete temp;
//	}
//	bool is_empty()
//	{
//		return front == nullptr;
//	}
//	void display()
//	{
//		if (is_empty())
//		{
//			cout << "No output:";
//			return;
//		}
//		node* temp = front;
//		while (temp != nullptr)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	que obj1;
//	obj1.input_front(10);
//	obj1.display();
//	obj1.input_front(20);
//	obj1.input_front(30);
//	obj1.input_front(50);
//	obj1.input_front(70);
//	cout << "Input at front:" << endl;
//	
//	obj1.delete_front();
//	cout << "Deletion at front:" << endl;
//	
//	obj1.input_rear(10);
//	obj1.input_rear(20);
//	obj1.input_rear(30);
//	obj1.input_rear(50);
//	obj1.input_rear(70);
//	cout << "Input at rera:" << endl;
//	obj1.display();
//	obj1.delete_rear();
//	cout << "Deletion at rear:" << endl;
//	
//
//	system("pause");
//}