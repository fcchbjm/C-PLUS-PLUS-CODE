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

private:
	Node* _root = nullptr;
};