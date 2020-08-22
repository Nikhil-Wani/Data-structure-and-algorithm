# Data structure and algorithm in c++

Data Structure can be defined as the group of data elements which provides an efficient way of storing and organising data in the computer so that it can be used efficiently. Some examples of Data Structures are arrays, Linked List, Stack, Queue, etc. Data Structures are widely used in almost every aspect of Computer Science i.e. Operating System, Compiler Design, Artifical intelligence, Graphics and many more.

Data Structures are the main part of many computer science algorithms as they enable the programmers to handle the data in an efficient way. It plays a vitle role in enhancing the performance of a software or a program as the main function of the software is to store and retrieve the user's data as fast as possible

# Basic Terminology

Data structures are the building blocks of any program or the software. Choosing the appropriate data structure for a program is the most difficult task for a programmer. Following terminology is used as far as data structures are concerned

1. Data: Data can be defined as an elementary value or the collection of values, for example, student's name and its id are the data about the student.

2. Group Items: Data items which have subordinate data items are called Group item, for example, name of a student can have first name and the last name.

3. Record: Record can be defined as the collection of various data items, for example, if we talk about the student entity, then its name, address, course and marks can be grouped together to form the record for the student.

4. File: A File is a collection of various records of one type of entity, for example, if there are 60 employees in the class, then there will be 20 records in the related file where each record contains the data about each employee.

5. Attribute and Entity: An entity represents the class of certain objects. it contains various attributes. Each attribute represents the particular property of that entity.

6. Field: Field is a single elementary unit of information representing the attribute of an entity.

# Need of Data Structures

As applications are getting complexed and amount of data is increasing day by day, there may arrise the following problems:

1. Processor speed: To handle very large amout of data, high speed processing is required, but as the data is growing day by day to the billions of files per entity, processor may fail to deal with that much amount of data.

2. Data Search: Consider an inventory size of 106 items in a store, If our application needs to search for a particular item, it needs to traverse 106 items every time, results in slowing down the search process.

3. Multiple requests: If thousands of users are searching the data simultaneously on a web server, then there are the chances that a very large server can be failed during that process

in order to solve the above problems, data structures are used. Data is organized to form a data structure in such a way that all items are not required to be searched and required data can be searched instantly.

# Advantages of Data Structures

1. Efficiency: Efficiency of a program depends upon the choice of data structures. For example: suppose, we have some data and we need to perform the search for a perticular record. In that case, if we organize our data in an array, we will have to search sequentially element by element. hence, using array may not be very efficient here. There are better data structures which can make the search process efficient like ordered array, binary search tree or hash tables.

2. Reusability: Data structures are reusable, i.e. once we have implemented a particular data structure, we can use it at any other place. Implementation of data structures can be compiled into libraries which can be used by different clients.

3. Abstraction: Data structure is specified by the ADT which provides a level of abstraction. The client program uses the data structure through interface only, without getting into the implementation details.

# Algorithm

An algorithm is a procedure having well defined steps for solving a particular problem. Algorithm is finite set of logic or instructions, written in order for accomplish the certain predefined task. It is not the complete program or code, it is just a solution (logic) of a problem, which can be represented either as an informal description using a Flowchart or Pseudo code.

The major categories of algorithms are given below:

1. Sort: Algorithm developed for sorting the items in certain order.

2. Search: Algorithm developed for searching the items inside a data structure.

3. Delete: Algorithm developed for deleting the existing element from the data structure.

4. Insert: Algorithm developed for inserting an item inside a data structure.

5. Update: Algorithm developed for updating the existing element inside a data structure.

The performance of algorithm is measured on the basis of following properties:

1. Time complexity: It is a way of representing the amount of time needed by a program to run to the completion.

2. Space complexity: It is the amount of memory space required by an algorithm, during a course of its execution. Space complexity is required in situations when limited memory is available and for the multi user system.

Asymptotic Analysis
In mathematical analysis, asymptotic analysis of algorithm is a method of defining the mathematical boundation of its run-time performance. Using the asymptotic analysis, we can easily conclude about the average case, best case and worst case scenario of an algorithm.

It is used to mathematically calculate the running time of any operation inside an algorithm.

Example: Running time of one operation is x(n) and for another operation it is calculated as f(n2). It refers to running time will increase linearly with increase in 'n' for first operation and running time will increase exponentially for second operation. Similarly the running time of both operations will be same if n is significantly small.

Usually the time required by an algorithm comes under three types:

1. Worst case: It defines the input for which the algorithm takes the huge time.

2. Average case: It takes average time for the program execution.

3. Best case: It defines the input for which the algorithm takes the lowest time.

# Asymptotic Notations:

The commonly used asymptotic notations used for calculating the running time complexity of an algorithm is given below:

1. Big oh Notation (O):

It is the formal way to express the upper boundary of an algorithm running time. It measures the worst case of time complexity or the longest amount of time, algorithm takes to complete their operation.
For example: If f(n) and g(n) are the two functions defined for positive integers, then f(n) is O(g(n)) as f(n) is big oh of g(n) or f(n) is on the order of g(n)) if there exists constants c and no such that:
F(n)≤cg(n) for all n≥no
This implies that f(n) does not grow faster than g(n), or g(n) is an upper bound on the function f(n).

2. Omega Notation (Ω):

It is the formal way to represent the lower bound of an algorithm's running time. It measures the best amount of time an algorithm can possibly take to complete or the best case time complexity.
If we required that an algorithm takes at least certain amount of time without using an upper bound, we use big- Ω notation i.e. the Greek letter "omega". It is used to bound the growth of running time for large input size.
If running time is Ω (f(n)), then for the larger value of n, the running time is at least k?f(n) for constant (k).

3. Theta Notation (?):

It is the formal way to express both the upper bound and lower bound of an algorithm running time.
Consider the running time of an algorithm is θ (n), if at once (n) gets large enough the running time is at most k2-n and at least k1 ?n for some constants k1 and k2.

# Searching
Searching is the process of finding some particular element in the list. If the element is present in the list, then the process is called successful and the process returns the location of that element, otherwise the search is called unsuccessful.

There are two popular search methods that are widely used in order to search some item into the list. However, choice of the algorithm depends upon the arrangement of the list.

1. Linear Search
Linear search is the simplest search algorithm and often called sequential search. In this type of searching, we simply traverse the list completely and match each element of the list with the item whose location is to be found. If the match found then location of the item is returned otherwise the algorithm return NULL.

2. Binary Search
Binary search is the search technique which works efficiently on the sorted lists. Hence, in order to search an element into some list by using binary search technique, we must ensure that the list is sorted.
Binary search follows divide and conquer approach in which, the list is divided into two halves and the item is compared with the middle element of the list. If the match is found then, the location of middle element is returned otherwise, we search into either of the halves depending upon the result produced through the match.

# Stack

Stack is an ordered list in which, insertion and deletion can be performed only at one end that is called top.

Stack is a recursive data structure having pointer to its top element.

Stacks are sometimes called as Last-In-First-Out (LIFO) lists i.e. the element which is inserted first in the stack, will be deleted last from the stack.


# Queue

A queue can be defined as an ordered list which enables insert operations to be performed at one end called REAR and delete operations to be performed at another end called FRONT.

Queue is referred to be as First In First Out list.

For example, people waiting in line for a rail ticket form a queue.

# Linked list 

1. <b>Linked list</b>

Linked List can be defined as collection of objects called nodes that are randomly stored in the memory.

A node contains two fields i.e. data stored at that particular address and the pointer which contains the address of the next node in the memory.

The last node of the list contains pointer to the null.

2. <b>Doubly linked list</b>

Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence. Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer) , pointer to the previous node (previous pointer).

3. <b>Circular Singly Linked List</b>

In a circular Singly linked list, the last node of the list contains a pointer to the first node of the list. We can have circular singly linked list as well as circular doubly linked list.

We traverse a circular singly linked list until we reach the same node where we started. The circular singly liked list has no beginning and no ending. There is no null value present in the next part of any of the nodes.

4. <b>Circular Doubly Linked List</b>

Circular doubly linked list is a more complexed type of data structure in which a node contain pointers to its previous node as well as the next node. Circular doubly linked list doesn't contain NULL in any of the node. The last node of the list contains the address of the first node of the list. The first node of the list also contain address of the last node in its previous pointer.

# Sorting Algorithm

1. <b>Bubble sort</b>

In Bubble sort, Each element of the array is compared with its adjacent element. The algorithm processes the list in passes. A list with n elements requires n-1 passes for sorting. Consider an array A of n elements whose elements are to be sorted by using Bubble sort. The algorithm processes like following.

In Pass 1, A[0] is compared with A[1], A[1] is compared with A[2], A[2] is compared with A[3] and so on. At the end of pass 1, the largest element of the list is placed at the highest index of the list.

In Pass 2, A[0] is compared with A[1], A[1] is compared with A[2] and so on. At the end of Pass 2 the second largest element of the list is placed at the second highest index of the list.

In pass n-1, A[0] is compared with A[1], A[1] is compared with A[2] and so on. At the end of this pass. The smallest element of the list is placed at the first index of the list.

2. <b>Insertion sort</b>

Insertion sort is the simple sorting algorithm which is commonly used in the daily lives while ordering a deck of cards. In this algorithm, we insert each element onto its proper place in the sorted array. This is less efficient than the other sort algorithms like quick sort, merge sort, etc.

Consider an array A whose elements are to be sorted. Initially, A[0] is the only element on the sorted set. In pass 1, A[1] is placed at its proper index in the array.

In pass 2, A[2] is placed at its proper index in the array. Likewise, in pass n-1, A[n-1] is placed at its proper index into the array.

To insert an element A[k] to its proper index, we must compare it with all other elements i.e. A[k-1], A[k-2], and so on until we find an element A[j] such that, A[j]<=A[k].

All the elements from A[k-1] to A[j] need to be shifted and A[k] will be moved to A[j+1].

3. <b>Merge sort</b>

Merge sort is the algorithm which follows divide and conquer approach. Consider an array A of n number of elements. The algorithm processes the elements in 3 steps.

If A Contains 0 or 1 elements then it is already sorted, otherwise, Divide A into two sub-array of equal number of elements.

Conquer means sort the two sub-arrays recursively using the merge sort.

Combine the sub-arrays to form a single final sorted array maintaining the ordering of the array.

4. <b>Selection sort</b>

In selection sort, the smallest value among the unsorted elements of the array is selected in every pass and inserted to its appropriate position into the array.

First, find the smallest element of the array and place it on the first position. Then, find the second smallest element of the array and place it on the second position. The process continues until we get the sorted array.

The array with n elements is sorted by using n-1 pass of selection sort algorithm.

In 1st pass, smallest element of the array is to be found along with its index pos. then, swap A[0] and A[pos]. Thus A[0] is sorted, we now have n -1 elements which are to be sorted.

In 2nd pas, position pos of the smallest element present in the sub-array A[n-1] is found. Then, swap, A[1] and A[pos]. Thus A[0] and A[1] are sorted, we now left with n-2 unsorted elements.

In n-1th pass, position pos of the smaller element between A[n-1] and A[n-2] is to be found. Then, swap, A[pos] and A[n-1].

5. <b>Quick Sort</b>

Quick sort is the widely used sorting algorithm that makes n log n comparisons in average case for sorting of an array of n elements. This algorithm follows divide and conquer approach. The algorithm processes the array in the following way.

Set the first index of the array to left and loc variable. Set the last index of the array to right variable. i.e. left = 0, loc = 0, en d = n - 1, where n is the length of the array.

Start from the right of the array and scan the complete array from right to beginning comparing each element of the array with the element pointed by loc.

Ensure that, a[loc] is less than a[right].

1. If this is the case, then continue with the comparison until right becomes equal to the loc.

2.  If a[loc] > a[right], then swap the two values. And go to step 3.

3.  Set, loc = right

start from element pointed by left and compare each element in its way with the element pointed by the variable loc. Ensure that a[loc] > a[left]

1. if this is the case, then continue with the comparison until loc becomes equal to left.

2.  [loc] < a[right], then swap the two values and go to step 2.

3.  Set, loc = left.

# Tree

A Tree is a recursive data structure containing the set of one or more data nodes where one node is designated as the root of the tree while the remaining nodes are called as the children of the root.
The nodes other than the root node are partitioned into the non empty sets where each one of them is to be called sub-tree.
Nodes of a tree either maintain a parent-child relationship between them or they are sister nodes.
In a general tree, A node can have any number of children nodes but it can have only a single parent.

1. <b>Binary Tree</b>
Binary Tree is a special type of generic tree in which, each node can have at most two children. Binary tree is generally partitioned into three disjoint subsets.

1. Root of the node
2. left sub-tree which is also a binary tree.
3. Right binary sub-tree

2. <b>Binary Search Tree</b>

Binary Search tree can be defined as a class of binary trees, in which the nodes are arranged in a specific order. This is also called ordered binary tree.

In a binary search tree, the value of all the nodes in the left sub-tree is less than the value of the root.

Similarly, value of all the nodes in the right sub-tree is greater than or equal to the value of the root.
This rule will be recursively applied to all the left and right sub-trees of the root.



# Vector

Vector is a template class in STL (Standard Template Library) of C++ programming language. C++ vectors are sequence containers that store elements. Specifically used to work with dynamic data, C++ vectors may expand depending on the elements they contain. That makes it different from a fixed-size array.
