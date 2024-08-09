#include <iostream>
using namespace std;


struct Point {
public:
	int x = 0;
	int y = 0;
	int z = 0;

	Point() {
		x = 0;
		y = 0;
		z = 0;
	};
	
	Point(int x1, int y1, int z1) {
		x = x1;
		y = y1;
		z = z1;
	};

	Point& operator = (int a) {
		this->x = a;
		this->y = a;
		this->z = a;
		return *this;
	}

	friend ostream& operator << (ostream& out, const Point& p) {
		return out << "{" << p.x << "," << p.y << "," << p.z << "}" << " ";
	}
};

template<typename T>
class List
{
public:
	List();
	List(const List& other);
	~List();
	void pop_front();
	void push_back(T data);
	void clear();
	int SSize() { return Size; }
	T& operator[](const int index);
	void push_front(T data);
	void find_and_erase(const T& data);
	void At(T data, int index);
	void Dell(int index);
	void revers();      //const List& other);
	List& operator=(const List& other) {
		
		if (!other.head) {
			Size = 0;
			head = nullptr;
			return *this;
		}

		head = new Node<T>(*other.head);
		Node<T>* cur = head;
		Size = 1;

		for (Node<T>* t = other.head->pNext; t != nullptr; t = t->pNext) {
			cur->pNext = new Node<T>(*t);
			cur = cur->pNext;
			++Size;
		}
		cur->pNext = nullptr;
		return *this;
	
	};
	

private:


	template<typename T>
	class Node
	{
	public:
		Node* pNext;
		T data;

		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
		
	};
	int Size;
	Node<T>* head;
};


template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}


template<typename T>
List<T>::List(const List& other) {
	if (!other.head) {
		Size = 0;
		head = nullptr;
		return;
	}

	head = new Node<T>(*other.head);
	Node<T>* cur = head;
	Size = 1;

	for (Node<T>* t = other.head->pNext; t != nullptr; t = t->pNext) {
		cur->pNext = new Node<T>(*t);
		cur = cur->pNext;
		++Size;
	}
	cur->pNext = nullptr;
}


template<typename T>
List<T>::~List()
{
	clear();
}


template<typename T>
void List<T>::pop_front()
{
	Node<T>* temp = head;

	head = head->pNext;

	delete temp;

	Size--;

}


template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);

	}

	Size++;
}


template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}


template<typename T>
T& List<T>::operator[](const int index)
{
	int counter = 0;

	Node<T>* current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}


template<typename T>
void List<T>::push_front(T data)
{
	head = new Node<T>(data, head);
	Size++;
}


template<typename T>
void List<T>::find_and_erase(const T& data)
{
	
	int counter = 0;
	
	Node<T>* current = this->head;
	
	while (current != nullptr)
	{
		
		if (current->data == data )
		{
			
			Dell(counter);
			current = nullptr;
		}
		else
		{
			counter++;
			current = current->pNext;
		}
	}
	

}


template<typename T>
void List<T>::At(T data, int index)
{
	
	try 
	{
		if (index == 0)
		{
			push_front(data);
		}
		else if(Size < index - 1)
		{
			throw 11;
		}
		else{
			
			Node<T>* previous = this->head;
			
			for (int i = 0; i < index - 1; i++)
			{
				previous = previous->pNext;
			}

			Node<T>* newNode = new Node<T>(data, previous->pNext);

			previous->pNext = newNode;

			Size++;
		}
	}
	catch (int jj) 
	{
		cout << jj <<" Ошибка выполнения At "<< endl;
	}




}

template<typename T>
void List<T>::Dell(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}


		Node<T>* toDelete = previous->pNext;

		previous->pNext = toDelete->pNext;

		delete toDelete;

		Size--;
	}

}

template<typename T>
void List<T>::revers()
{
	if (Size == 0)
	{
		return;
	}
	else
	{
		Node<T> *prhead = nullptr;
		while (head != nullptr)
		{
			Node<T> *p = head->pNext;
			head->pNext = prhead;
			prhead = head;
			head = p;	

		}
		this->head = prhead;
	}
	
	
}




int main()
{
	setlocale(LC_ALL, "ru");

	List<int> kk;

	List<int> gh;
	gh.push_front(5);
	gh.push_back(7);
	gh.push_back(101);
	gh.push_back(33);
	gh.push_back(22);
	gh.revers();
	gh.find_and_erase(101);
	gh.At(102, 2);
	
	for (int i = 0; i < gh.SSize(); i++)
	{
		cout << gh[i] << endl;
	}
	
	

	List<Point> v;
	Point p1 = { 12,11,11 };
	Point p2 = { 12,11,11 };
	Point p3 = { 6,6,6 };
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.revers();
	p1 = p2;
	for (int i = 0; i < v.SSize(); i++)
	{
		cout << v[i] << endl;
	}
	



	return 0;
}