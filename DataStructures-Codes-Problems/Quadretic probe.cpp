//#include<iostream>
//#include<string>
//using namespace std;
//class quadretic
//{
//public:
//	int* table;
//	int size;
//	int cap;
//	quadretic(int c)
//	{
//		cap = c;
//		size = 0;
//		table = new int[cap];
//		for (int i = 0;i < cap;i++)
//		{
//			table[i] = -1;
//		}
//	}
//	int hash_fun(int key)
//	{
//		return key %cap;
//	}
//	void insert(int key)
//	{
//		int index = hash_fun(key);
//		int i = 0;
//		while (table[index] != -1)
//		{
//			index = (index + i * i) % cap;
//			i++;
//		}
//		table[index] = key;
//		size++;
//	}
//	void delete_ele(int key)
//	{
//		int i = 0;
//		int index = hash_fun(key);
//		while (table[index] != -1)
//		{
//			index = (index + i*i) % cap;
//			i++;
//		}
//		table[index] = key;
//		size--;
//	}
//	void display()
//	{
//		for (int i = 0;i < cap;i++)
//		{
//			cout << i << ":";
//			if (table[i]!=- 1)
//			{
//				cout << table[i] << endl;
//			}
//		}
//		cout << endl;
//	}
//};
//int main()
//{
//	quadretic obj1(20);
//	obj1.insert(23);
//	obj1.insert(24);
//	obj1.insert(28);
//	obj1.insert(29);
//	obj1.insert(20);
//	obj1.insert(22);
//	obj1.insert(20);
//	obj1.insert(42);
//	obj1.insert(90);
//	obj1.insert(58);
//	obj1.insert(98);
//	obj1.insert(21);
//	obj1.display();
//	obj1.delete_ele(20);
//	obj1.display();
//	system("pause");
//}