//TestSuite.h
#ifndef TESTSUITE_H
#define TESTSUITE_H
#include "LinkedListOfInts.h"
#include <string>
#include <iostream>

class TestSuite
{
	public:
	void runTests();
	std::string convertToString(bool result);

	//SIZE TESTS
	bool test1(); //size of empty list is zero
	bool test2(); //size of non-empty list is not zero
	bool test34(); //size of one-element list is one

	//ISEMPTY TESTS
	bool test3(); //isEmpty returns true if list is empty
	bool test4(); //isEmpty returns false if list is not empty

	//ADD TESTS
	bool test5(); //size returns correct value after 1 addFront
	bool test6(); //size returns correct value after 1 addBack
	bool test7(); //size returns correct value after multiple addFront
	bool test8(); //size returns correct value after multiple addBack
	bool test9(); //addBack on an empty list
	bool test10(); //addFront on an empty list
	bool test11(); //addBack on a one element list
	bool test12(); //addFront on a one element list
	bool test13(); //addBack on a list with many elements
	bool test14(); //addFront on a list with many elements
	bool test37(); //addFront increments size on a nonempty list
	bool test38(); //addBack increments size on a nonempty list
	bool test39(); //addFront increments size after adding to an empty list
	bool test40(); //addBack increments size after adding to an empty list
	bool test28(); //addFront adds an element to the list
	bool test29(); //addBack adds an element to the list

	//ADDING AND REMOVING
	bool test15(); //size returns correct value after adds and removeFront
	bool test16(); //size returns correct value after adds and removeBack

	//SEARCH TESTS
	bool test17(); //search returns false on empty list
	bool test18(); //search returns false when value not in list 
	bool test19(); //search returns true if value is in large list
	bool test43(); //search can find value after multiple adds and removeFronts
	bool test44(); //search can find value after multiple adds and removeBacks

	//DESTRUCTOR TESTS
	//length of list is 0 after destructor is invoked
	//m_front is nullptr after destructor is invoked

	//REMOVE TESTS
	bool test20(); //removeFront decrements size on a nonempty list
	bool test21(); //removeBack decrements size on a nonempty list
	bool test22(); //removeFront on empty list returns false
	bool test23(); //removeBack on empty list returns false
	bool test24(); //removeFront on one element list works
	bool test25(); //removeBack on one element list works
	bool test26(); //size preserved by removeFront on populated list
	bool test27(); //size preserved by removeBack on populated list
	bool test32(); //removeFront does not decrement size on an empty list
	bool test33(); //removeBack does not decrement size on an empty list
	bool test35(); //removeFront can handle more removes than possible
	bool test36(); //removeBack can handle more removes than possible
	bool test41(); //removeFront removes an element from the list
	bool test42(); //removeBack removes an element from the list
	bool test45(); //removeFront updates m_front
	bool test46(); //removeBack updates last node's m_next pointer to nullptr

	//CONSTRUCTOR TESTS
	bool test30(); //constructor sets length to 0
	bool test31(); //constructor sets m_front to nullptr


};

#endif
