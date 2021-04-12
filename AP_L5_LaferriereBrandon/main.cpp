#include "DynTempStack.h"
#include "DynTempQueue.h"
#include "Animals.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// DynTempStack Objs
	DynTempStack<int> tStack1;
	DynTempStack<Animals> tStack2;
	int catchVar;
	

	DynTempQueue<string> tQueue1;
	DynTempQueue<Animals> tQueue2;

	// push 6 numbers
	for (int i = 0; i <= 25; i = i+5)
	{
		cout << "Pushing: " << i << endl;
		tStack1.push(i);
		/*tStack1.print();*/
	}
	// pop 4 numbers
	for (int i = 0; i < 4; i++)
	{
		cout << "Pop: ";
		tStack1.pop(catchVar);
		cout << catchVar << endl;
	}

	// push 4 animals
	tStack2.push(Animals("Iguana", "Lizard"));
	tStack2.push(Animals("BigBoi", "Whale"));
	tStack2.push(Animals("Iguana", "Lizard"));
	tStack2.push(Animals("Iguana", "Lizard"));
	tStack2.push(Animals("Iguana", "Lizard"));
	tStack2.push(Animals("Iguana", "Lizard"));

	while(!tStack2.isEmpty())
	{
		Animals animal;

		cout << "Pop: ";
		tStack2.pop(animal);
		cout << animal << endl;
	}

	// Enqueue strings 
	tQueue1.enqueue("Cat");
	tQueue1.enqueue("Dog");
	tQueue1.enqueue("Lizard");
	tQueue1.enqueue("Monkey");
	tQueue1.enqueue("Rabbit");
	tQueue1.enqueue("Bird");

	while (!tQueue1.isEmpty())
	{
		string value;
		tQueue1.dequeue(value);
		cout << value << " ";
	}

	tQueue2.enqueue(Animals("Iguana", "Lizard"));
	tQueue2.enqueue(Animals("BigBoi", "Whale"));
	tQueue2.enqueue(Animals("Iguana", "Lizard"));
	tQueue2.enqueue(Animals("Iguana", "Lizard"));
	tQueue2.enqueue(Animals("Iguana", "Lizard"));
	tQueue2.enqueue(Animals("Iguana", "Lizard"));
	

	while (!tQueue2.isEmpty())
	{
		Animals animal;
		tQueue2.dequeue(animal);
		cout << animal << " ";

	}




}