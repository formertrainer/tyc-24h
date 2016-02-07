
// object-oriented approach to linked lists.

#include <iostream>

enum { kIsSmaller, kIsLarger, kIsSame };

class Data
{
public:
	Data(int newVal):value(newVal) {}
	~Data() {}
	int compare(const Data&);
	void show() const { std::cout << value << "\n"; }
private:
	int value;
};

// compare is used to decide where in the list the object belongs.
// NB: this is, in effect, a sorted list.
int Data::compare(const Data& otherData)
{
	if (value < otherData.value)
		return kIsSmaller;
	if (value > otherData.value)
		return kIsLarger;
	else
		return kIsSame;
}

// forward declarations
class Node;
class HeadNode;
class TailNode;
class InternalNode;

// ADT
class Node
{
public:
	Node() {}
	virtual ~Node() {}
	virtual Node* insert(Data* data) = 0;
	virtual void show() = 0;
	virtual int count() = 0;
private:
};

class InternalNode : public Node
{
public:
	InternalNode(Data* data, Node* next);
	virtual ~InternalNode() { delete next; delete data; }
	virtual Node* insert(Data* data);
	virtual void show() { data->show(); next->show(); } 
	virtual int count() { return next->count() + 1; }
private:
	Data* data; // encapsulate
	Node* next;
};

// all the constructor does is to initialize
InternalNode::InternalNode(Data* newData, Node* newNext):
data(newData), next(newNext)
{}

// When a new object is added to the list, it is passed to the node
// which decides where it goes.
Node* InternalNode::insert(Data* otherData)
{
	int result = data->compare(*otherData);
	switch(result)
	{
	case kIsSame: // if same size, treat it as larger
	case kIsLarger:
		{
			InternalNode* dataNode = new InternalNode(otherData, this);
			return dataNode;
		}
	case kIsSmaller:
		next = next->insert(otherData); // the return value (address) of next->insert
		                                // which is the address of the new node becomes
		                                // the new next.
		return this;
	}
	return this;
}

// tail node
class TailNode : public Node
{
public:
	TailNode() {}
	virtual ~TailNode() {}
	virtual Node* insert(Data* data);
	virtual void show() {}
	virtual int count() { return 0; }
private:
};

// if data comes to me, it must be inserted before.
Node* TailNode::insert(Data* data)
{
	InternalNode* dataNode = new InternalNode(data, this);
	return dataNode;
}

class HeadNode : public Node
{
public:
	HeadNode();
	virtual ~HeadNode() { delete next; }
	virtual Node* insert(Data* data);
	virtual void show() { next->show(); }
	virtual int count() { return next->count(); }
private:
	Node* next;
};

HeadNode::HeadNode()
{
	next = new TailNode;
}

// Nothing comes before the head so just pass the data to the next node
Node* HeadNode::insert(Data* data)
{
	next = next->insert(data); // the return value of the insert method of the next node
	                           // becomes the address of the next node...
	return this;
}

// who gets all the credit and does none of the work, I wonder
class LinkedList
{
public:
	LinkedList();
	~LinkedList() { delete head; }
	void insert(Data* data);
	void showAll() { head->show(); } // delegate!
	void count();
private:
	HeadNode* head;
};

LinkedList::LinkedList()
{
	head = new HeadNode;
}

// delegate!
void LinkedList::insert(Data* pData)
{
	head->insert(pData);
}

// delegate!
void LinkedList::count()
{
	int nb;
	nb = head->count();
	std::cout << "The list contains " << nb << " useful nodes.\n";
}

// test
int main()
{
	Data* pData;
	LinkedList ll;
	int val;
	
	while (true)
	{
		std::cout << "What value (0 to stop)? ";
		std::cin >> val;
		if (!val)
			break;
		pData = new Data(val);
		ll.insert(pData);
	}
	//walk the list
	ll.showAll();
	ll.count();
	return 0;
}

