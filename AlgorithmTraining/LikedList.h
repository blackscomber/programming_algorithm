#include "stdio.h"


struct Node
{
	Node* pNextNode = nullptr;
	int value;
};

class LinkedList
{
public :
	LinkedList(Node* pHead = nullptr) {
		m_pHead = m_pTail = pHead;
	}

	~LinkedList()
	{
		Release();
	}

	Node* GetHead() 
	{
		return m_pHead;
	}

	void Release()
	{
		while (m_pHead)
		{
			Node* pTemp = nullptr;
			if (m_pHead->pNextNode != nullptr)
			{
				pTemp = m_pHead->pNextNode;
			}

			delete m_pHead;
			m_pHead = nullptr;

			m_pHead = pTemp;
		}
	}

	void Insert(int nVal)
	{
		
	}

	Node* Search(int nVal)
	{
		
	}



private:

	Node* m_pHead;
	Node* m_pTail;
};