#pragma once

template<class K>
struct BSTNode
{
	K _key;
	BSTNode<K>* _left;
	BSTNode<K>* _right;
	BSTNode(const K& key) 
		: _key(key)
		, _left(nullptr)
		, _right(nullptr)
	{}
};

template<class K>//K - Key
class BSTree
{
	//typedef BSTNode<K> Node;
	using Node = BSTNode<K>;
public:
	bool Insert(const K& key)
	{
		if (_root == nullptr)
		{
			_root = new Node(key);
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;

		while (cur)
		{
			if (cur->_key < key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_key > key)
			{
				parent = cur;
				cur = cur->_left;
			}
		}
	}
private:
	Node* _root = nullptr;
};