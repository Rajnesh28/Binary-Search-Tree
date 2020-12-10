#include <iostream>
#ifndef BST_H
#define BST_H

using namespace std;
namespace ENSC251_Lab3 
{
  
  struct Node 
  {

    int key; // key value of the node
    struct Node *parent; // pointer to parent node
    struct Node *left; // pointer to left subtree
    struct Node *right; // pointer to right subtree
    struct Node *succ; //pointer to the successor node
    struct Node *temp; //temporary pointer

  };

  typedef struct Node* NodePtr;
  
  class BinarySearchTree 
  {

   public:
   
    int b, temp; 

    //Constructor//
    BinarySearchTree();
    //Copy Constructor//
    BinarySearchTree(BinarySearchTree const & B);
    //Destructor//
    ~BinarySearchTree();
    //Overloaded Assignment Operator//

    /*
    const BinarySearchTree & operator = (const BinarySearchTree &, NodePrt *root);
    friend ostream & operator<<(ostream &, const BinarySearchTree &);
    */
    
    bool insertNode(int key);
    bool DeleteNode(int key);


    //Mutator Function for private member variable//
    NodePtr get_root();

    NodePtr SearchNode(int key, NodePtr root);
    NodePtr SearchSuccessor(int key, NodePtr root);
    bool insertNode(int key, NodePtr root);
    bool deleteNode(int key, NodePtr root, NodePtr temp);
    NodePtr createNode(int key, NodePtr parent);
    void RemoveBST(NodePtr root);

   private: 

    NodePtr root;
  };
}

#endif