/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:40 PM       22:05:40
 */
#include <iostream>
using namespace std;
int num = 0;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node *newNode(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}

void printInorder(struct Node *node)
{
  if (node == NULL)
    return;
  num++;
  printInorder(node->left);
  cout << node->data << " ";
  printInorder(node->right);
}

void printPreorder(struct Node *node)
{
  if (node == NULL)
    return;
  cout << node->data << " ";
  printPreorder(node->left);
  printPreorder(node->right);
}

void printPostorder(struct Node *node)
{
  if (node == NULL)
    return;
  printPostorder(node->left);
  printPostorder(node->right);
  cout << node->data << " ";
}

/*
                1
              /   \
            2       3
          /   \   /   \
        4      5 6     7
*/

int main()
{
  struct Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
  root->right->right = newNode(7);

  cout << "\nInorder traversal of binary tree is \n";
  printInorder(root);
  // cout << "\nPre-order traversal of binary tree is \n";
  // printPreorder(root);
  // cout << "\nPost-order traversal of binary tree is \n";
  // printPostorder(root);

  cout<<"\nCount : "<<num;
}