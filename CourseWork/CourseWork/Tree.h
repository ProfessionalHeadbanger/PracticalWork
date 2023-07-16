#include <fstream>
#include <algorithm>
#include "Student.h"

using TInfo = Student;
struct NODE
{
	TInfo info;
	NODE* left, * right;
	int height = 1;
	NODE() {}
	NODE(TInfo info, NODE *left = nullptr, NODE *right = nullptr): info(info), left(left), right(right) {}
	~NODE()
	{
		left = nullptr;
		right = nullptr;
	}
};

using Tree = NODE*;

void add(Tree& t, TInfo elem)
{
	if (!t)
		t = new NODE(elem);
	else
		if (elem.average_mark < t->info.average_mark)
			add(t->left, elem);
		else
			add(t->right, elem);
			
}

Tree Build_Search(std::string file_name)
{
	std::ifstream file(file_name);
	Tree root = nullptr;
	Student St;
	while (file >> St)
		{
			add(root, St);
		}
	file.close();
	return root;
}

int getHeight(Tree node) {
    if (node == nullptr) {
        return 0;
    }
    return node->height;
}

int getBalance(Tree node) {
    if (node == nullptr) {
        return 0;
    }
    return getHeight(node->left) - getHeight(node->right);
}

Tree rotateRight(Tree y) {
    Tree x = y->left;
    Tree T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = (std::max)(getHeight(x->left), getHeight(x->right)) + 1;

    return x;
}

Tree rotateLeft(Tree x) {
    Tree y = x->right;
    Tree T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = std::max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = std::max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}


Tree insert_avl(Tree node, TInfo key) {
    if (node == nullptr) {
        node = new NODE(key);
    }

    if (key.average_mark < node->info.average_mark) {
        node->left = insert_avl(node->left, key);
    } else if (key.average_mark > node->info.average_mark) {
        node->right = insert_avl(node->right, key);
    }

    node->height = 1 + std::max(getHeight(node->left->info.average_mark), getHeight(node->right->info.average_mark));

    int balance = getBalance(node);

    if (balance > 1 && key.average_mark <= node->left->info.average_mark) {
        return rotateRight(node);
    }

    if (balance < -1 && key.average_mark > node->right->info.average_mark) {
        return rotateLeft(node);
    }

    if (balance > 1 && key.average_mark > node->left->info.average_mark) {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }

    if (balance < -1 && key.average_mark <= node->right->info.average_mark) {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;
}

Tree Build_avl(std::string filename)
{
	std::fstream file(filename);
	Student st;
	Tree Res = nullptr;
	while(file >> st)
	{
		Res = insert_avl(Res, st);
	}
	file.close();
	return Res;
}

void Print(Tree t, std::string& str, int level = 0)
{
    if (t && level < 3)
    {
        Print(t->right, str, level + 1);
        for (int i = 0; i < level; i++)
            str += "                        ";
        str += t->info.toString() + '\n';
        Print(t->left, str, level + 1);
    }
}
