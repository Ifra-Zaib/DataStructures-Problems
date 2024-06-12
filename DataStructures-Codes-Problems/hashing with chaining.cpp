////#include<iostream>
////#include<string>
////using namespace std;
////struct node
////{
////	node* next;
////	int data;
////	node(int key)
////	{
////		next = nullptr;
////		data = key;
////	}
////};
////class bucket
////{
////public:
////	node* head;
////	bucket()
////	{
////		head = nullptr;
////	}
////	void insert(int key)
////	{
////		node* temp = new node(key);
////		temp->next = head;
////		head = temp;
////	}
////	void delete_ele(int key)
////	{
////		node* current = head;
////		node* prev = head;
////		while (current && current->data != key)
////		{
////			prev = current;
////			current=current->next;
////		}
////		if (current)
////		{
////			if (prev)
////			{
////				prev->next = current->next;
////			}
////			head = current->next;
////			delete current;
////		}
////	}
////	bool search(int key)
////	{
////		node* temp = head;
////		while (temp)
////		{
////			if (temp->data == key)
////			{
////				return true;
////			}
////			temp = temp->next;
////		}
////		return false;
////	}
////	void display_table()
////	{
////		node* current = head;
////		while (current)
////		{
////			cout << current->data << " ";
////			current = current->next;
////		}
////		cout << endl;
////	}
////};
////class hash_table
////{
////public:
////	int size;
////	bucket* table;
////	hash_table(int s)
////	{
////		size = s;
////		table = new bucket[size];
////	}
////	int hash_function(int key)
////	{
////		return key % size;
////	}
////	void insert_ele(int key)
////	{
////		int index = hash_function(key);
////		table[index].insert(key);
////	}
////	void delete_key(int key)
////	{
////		int index = hash_function(key);
////		table[index].delete_ele(key);
////	}
////	bool serach_ele(int key)
////	{
////		int index = hash_function(key);
////		return table[index].search(key);
////	}
////	void display()
////	{
////		for (int i = 0;i < size;i++)
////		{
////			cout << i << ":";
////			table[i].display_table();
////		}
////	}
////};
////int main()
////{
////	hash_table obj1(10);
////	obj1.insert_ele(10);
////	obj1.insert_ele(12);
////
////	obj1.insert_ele(13);
////
////	obj1.insert_ele(14);
////
////	obj1.insert_ele(24);
////
////	obj1.insert_ele(23);
////
////	obj1.insert_ele(66);
////	obj1.display();
////	obj1.delete_key(24);
////	obj1.display();
////	cout << obj1.serach_ele(14) << endl;
////	system("pause");
////}
//#include<iostream>
//using namespace std;
//struct node
//{
//	node* next;
//	int data;
//	node(int key)
//	{
//		next = nullptr;
//		data = key;
//		
//	}
//};
//class bucket
//{
//public:
//	node* head;
//	
//	bucket()
//	{
//		
//		head = nullptr;
//	}
//	void insert(int key)
//	{
//		node* current = new node(key);
//		current->next = head;
//		head = current;
//	}
//	void delete_ele(int key)
//	{
//		node* current = head;
//		node* prev = nullptr;
//		while (current && current->data != key)
//		{
//			prev = current;
//			current = current->next;
//		}
//		if (current)
//		{
//			if (prev)
//			{
//				prev->next = head->next;
//
//			}
//			head = current->next;
//			delete current;
//		}
//	}
//	void display()
//	{
//		node* current = head;
//		while (current!=nullptr)
//		{
//			cout << current->data << "";
//			current = current->next;
//		}
//		cout << endl;
//	}
//};
//class hash_table
//{
//public:
//	bucket* table;
//	int size;
//	hash_table(int s)
//	{
//		size = s;
//		table =new bucket[size];
//	}
//	int hash_fun(int key)
//	{
//		return key % size;
//	}
//	void insert_table(int key)
//	{
//		int index = hash_fun(key);
//		table[index].insert(key);
//	}
//	void delete_table(int key)
//	{
//		int index = hash_fun(key);
//		table[index].delete_ele(key);
//	}
//	void display_table()
//	{
//		for (int i = 0;i < size;i++)
//		{
//			cout << i << ":";
//			table[i].display();
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	hash_table obj1(10);
//	obj1.insert_table(10);
//	obj1.insert_table(11);
//	obj1.insert_table(15);
//	obj1.insert_table(18);
//	obj1.insert_table(10);
//	obj1.insert_table(19);
//	obj1.insert_table(23);
//	obj1.insert_table(24);
//	obj1.display_table();
//	obj1.delete_table(10);
//	obj1.display_table();
//	system("pause");
//}
