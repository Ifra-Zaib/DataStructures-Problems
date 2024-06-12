//#include<iostream>
//using namespace std;
//class double_hash
//{
//public:
//	bool* occupied;
//int* table;
//int cap;
//int size;
//double_hash(int c)
//{
//
//	cap = c;
//	size = 0;
//	table = new int[cap];
//	occupied = new bool[cap];
//	for (int i = 0;i < cap;i++)
//	{
//		table[i] = -1;
//		occupied[i] = false;
//	}
//}
//	int hash_1(int key)
//	{
//		return key % cap;
//	}
//	int hash_2(int key)
//	{
//		return 7 - (key % cap);
//	}
//	void insert(int key)
//	{
//		int i = 0;
//		if (size * 0.1 / cap > 0.75)
//		{
//			cout << "Load factor is greater:" << endl;
//		}
//		int index = hash_1(key);
//		int step = hash_2(key);
//		while (occupied[index])
//		{
//			index = (index + step) % cap;
//		}
//		table[index] = key;
//		occupied[index] = true;
//		size++;
//	}
//	void delete_key(int key)
//	{
//		if (size * 0.1 / cap > 0.75)
//		{
//			cout << "Error:" << endl;
//		}
//		int index = hash_1(key);
//		int step = hash_2(key);
//		while (occupied[index] && table[index] != key)
//		{
//			index = (index + step) % cap;
//		}
//		if (table[index] == key)
//		{
//			table[index] = -1;
//			occupied[index] = false;
//		}
//		size--;
//	}
//	void display()
//	{
//		for (int i = 0;i < cap;i++)
//		{
//			cout << i << ":";
//			if (table[i] != -1)
//			{
//				cout << table[i] << endl;
//			}
//			else
//			{
//				cout << "-" << endl;
//			}
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	double_hash obj1(10);
//	obj1.insert(12);
//	obj1.insert(13);
//	obj1.insert(14);
//	obj1.insert(16);
//	obj1.insert(19);
//	obj1.insert(15);
//	obj1.display();
//	obj1.delete_key(15);
//	obj1.display();
//	system("pause");
//}