//TestSuite.cpp
#include "TestSuite.h"
#include "LinkedListOfInts.h"
#include <string>
#include <iostream>
#include <vector>

std::string TestSuite::convertToString(bool result)
{
	if (result)
	{
		return "PASSED";
	}

	else
	{
		return "FAILED";
	}
}

void TestSuite::runTests()
{
	std::cout << "Test 1: size of empty list is zero: " + convertToString(test1()) + '\n';
	std::cout << "Test 2: size of non-empty list is not zero: " + convertToString(test2()) + '\n';
	std::cout << "Test 3: isEmpty returns true if list is empty: " + convertToString(test3()) + '\n';
	std::cout << "Test 4: isEmpty returns false if list is not empty: " + convertToString(test4()) + '\n';
	std::cout << "Test 5: size returns correct value after 1 addFront: " + convertToString(test5()) + '\n';
	std::cout << "Test 6: size returns correct value after 1 addBack: " + convertToString(test6()) + '\n';
	std::cout << "Test 7: size returns correct value after multiple addFront: " + convertToString(test7()) + '\n';
	std::cout << "Test 8: size returns correct value after multiple removeBack: " + convertToString(test8()) + '\n';
	std::cout << "Test 9: addBack on an empty list: " + convertToString(test9()) + '\n';
	std::cout << "Test 10: addFront on an empty list: " + convertToString(test10()) + '\n';
	std::cout << "Test 11: addBack on a one element list: " + convertToString(test11()) + '\n';
	std::cout << "Test 12: addFront on a one element list: " + convertToString(test12()) + '\n';
	std::cout << "Test 13: addBack on a list with many elements: " + convertToString(test13()) + '\n';
	std::cout << "Test 14: addFront on a list with many elements: " + convertToString(test14()) + '\n';
	std::cout << "Test 15: size returns correct value after addFront and removeFront: " + convertToString(test15()) + '\n';
	std::cout << "Test 16: size returns correct value after addBack and removeBack: " + convertToString(test16()) + '\n';
	std::cout << "Test 17: search returns false on empty list: " + convertToString(test17()) + '\n';
	std::cout << "Test 18: search returns false when value is not in list: " + convertToString(test18()) + '\n';
	std::cout << "Test 19: search returns true if value is in list: " + convertToString(test19()) + '\n';
	std::cout << "Test 20: removeFront decrements size: " + convertToString(test20()) + '\n';
	std::cout << "Test 21: removeBack decrements size: " + convertToString(test21()) + '\n';
	std::cout << "Test 22: removeFront on empty list returns false: " + convertToString(test22()) + '\n';
	std::cout << "Test 23: removeBack on empty list returns false: " + convertToString(test23()) + '\n';
	std::cout << "Test 24: removeFront on one element list works: " + convertToString(test24()) + '\n';
	std::cout << "Test 25: removeBack on one element list works: " + convertToString(test25()) + '\n';
	std::cout << "Test 26: size preserved by removeFront on populated list: " + convertToString(test26()) + '\n';
	std::cout << "Test 27: size preserved by removeBack on populated list: " + convertToString(test27()) + '\n';
	std::cout << "Test 28: addFront adds an element to the list: " + convertToString(test28()) + '\n';
	std::cout << "Test 29: addBack adds an element to the list: " + convertToString(test29()) + '\n';
	std::cout << "Test 30: constructor sets length to 0: " + convertToString(test30()) + '\n';
	std::cout << "Test 31: constructor sets m_front to nullptr: " + convertToString(test31()) + '\n';
	std::cout << "Test 32: removeFront does not decrement size on empty list: " + convertToString(test32()) + '\n';
	std::cout << "Test 33: removeBack does not decrement size on empty list: " + convertToString(test33()) + '\n';
	std::cout << "Test 34: size of one-element list is 1: " + convertToString(test34()) + '\n';
	std::cout << "Test 35: removeFront can handle more removes than possible: " + convertToString(test35()) + '\n';
	std::cout << "Test 36: removeBack can handle more removes than possible: " + convertToString(test36()) + '\n';
	std::cout << "Test 37: addFront increments size on a nonempty list: " + convertToString(test37()) + '\n';
	std::cout << "Test 38: addBack increments size on a nonempty list: " + convertToString(test38()) + '\n';
	std::cout << "Test 39: addFront increments size after adding to an empty list: " + convertToString(test39()) + '\n';
	std::cout << "Test 40: addBack increments size after adding to an empty list: " + convertToString(test40()) + '\n';
	std::cout << "Test 41: removeFront removes an element from the list: " + convertToString(test41()) + '\n';
	std::cout << "Test 42: removeBack removes an element from the list: " + convertToString(test42()) + '\n';
	std::cout << "Test 43: search can find value after multiple adds and removeFronts: " + convertToString(test43()) + '\n';
	std::cout << "Test 44: search can find value after multiple adds and removeBacks: " + convertToString(test44()) + '\n';
	std::cout << "Test 45: removeFront updates m_front: " + convertToString(test45()) + '\n';
	std::cout << "Test 46: removeBack updates last node's m_next pointer to nullptr: " + convertToString(test46()) + '\n';
}

//SIZE TESTS
bool TestSuite::test1() //size of empty list is zero
{
	LinkedListOfInts list;
	
	if (list.size() == 0) return true;
	else return false;
}

bool TestSuite::test34() //size of one-element list is one
{
	LinkedListOfInts list;
	
	list.addFront(10);
	if (list.size() == 1) return true;
	else return false;
}

bool TestSuite::test2() //size returns correct size of non-empty list
{
	LinkedListOfInts list;
	
	list.addFront(30);
	list.addFront(20);
	list.addFront(10);
	if (list.size() == 3) return true;
	else return false;
}

//ISEMPTY TESTS
bool TestSuite::test3() //isEmpty returns true if list is empty
{
	LinkedListOfInts list;
	
	if (list.isEmpty()) return true;
	else return false;
}

bool TestSuite::test4() //isEmpty returns false if list is not empty
{
	LinkedListOfInts list;
	list.addFront(10);

	if (!list.isEmpty()) return true;
	else return false;
}

//ADD TESTS
bool TestSuite::test5() //size returns correct value after 1 addFront
{
	LinkedListOfInts list;
	list.addFront(10);

	if (list.size() == 1) return true;
	else return false;
}

bool TestSuite::test6() //size returns correct value after 1 addBack
{
	LinkedListOfInts list;
	list.addBack(10);

	if (list.size() == 1) return true;
	else return false;
}

bool TestSuite::test7() //size returns correct value after multiple addFront
{
	LinkedListOfInts list;
	for (int i = 0; i < 7; i++)
	{
		list.addFront(10);
	}

	if (list.size() == 7) return true;
	else return false;
}

bool TestSuite::test8() //size returns correct value after multiple addBack
{
	LinkedListOfInts list;
	for (int i = 0; i < 7; i++)
	{
		list.addBack(10);
	}

	if (list.size() == 7) return true;
	else return false;
}

bool TestSuite::test9() //addBack on an empty list
{
	LinkedListOfInts list;
	list.addBack(10);

	if (list.size() == 1) return true;
	else return false;
}

bool TestSuite::test10() //addFront on an empty list
{
	LinkedListOfInts list;
	list.addFront(10);

	if (list.size() == 1) return true;
	else return false;
}

bool TestSuite::test11() //addBack on a one element list
{
	LinkedListOfInts list;
	list.addBack(10);
	list.addBack(20);

	if (list.size() == 2) return true;
	else return false;
}

bool TestSuite::test12() //addFront on a one element list
{
	LinkedListOfInts list;
	list.addFront(10);
	list.addFront(20);

	if (list.size() == 2) return true;
	else return false;
}

bool TestSuite::test13() //addBack on a list with many elements
{
	LinkedListOfInts list;

	for (int i = 0; i < 7; i++)
	{
		list.addFront(10*(i+1));
	}

	list.addBack(70);

	if (list.size() == 8) return true;
	else return false;
}

bool TestSuite::test14() //addFront on a list with many elements
{
	LinkedListOfInts list;
	
	for (int i = 0; i < 7; i++)
	{
		list.addBack(10*(i+1));
	}

	list.addFront(70);

	if (list.size() == 8) return true;
	else return false;
}


//ADDING AND REMOVING
bool TestSuite::test15() //size returns correct value after multiple adds and removeFronts
{
	LinkedListOfInts list;
	
	list.addFront(70);
	list.removeFront();
	list.addFront(70);
	list.removeFront();

	if (list.size() == 0) return true;
	else return false;
}

bool TestSuite::test16() //size returns correct value after multiple adds and removeBacks
{
	LinkedListOfInts list;
	
	list.addBack(70);
	list.removeBack();
	list.addBack(70);
	list.removeBack();

	if (list.size() == 0) return true;
	else return false;
}

//SEARCH TESTS
bool TestSuite::test17() //search returns false on empty list
{
	LinkedListOfInts list;
	
	if (!list.search(10)) return true;
	else return false;
}

bool TestSuite::test18() //search returns false when value not in list 
{
	LinkedListOfInts list;
	list.addFront(10);	

	if (!list.search(20)) return true;
	else return false;
}

bool TestSuite::test19() //search returns true if value is in large list
{
	LinkedListOfInts list;
	
	for (int i = 0; i < 20; i++)
	{
		list.addBack(10*(i+1));
	}

	if (list.search(10)) return true;
	else return false;
}

//REMOVE TESTS
bool TestSuite::test20() //removeFront decrements size
{
	LinkedListOfInts list;
	list.addFront(10);
	list.addFront(20);
	int init_size = list.size();
	list.removeFront();
	if (list.size() == init_size - 1) return true;
	else return false;
}

bool TestSuite::test21() //removeBack decrements size
{
	LinkedListOfInts list;
	list.addFront(10);
	list.addFront(20);
	int init_size = list.size();
	list.removeBack();
	if (list.size() == init_size - 1) return true;
	else return false;
}

bool TestSuite::test32() //removeFront does not decrement size on empty list
{
	LinkedListOfInts list;
	list.removeFront();
	if (list.size() == 0) return true;
	else return false;
}

bool TestSuite::test33() //removeBack does not decrement size on empty list
{
	LinkedListOfInts list;
	list.removeBack();
	if (list.size() == 0) return true;
	else return false;
}

bool TestSuite::test22() //removeFront on empty list returns false
{
	LinkedListOfInts list;

	if (!list.removeFront()) return true;
	else return false;
}

bool TestSuite::test23() //removeBack on empty list returns false
{
	LinkedListOfInts list;

	if (!list.removeBack()) return true;
	else return false;
}

bool TestSuite::test24() //removeFront on one element list works
{
	LinkedListOfInts list;
	list.addFront(10);

	if (list.removeFront()) return true;
	else return false;
}

bool TestSuite::test25() //removeBack on one element list works
{
	LinkedListOfInts list;
	list.addFront(10);

	if (list.removeBack()) return true;
	else return false;
}

bool TestSuite::test35() //removeFront can handle more removes than possible
{
	LinkedListOfInts list;
	list.addFront(10);
	list.addFront(20);

	list.removeBack();
	list.removeBack();

	if (!list.removeBack()) return true;
	else return false;
}

bool TestSuite::test36() //removeBack can handle more removes than possible
{
	LinkedListOfInts list;
	list.addFront(10);
	list.addFront(20);

	list.removeBack();
	list.removeBack();

	if (!list.removeBack()) return true;
	else return false;
}

bool TestSuite::test26() //size preserved by removeFront on populated list
{
	LinkedListOfInts list;

	if (list.removeFront()) return true;
	else return false;
}

bool TestSuite::test27() //size preserved by removeBack on populated list
{
	LinkedListOfInts list;
	list.addFront(40);
	list.addFront(40);
	list.addFront(40);
	list.addFront(40);
	list.addFront(40);

	int init_size = list.size();

	list.removeBack();

	if (list.size() == init_size-1) return true;
	else return false;
}

bool TestSuite::test28() //addFront adds an element to the list
{
	LinkedListOfInts list;
	list.addFront(10);
	if (list.search(10)) return true;
	else return false;
}

bool TestSuite::test29() //addBack adds an element to the list
{
	LinkedListOfInts list;
	list.addBack(10);
	if (list.search(10)) return true;
	else return false;
}

//CONSTRUCTOR TESTS
bool TestSuite::test30() //constructor sets length to 0
{
	LinkedListOfInts list;
	if (list.size() == 0) return true;
	else return false;
}

bool TestSuite::test31() //constructor sets m_front to nullptr
{
	LinkedListOfInts list;
	try
	{
		list.toVector().at(0);
		return false;
	}
	catch (std::out_of_range & rte)
	{
		return true;
	}
}

bool TestSuite::test37() //addFront increments size on a nonempty list
{
	LinkedListOfInts list;
	list.addFront(10);
	list.addFront(20);
	int init_size = list.size();
	list.addFront(30);
	if (list.size() == init_size + 1) return true;
	else return false;
}

bool TestSuite::test38() //addBack increments size on a nonempty list
{
	LinkedListOfInts list;
	list.addBack(10);
	list.addBack(20);
	int init_size = list.size();
	list.addBack(30);
	if (list.size() == init_size + 1) return true;
	else return false;
}

bool TestSuite::test39() //addFront increments size after adding to an empty list
{
	LinkedListOfInts list;
	int init_size = list.size();
	list.addFront(10);
	if (list.size() == init_size + 1) return true;
	else return false;
}

bool TestSuite::test40() //addBack increments size after adding to an empty list
{
	LinkedListOfInts list;
	int init_size = list.size();
	list.addBack(10);
	if (list.size() == init_size + 1) return true;
	else return false;
}

bool TestSuite::test41() //removeFront removes an element to the list
{
	LinkedListOfInts list;
	list.addFront(10);
	list.addFront(20);
	list.addFront(30);
	list.removeFront();
	if (!list.search(30)) return true;
	else return false;
}

bool TestSuite::test42() //removeBack removes an element to the list
{
	LinkedListOfInts list;
	list.addFront(10);
	list.addFront(20);
	list.addFront(30);
	list.removeBack();
	if (!list.search(10)) return true;
	else return false;
}

bool TestSuite::test43() //search can find value after multiple adds and removeFronts
{
	LinkedListOfInts list;
	
	list.addFront(70);
	list.removeFront();
	list.addFront(70);

	if (list.search(70)) return true;
	else return false;
}

bool TestSuite::test44() //size returns correct value after multiple adds and removeBacks
{
	LinkedListOfInts list;
	
	list.addBack(70);
	list.removeBack();
	list.addBack(70);

	if (list.search(70)) return true;
	else return false;
}

bool TestSuite::test45() //removeFront updates m_front
{
	LinkedListOfInts list;
	
	list.addFront(80);
	list.addFront(90);
	list.removeFront();

	try
	{
		list.toVector().at(1);
		list.addFront(90);
		return false;
	}
	catch (std::out_of_range & rte)
	{
		return true;
	}
}

bool TestSuite::test46() //removeBack updates last node's m_next pointer to nullptr
{
	LinkedListOfInts list;
	
	list.addBack(80);
	list.addBack(90);
	list.removeBack();

	try
	{
		list.toVector().at(1);
		list.addBack(90);
		return false;
	}
	catch (std::out_of_range & rte)
	{
		return true;
	}
}