//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include <iostream>
#include "Hyperlink.h"
#include "IDirectionable.h"

using namespace std;

class TopTenList : public IDirectionable
{
  private:
  	vector<Hyperlink> _list;

  public:
  	TopTenList();
  	void display_forward();
  	void display_backward();
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
};

#endif
