//#include<iostream>
//#include<string>
//using namespace std;
//class que
//{
//public:
//	int front;
//	int rear;
//	int count;
//	int size;
//	int* queue;
//	que(int s)
//	{
//		size = s;
//		count = 0;
//		front = -1;
//		rear = -1;
//		queue = new int[size];
//	}
//	bool is_full()
//	{
//		if (count == size)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool is_empty()
//	{
//		if (count == 0)
//		{
//			return true;
//		}
//		return false;
//	}
//	void en_que(int ele)
//	{
//		if (is_full())
//		{
//			cout << "Queue is full to insert:" << endl;
//		}
//		rear = (rear + 1) % size;
//		queue[rear] = ele;
//		count++;
//	}
//	void de_que()
//	{
//		if (is_empty())
//		{
//			cout << "Sorry we can not enque elements:" << endl;
//		}
//		if (front == rear)
//		{
//			front = -1;
//			rear = -1;
//		}
//		front = (front + 1) % size;
//		count--;
//	}
//	int front_ele()
//	{
//		if (is_empty())
//		{
//			cout << "Soryy no front elements:" << endl;
//		}
//		return queue[front+1];
//	}
//	void display()
//	{
//		if (is_empty())
//		{
//			cout << "Queue is empty:" << endl;
//		}
//		int i = front;
//		while (true)
//		{
//			
//			if (i == rear)
//			{
//				break;
//			}
//			i = (i + 1) % size;
//			cout << queue[i] << " ";
//		}
//		cout << endl;
//	}
//		};
//	
//int main()
//{
//	que obj1(10);
//	obj1.en_que(10);
//	obj1.en_que(30);
//	obj1.en_que(40);
//	obj1.en_que(50);
//	obj1.en_que(70);
//	cout << "Queue is After enqueu elemtns:";
//	
//	obj1.display();
//	cout << "Queue front elements is:";
//	cout << obj1.front_ele() << endl;
//	cout << "Queue is after deque elemnts:";
//	obj1.de_que();
//	obj1.display();
//
//	system("pause");
//}