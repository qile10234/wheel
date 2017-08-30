#include "List.h"


template<typename T>
List::List()
{
	init();
}


template<typename T>
void List<T>::init()
{
	header = new ListNode<T>;
	trailer = new ListNode<T>;
	header->succ = trailer; header->pred = NULL;
	trailer->pred = header; trailer->succ = NULL;
	_size = 0;
}
template<typename T>
List::~List()
{
}
template<typename T>
ListNodePosi(T) insertAsFirst(T const & e)
{
	return ListNodePosi(T)();
}
template<typename T>
ListNodePosi(T) insertAsLast(T const & e)
{
	return ListNodePosi(T)();
}
