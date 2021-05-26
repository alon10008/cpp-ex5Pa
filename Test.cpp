#include <iostream>
#include "BinaryTree.hpp"
#include "doctest.h"

using namespace ariel;
using namespace std;

TEST_CASE("ADD") {

    BinaryTree<int> tree;
    CHECK_NOTHROW(tree.add_root(10));
    CHECK(tree.get_root().data == 10);
    CHECK_NOTHROW(tree.add_root(20));
    CHECK(tree.get_root().data == 20);
    CHECK(tree.get_root().left == nullptr);
    CHECK(tree.get_root().right == nullptr);
    CHECK_NOTHROW(tree.add_left(20, 5));
    CHECK_NOTHROW(tree.add_right(20, 6));
    //CHECK(tree.get_root().left->data == 5);
    //CHECK(tree.get_root().right->data == 6);
    

}

TEST_CASE("PRE-ORDER") {

    BinaryTree<char> tree;
    CHECK_NOTHROW(tree.add_root('h'));         //            'h'
    CHECK_NOTHROW(tree.add_left('h','e'));     //*         /     \          */
    CHECK_NOTHROW(tree.add_left('e','l'));     //        'e'      '!'
    CHECK_NOTHROW(tree.add_right('e','o'));    //*      /   \               */
    CHECK_NOTHROW(tree.add_right('h','!'));    //     'l'    'o'
    string s;
    for(auto it = tree.begin_preorder() ; it!=tree.end_preorder() ; it++)
    {
        CHECK_NOTHROW(s += *it);
    }
    CHECK(s == "helo!");


}


TEST_CASE("IN-ORDER") {

    BinaryTree<char> tree;
    CHECK_NOTHROW(tree.add_root('e'));         //            'e'
    CHECK_NOTHROW(tree.add_left('e','o'));     //*         /     \          */
    CHECK_NOTHROW(tree.add_left('o','c'));     //        'o'      '!'
    CHECK_NOTHROW(tree.add_right('o','d'));    //*      /   \               */
    CHECK_NOTHROW(tree.add_right('e','!'));    //     'c'    'd'
    string s;
    for(auto it = tree.begin_inorder() ; it!=tree.end_inorder() ; it++)
    {
        CHECK_NOTHROW(s += *it);
    }
    CHECK(s == "test!");

}
TEST_CASE("POST-ORDER") {

    BinaryTree<char> tree;
    CHECK_NOTHROW(tree.add_root('!'));           //             '!'
    CHECK_NOTHROW(tree.add_left('!','s'));       //*          /     \          */
    CHECK_NOTHROW(tree.add_left('s','t'));       //         's'      't'
    CHECK_NOTHROW(tree.add_right('s','e'));      //*       /   \               */
    CHECK_NOTHROW(tree.add_right('!','t'));      //      't'    'e'
    string s;
    for(auto it = tree.begin_postorder() ; it!=tree.end_postorder() ; it++)
    {
        CHECK_NOTHROW(s += *it);
    }
    CHECK(s == "test!");

}
