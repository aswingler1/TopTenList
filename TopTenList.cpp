//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"
#include "IDirectionable.h"


using namespace std;

TopTenList::TopTenList()
{
	_list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
	_list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
	return _list[index-1];
}


void TopTenList::display_forward()
{
	for(int i = 0; i < _list.size(); i++)
	{
		cout<<_list[i].text<<endl;
	}
}

void TopTenList::display_backward()
{
	for(int i = _list.size(); i > 0; i--)
	{
		cout<<_list[i].text<<endl;
	}
}