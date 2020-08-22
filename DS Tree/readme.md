# Tree

A Tree is a recursive data structure containing the set of one or more data nodes where one node is designated as the root of the tree while the remaining nodes are called as the children of the root.
The nodes other than the root node are partitioned into the non empty sets where each one of them is to be called sub-tree.
Nodes of a tree either maintain a parent-child relationship between them or they are sister nodes.
In a general tree, A node can have any number of children nodes but it can have only a single parent.

<b>Binary Tree</b>

Binary Tree is a special type of generic tree in which, each node can have at most two children. Binary tree is generally partitioned into three disjoint subsets.

1. Root of the node
2. left sub-tree which is also a binary tree.
3. Right binary sub-tree.


<b>Binary Search Tree</b>

1. Binary Search tree can be defined as a class of binary trees, in which the nodes are arranged in a specific order. This is also called ordered binary tree.
2. In a binary search tree, the value of all the nodes in the left sub-tree is less than the value of the root.
3. Similarly, value of all the nodes in the right sub-tree is greater than or equal to the value of the root.
4. This rule will be recursively applied to all the left and right sub-trees of the root.
