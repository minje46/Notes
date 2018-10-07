using namespace std;

struct Node
{
	int key;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *top = NULL;

void Print()
{
	struct Node *p = top;

	while (p)
	{
		cout << p->key << endl;
		p = p->next;
	}
}

void Top()
{
	cout << "Present top : " << top->key << endl;
}

void Pop()
{
	top = top->next;
}

void Push(int value)
{
	struct Node *new_node = new struct Node;

	if (!top)
	{
		new_node->key = value;
		new_node->next = head;
		top = new_node;
	}

	else
	{
		new_node->key = value;
		new_node->next = top;
		top = new_node;
	}
}
