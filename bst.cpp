//bst.cpp to implement your class
#include <iostream>
#include <iomanip>
#include "bst.hpp"

using namespace ENSC251_Lab3;

//Default Constructor
BinarySearchTree::BinarySearchTree()
{
  //Do nothing//
}


BinarySearchTree::BinarySearchTree(ENSC251_Lab3::BinarySearchTree const & B)
{
  return;
}

BinarySearchTree::~BinarySearchTree()
{
  
}


NodePtr BinarySearchTree::get_root()
{
  return root;
}

NodePtr BinarySearchTree::SearchNode(int key, NodePtr root)
{
  if (root == nullptr)
  {
    cout << "no root" << endl;
    return NULL;
  }
  if (root->key == key)
  {
    cout<<"The node " << key <<" has been found! \n";
    return root;
  }
  else if (key < root->key)
  {
    SearchNode(key, root->left);
  }
  else if (key > root->key)
  {
    SearchNode(key, root->right); 
  }
 // else 
  //{
  //  cout<<"The node " << key <<" does not exist found! \n";
 //   return NULL;
  //}
}

/*
NodePtr BinarySearchTree::SearchSuccessor(int key, struct Node* root)
{
  if (SearchNode(key, root) != NULL)
  {
      //case 1: has no children : no successor
    if (root->right == NULL)
    {
      cout<<"There are no successors to this node \n";
      return root;
    }
    //case 2: Only right subtree can have a potential successor
    else if ((root->right != NULL))
    {
      if ((root-> left != NULL))
      {
        SearchSuccessor(key, root->left);
      }
    }
    //case 3: no children : has successor
    else if ((root->right == NULL) && (root->left == NULL))
    {
      struct Node* temp = root->parent;
      if ((temp->right == NULL) && (temp->left != NULL))
      {
        return temp;
      }
      else
      {
        return NULL;
      }
    }
  
    else if (root == NULL)
    {
      return NULL;
    }
    
    else 
    {
      cout<<"Specified key does not exist \n";
      return NULL;
    }
  }
  return root;
}
*/
NodePtr BinarySearchTree::createNode(int key, NodePtr parent)
{
  NodePtr newNode = new Node();
    newNode->key = key;
    newNode->parent = parent;
    newNode->left = NULL;
    newNode->right = NULL;  
}

bool BinarySearchTree::insertNode(int key, NodePtr root)
{
  //Check if the root is null
    if (root == nullptr)
    {
      this->root = createNode(key,NULL);
      
    }

    if (SearchNode(key, root) == NULL)
    {
      if ( key < root->key)
      {
        if (root->left == NULL)
        {
          root->left = createNode(key, root);
        
          cout<<"Node " << key <<" has been added\n";
          return true;
        }
        else
        {
          insertNode(key, root->left);
        }      
      }
        
      else if ( key > root->key)
      {
        if (root->right == NULL)
        {
          root->right = createNode(key, root);
          cout<<"Node " << key <<" has been added\n";
          return true;
        }
        else
        {
          insertNode(key, root->right);
        }
      }

    else if (SearchNode(key, root) != NULL)
    {
      cout<<"That node already exists \n";
      return false;
    }

  }
  return true;
}



/*
bool BinarySearchTree::deleteNode(int key,  NodePtr root,  NodePtr temp)
{
  if (root == NULL)
  {
    return false;
  }

  if (SearchNode(key, root) != NULL)
  {
    //case 1: No children
    if ((root->left == NULL) && (root->right == NULL))
    {
      delete root;
      return true;
    }
    //case 2: 1 child
    else if ((root->left == NULL) || (root->right == NULL))
    {
      if ((root->right != NULL))

      {
        temp  = root->right;
        root->parent = temp;
        delete root;
        return true;
      }
      else if ((root->left != NULL))
      {
        temp  = root->left;
        root->parent = temp;
        delete root;
        return true;
      }
    }

    //case 3: 2 children
    else if ((root->left != NULL) && (root->right != NULL))
    {
      temp = SearchSuccessor(key, root->right);
      root->key = temp->key;
      delete temp;
      return true;
    }
 
  }

  else
  {
    cout<<"This node does not exist";
    return false;
  }

  return true;
}
*/

/*
std::ostream & operator<<(std::ostream & out, const ENSC251_Lab3::BinarySearchTree)
{

  out<<"The Binary Search Tree : " << root->key << "\n";
  
  if (root->right != NULL)
  {
    out<<
  }
}
*/
