#pragma once
#include "MyData.hpp"
class MyList
{

public:
	class MyListElement
	{
	public:
		//Variablen	   
		MyListElement* m_next;
		MyData* m_data;

		//Ctor
		MyListElement();
		~MyListElement();

		//Methoden
		void setNext(MyListElement &next);
		void setData(MyData &data);
		MyListElement* getNext();
		MyData* getData();
		
	};

private:
	unsigned int m_listsize = 0;
	MyListElement* m_first;
	MyListElement* m_last;


public:
	MyList();
	MyList(const MyList&orgi);
	~MyList();

	//Methoden
	void push_back(const MyData&data);
	void pop_back();
	void clear();
	bool empty()const ;
	unsigned int size()const;
	void print()const;

	MyData& front()const;
	MyData& back()const;
	//Operatorüberladung 
	MyList &operator=(const MyList&);
	MyList operator+(const MyList&);
};




