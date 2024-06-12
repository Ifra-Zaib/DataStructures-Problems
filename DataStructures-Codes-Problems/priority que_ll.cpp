//#include<iostream>
//#include<string>
//using namespace std;
//struct node
//{
//	int data;
//	node* next;
//	node(int d)
//	{
//		data = d;
//		next = nullptr;
//	}
//};
//class que
//{
//	node* front;
//	node* rear;
//	int count;
//public:
//	que()
//	{
//		front = nullptr;
//		rear = nullptr;
//		count = 1;
//	}
//	void en_que(int ele)
//	{
//		node* temp = new node(ele);
//		
//		if (rear == nullptr)
//		{
//			rear = temp;
//			front = temp;
//		}
//		else
//		{
//			rear->next = temp;
//			rear = temp;
//		}
//	}
//	void de_que()
//	{
//		node* temp = front;
//		front = front->next;
//		if (rear == nullptr)
//		{
//			front = nullptr;
//		}
//		delete temp;
//	}
//	bool is_empty()
//	{
//		return front == nullptr;
//	}
//	void display()
//	{
//		node* temp = front;
//		while (temp != nullptr)
//		{
//			cout << temp->data << " ";
//			temp = temp->next;
//		}
//	}
//	int front_ele()
//	{
//		return front->data;
//	}
//};
//int main()
//{
//	que obj1;
//	obj1.en_que(10);
//	obj1.en_que(50);
//	obj1.en_que(30);
//	obj1.en_que(40);
//	obj1.en_que(70);
//	obj1.en_que(90);
//	cout << "Enqued eleemnts are:";
//	obj1.display();
//	cout << "dequed elemnts are:";
//	obj1.de_que();
//	obj1.display();
//	cout << "Front element is:" << obj1.front_ele() << endl;
//	system("pause");
//}