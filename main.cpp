// main.cpp, put your driver code here,
// you can manipulate your class objects here
#include "bst.hpp"
#include <iostream> //cin and cout
#include <cassert>
using namespace ENSC251_Lab3;
using namespace std;


int main()
{
  NodePtr root, temp;
  ENSC251_Lab3::BinarySearchTree bst1;
  cout<<"Adding nodes to binary search tree 1 \n";
  cout<<"Processing...\n";
  bst1.insertNode(10, root);
  bst1.insertNode(5, root);
  bst1.insertNode(15, root);
  bst1.insertNode(3, root);
  bst1.insertNode(7, root);
  bst1.insertNode(18, root);

  //bst1.SearchNode(15, root);

  int key, data, menu_choice;

  void introduction();

}

/*
  if (menu_choice == 1)
  {
    bst1.SearchNode(key, root);
    cout << "\n";
    cout << "Would you like to return to the main menu?" << endl;
    cout << "Type 1 for yes" << endl;
    cout << "\n";
    cin >> menu_choice;
    cout << "\n";
    if (menu_choice == 1)
    {
      return main();
    }
    else
    {
      cout << "Goodbye" << endl;
      exit(1);
    }
  }

  else if (menu_choice == 2)
  {
    bst1.SearchSuccessor(key, root);
  }

  else if (menu_choice == 3)
  {
    bst1.insertNode(key);
  }

  else if (menu_choice == 4)
  {
    bst1.deleteNode(key, root, temp);
  }

  else 
  {
    cout<<"Developers have yet to create more functions.... this is awkward" << endl;
    cout<<"\n";

    return main();
  }

}

void introduction()
{
  int introductionchoice;
  cout << "You have the options below to choose what you would like... " << endl;
  cout << "1- Search for a node" << endl;
  cout << "2- Search for a node's successor" << endl;
  cout << "3- Insert a node" << endl;
  cout << "4- Delete a node" << endl;
  cout << "Please type the number corresponding with the action above you would like to take... " << endl;
  cout << "\n";
}
*/