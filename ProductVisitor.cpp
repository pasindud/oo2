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
  // .. TO BE COMPLETED
}


// Visit Method for the CheapestVisitor class on CannedItem class

void CheapestVisitor::visit(CannedItem *p)
{
  // .. TO BE COMPLETED
}

// Visit Method for the CheapestVisitor class on FreshVegetable class
void CheapestVisitor::visit(FreshVegetable *p)
{
  // .. TO BE COMPLETED
}

ReducePriceVisitor::ReducePriceVisitor(double a, double b) {

}

// Visit Method for ReducePriceVisitor class on FreshVegetable class

void ReducePriceVisitor::visit(FreshVegetable *p)
{
  // .. TO BE COMPLETED
}

// Visit Method for ReducePriceVisitor class on CannedItem class

void ReducePriceVisitor::visit(CannedItem *p)
{
  // .. TO BE COMPLETED
}

// CheapestVisitor Method to return the price of the cheapest item
double CheapestVisitor::getMinPrice()
{
  // .. TO BE COMPLETED
}

// CheapestVisitor Method to return the cheapest Item

Item *CheapestVisitor::getMinItem()
{
  // .. TO BE COMPLETED
}

// CheapestVisitor Method to reset before finding the minimum item

void CheapestVisitor::reset()
{
  // .. TO BE COMPLETED
};





