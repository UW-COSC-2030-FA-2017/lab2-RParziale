// LinkedList.cpp

// tom bailey   0745  5 oct 2010
// Definition of methods for the List class.

//Ryan Parziale
//COSC2030
//Lab2
//9-18-2017

#include "LinkedList.h"

#include <utility>


List::List()
	: first_(NULL)
{
}


List::List(const List & other)
	: first_(clone(other.first_))
{
}


List::~List()
{
	while (!empty())
	{
		removeFirst();
	}
}


const List & List::operator=(const List & other)
{
	// check for list = list
	if (&other != this)
	{
		// clear the current contents of this List
		this -> ~List();
		// and get a copy of other
		first_ = clone(other.first_);
	}

	return *this;
}


bool List::empty() const
{
	return first_ == NULL;
}


void List::insertAsFirst(double x)
{
	first_ = new Node(x, first_);
}

//Inserts the entry as the last element in the list.
void List::insertAsLast(double x)
{
	//If the list is empty, inserting an entry in the first position is the same as inserting it in the last position
	if (empty())
	{
		insertAsFirst(x);
	}
	else
	{
		
		Node * ptr = first_;
		int index = 0;
		//Go until the last entry in the list
		while (index < (size()-1))
		{
			ptr = ptr->next_;
			index++;
		}
		//Set the last entry to point to a new entry, one that contains the value entered and points to NULL
		ptr->next_ = new Node(x);
		
	}

	return;
}

double List::removeFirst()
{
	double item = first_->entry_;
	Node * tempPtr = first_;
	first_ = first_->next_;
	delete tempPtr;
	return item;
}


//Returns the size of the list. If the list is empty, the size is returned as 0.
int List::size()
{

	int size = 0;
	//If the list is empty, the size is 0
	if (!empty())
	{
		Node * ptr = first_;
		while (ptr != NULL)
		{
			size++;
			ptr = ptr->next_;
		}
	}

	return size;


}

//Returns the sum of all the entries in the list. If the list is empty, the sum is returned as 0.
double List::sum()
{
	double sum = 0;
	//Is the list is empty, the sum is 0
	if (!empty())
	{
		Node * ptr = first_;
		while (ptr != NULL)
		{
			sum += ptr->entry_;
			ptr = ptr->next_;
		}


	}



	return sum;
}


void List::print(ostream & outfile) const
{
	outfile << "[ ";
	if (!empty())
	{
		// The first entry is printed separately because no comma
		// is needed.
		outfile << first_->entry_;
		Node * ptr = first_->next_;
		while (ptr != NULL)
		{
			outfile << ", " << ptr->entry_;
			ptr = ptr->next_;
		}
	}
	outfile << " ]";
}


// Iterative version of clone.
// This version walks down the linked structure making a
//   new Node for each double in the structure.
Node * List::clone(Node * ptr)
{
	if (ptr == NULL)
	{
		return NULL;
	}
	Node * first = new Node(ptr->entry_);
	Node * last = first;
	ptr = ptr->next_;
	while (ptr != NULL)
	{
		last->next_ = new Node(ptr->entry_);
		last = last->next_;
		ptr = ptr->next_;
	}
	return first;
}


//// Recursive version of clone.
//// This version handles two cases, a linked structure with
////   no Nodes, and a linked structure with one or more
////   Nodes.
//Node * List::clone( Node * ptr )
//{
//   if( ptr == NULL )
//   {
//      return NULL;
//   }
//   return new Node( ptr->entry_, clone( ptr->next_ ) );
//}


ostream & operator<<(ostream & outfile, const List & list)
{
	list.print(outfile);
	return outfile;
}


