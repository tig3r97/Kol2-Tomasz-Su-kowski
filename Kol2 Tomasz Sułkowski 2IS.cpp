//TOMASZ SUŁKOWSKI 2IS
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;


class Tree 
   {

       public:

Tree(const char* nw, double wys) {   //KONSTRUKTOR
    nejm = nw;

height = wys;
};
string name()
{
    return name;
}


const char* Name(const char* nw = nullptr)
	{
if (nw == nullptr)
	{const char* abc = nejm.c_str();	return abc;}
		else

{nejm = nw;}
	}

    ~Tree(){branch.clear();   //DESTRUKTOR
    }

	double high(double wys = 0)
	{
		if (wys == 0)
		{return height;}
		else
		{height = wys;}}

	void Branch_b(Branch* Branch)
	{if (branch != NULL)
{branch.push_back(Branch);}}

Branch* Branch_b(size_t howmany = 0)
{if (howmany > branch.size)
			return nullptr;
		else if (branch.size == 0)
			return nullptr;
		else
		{return branch[howmany];}}

	const size_t Branch_b(){
		size_t howmany = branch.size();
		return howmany;}

private:
	string nejm;
	double height;
	vector<Branch*> branch; 
};

class Branch {
public:



	double Dlg(double dlg = 0)
	{
		if (dlg == 0)
		{
			return length;
		}
		else
		{
			length = dlg;
		}
	}

	size_t leaf( size_t howmanyleaf = 0)
	{if (howmanyleaf = 0)
		{return howmanyleaf;}
		else
		{leaf = howmanyleaf;}}

private:
	double length = 0.;
	size_t leaf = 0;
};


int main() {
	Tree t1("lipa", 20);
	Tree t2("dąb", 100); 

t1.branch_b(new Branch); 

	t1.Branch_b(new Branch); 

	Branch* b1 = t1.Branch_b(0); 

	b1->dlg(5); 

	b1->leaf(100); 

	Branch* b2 = t2.branch(1); 

	b2->dlg(3); 

	b2->leaf(70); 

	cout << t1.name() << " ma galezi: " << b1.branch() << endl;

	cout << t2.name() << " ma galezi: " << b2.branch() << endl;

}