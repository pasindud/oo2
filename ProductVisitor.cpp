#include "ProductVisitor.h"
#include "Product.h"

// Accept() method for all products that accept a
// ProductVisitor

void FreshVegetable::accept(ProductVisitor *v)
{ 
  v->visit(this);
};


void CannedItem::accept(ProductVisitor *v)
{ 
  v->visit(this);
};



void Package::accept(ProductVisitor *v)
{ 
  v->visit(this);
};

// Visit method for ProductVisitor class on Package class
void ProductVisitor::visit(Package *p)
{
  for (int i = 0; i < p->size(); i++)
  {
    p->getProduct(i)->accept(this);
  }
  // .. TO BE COMPLETED (Done)
}

// Sets the min item.
void CheapestVisitor::setMinItem(Item *p) {
  if (currentMinPrice == -1) { 
    this->currentMinPrice = p->getPrice();
    this->minItem = p;
  } else if (p->getPrice() < currentMinPrice) {
    this->currentMinPrice = p->getPrice();
    this->minItem = p;
  }
}

// Visit Method for the CheapestVisitor class on CannedItem class
void CheapestVisitor::visit(CannedItem *p)
{ 
  this->setMinItem(p);
  // .. TO BE COMPLETED (Done)
}

// Visit Method for the CheapestVisitor class on FreshVegetable class
void CheapestVisitor::visit(FreshVegetable *p)
{ 
	this->setMinItem(p);  
  // .. TO BE COMPLETED (Done)
}

ReducePriceVisitor::ReducePriceVisitor(double a, double b) {
	this->pFreshVeg = a;
	this->pCanned = b;
}

//reduce price
void ReducePriceVisitor::reducePrice(Item *p,double percentage) {
	p->setPrice((p->getPrice())*percentage);
}
// Visit Method for ReducePriceVisitor class on FreshVegetable class

void ReducePriceVisitor::visit(FreshVegetable *p)
{
	this->reducePrice(p,this->pFreshVeg);
  // .. TO BE COMPLETED (Done)
}

// Visit Method for ReducePriceVisitor class on CannedItem class

void ReducePriceVisitor::visit(CannedItem *p)
{
	this->reducePrice(p,this->pCanned);
  // .. TO BE COMPLETED (Done)
}

// CheapestVisitor Method to return the price of the cheapest item
double CheapestVisitor::getMinPrice()
{
  return this->currentMinPrice;
}

// CheapestVisitor Method to return the cheapest Item
// If more than one item is equally cheap, 
// this returns the first item which was cheap.
Item *CheapestVisitor::getMinItem()
{
  return this->minItem;
  // .. TO BE COMPLETED (Done)
}

// CheapestVisitor Method to reset before finding the minimum item

void CheapestVisitor::reset()
{
  this->currentMinPrice = -1;
};





