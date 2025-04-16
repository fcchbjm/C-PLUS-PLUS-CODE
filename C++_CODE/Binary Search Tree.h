#pragma once

#include <iostream>

using namespace std;

namespace nskey
{
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
		{
		}
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
				else
				{
					return false;
				}
			}

			cur = new Node(key);
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else
			{
				parent->_left = cur;
			}
			return true;
		}

		void InOrder()
		{
			_InOrder(_root);
			cout << endl;
		}

		bool Find(const K& key)
		{
			Node* cur = _root;

			while (cur)
			{
				if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return true;
				}
			}
			return false;
		}

		bool Erase(const K& key)
		{
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
				else
				{
					//删除

					//左为空
					if (cur->_left == nullptr)
					{
						if (cur == _root)
						{
							_root = _root->_right;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_right;
							}
							//else if (parent->_right == cur)
							else
							{
								parent->_right = cur->_right;
							}
						}
						delete cur;
					}
					//右为空
					else if (cur->_right == nullptr)
					{
						if (cur == _root)
						{
							_root = _root->_left;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_left;
							}
							//else if (parent->_right == cur)
							else
							{
								parent->_right = cur->_left;
							}
						}
						delete cur;
					}
					//左右都不为空
					else
					{
						Node* replaceParent = cur;
						Node* replace = cur->_right;
						while (replace->_left)//寻找右子树的最小节点（或者寻找左子树的最大节点）
						{
							replaceParent = replace;
							replace = replace->_left;
						}

						cur->_key = replace->_key;
						if (replaceParent->_left == replace)
							replaceParent->_left = replace->_right;
						else
							replaceParent->_right = replace->_right;
						delete replace;
					}
					return true;
				}
			}
			return false;
		}


	private:
		void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;
			}
			_InOrder(root->_left);
			cout << root->_key << " ";
			_InOrder(root->_right);
		}

		Node* _root = nullptr;
	};
}

namespace nskey_value
{
	template<class K, class V>
	struct BSTNode
	{
		K _key;
		V _value;
		BSTNode<K, V>* _left;
		BSTNode<K, V>* _right;
		BSTNode(const K& key, const V& value)
			: _key(key)
			, _value(value)
			, _left(nullptr)
			, _right(nullptr)
		{
		}
	};

	template<class K, class V>//K - Key  V - Value
	class BSTree
	{
		//typedef BSTNode<K> Node;
		using Node = BSTNode<K, V>;
	public:
		bool Insert(const K& key, const V& value)
		{
			if (_root == nullptr)
			{
				_root = new Node(key, value);
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
				else
				{
					return false;
				}
			}

			cur = new Node(key, value);
			if (parent->_key < key)
			{
				parent->_right = cur;
			}
			else
			{
				parent->_left = cur;
			}
			return true;
		}

		void InOrder()
		{
			_InOrder(_root);
		}

		Node* Find(const K& key)
		{
			Node* cur = _root;

			while (cur)
			{
				if (cur->_key < key)
				{
					cur = cur->_right;
				}
				else if (cur->_key > key)
				{
					cur = cur->_left;
				}
				else
				{
					return cur;
				}
			}
			return nullptr;
		}

		bool Erase(const K& key)
		{
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
				else
				{
					//删除

					//左为空
					if (cur->_left == nullptr)
					{
						if (cur == _root)
						{
							_root = _root->_right;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_right;
							}
							//else if (parent->_right == cur)
							else
							{
								parent->_right = cur->_right;
							}
						}
						delete cur;
					}
					//右为空
					else if (cur->_right == nullptr)
					{
						if (cur == _root)
						{
							_root = _root->_left;
						}
						else
						{
							if (parent->_left == cur)
							{
								parent->_left = cur->_left;
							}
							//else if (parent->_right == cur)
							else
							{
								parent->_right = cur->_left;
							}
						}
						delete cur;
					}
					//左右都不为空
					else
					{
						Node* replaceParent = cur;
						Node* replace = cur->_right;
						while (replace->_left)//寻找右子树的最小节点（或者寻找左子树的最大节点）
						{
							replaceParent = replace;
							replace = replace->_left;
						}

						cur->_key = replace->_key;
						if (replaceParent->_left == replace)
							replaceParent->_left = replace->_right;
						else
							replaceParent->_right = replace->_right;
						delete replace;
					}
					return true;
				}
			}
			return false;
		}


	private:
		void _InOrder(Node* root)
		{
			if (root == nullptr)
			{
				return;
			}
			_InOrder(root->_left);
			cout << root->_key << " " << root->_value << endl;
			_InOrder(root->_right);
		}

		Node* _root = nullptr;
	};
}