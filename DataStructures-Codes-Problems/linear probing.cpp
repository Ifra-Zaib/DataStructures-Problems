//#include<iostream>
//#include<string>
//using namespace std;
//class linear_probe
//{
//public:
//	int size;
//	int cap;
//	int* table;
//	linear_probe(int c)
//	{
//		cap = c;
//		size = 0;
//		table = new int[cap];
//		for (int i = 0;i < cap;i++)
//		{
//			table[i] = -1;
//		}
//	}
//	void rehash() {
//		int oldCapacity = cap;
//		int* oldTable = table;
//		cap *= 2; // Double the capacity
//		table = new int[cap];
//		for (int i = 0; i < cap; ++i)
//			table[i] = -1;
//		size = 0;
//
//		for (int i = 0; i < oldCapacity; ++i) {
//			if (oldTable[i] != -1)
//				insert(oldTable[i]); // Re-insert all elements
//		}
//
//		delete[] oldTable;
//	}
//
//	int hash_fun(int key)
//	{
//		return key % cap;
//	}
//	void insert(int key)
//	{
//		if (size * 0.1 / cap > 0.75)
//		{
//			cout << "Rehasing:";;
//			rehash();
//		}
//		int i = 1;
//		int index = hash_fun(key);
//		while (table[index] != -1)
//		{
//			index = (index + i) % cap;
//			i++;
//		}
//		table[index] = key;
//		size++;
//	}
//	void delete_ele(int key)
//	{
//		int i = 1;
//		int index = hash_fun(key);
//		while (table[index] != key && table[index] != -1)
//		{
//			index = (index + i) % cap;
//			i++;
//		}
//		if (table[index] == key)
//		{
//			table[index] = -1;
//		}
//		size--;
//	}
//	void display()
//	{
//		for (int i = 0;i < cap;i++)
//		{
//			if (table[i] != -1)
//			{
//				cout << table[i] << endl;
//			}
//				
//			
//		
//		}
//	}
//};
//int main()
//{
//	cout << "ifra";
//	linear_probe obj1(15);
//	obj1.insert(10);
//	obj1.insert(11);
//	obj1.insert(14);
//	obj1.insert(16);
//	obj1.insert(18);
//	obj1.insert(111);
//	obj1.insert(232);
//	obj1.insert(243);
//	obj1.insert(90);
//	obj1.insert(78);
//	obj1.display();;
//	
//	obj1.display();
//	system("pause");
//}