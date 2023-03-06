#pragma once
#include "Console.hpp"
#include <list>
using namespace std;

template<class T>
class List
{
public:
	list<T> lst;
	List() {}
	template<size_t N>
	List(T (*arr)[N])
	{
		for (T item : *arr)
		{
			lst.push_back(item);
		}
	}

	void AddFront(T item)
	{
		lst.push_front(item);
	}

	void Add(T item)
	{
		lst.push_back(item);
	}
	void Add(T item, long index)
	{
		typename list<T>::iterator it;
		it = lst.begin();
		advance(it, index);
		lst.insert(it, item);
	}

	T Get(long index)
	{
		typename list<T>::iterator it;
		it = lst.begin();
		advance(it, index);
		return *it;
	}
	long IndexOf(T item)
	{
		Console::Print(find(lst.begin(), lst.end(), item));
		return 0;
	}

	bool Exist(T item)
	{
		return find(lst.begin(), lst.end(), item) != lst.end();
	}

	long Count()
	{
		return lst.size();
	}

	void Print(bool newl = false)
	{
		for (T const& i : lst)
		{
			Console::Print(i,true);
		}
		if(newl)Console::newl();
	}
};