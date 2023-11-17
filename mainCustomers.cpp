#include "customerCounter.h"

int main()
{
  CustomerCounter customerCounter = CustomerCounter(20);
  customerCounter.printCustomers();
  customerCounter.add(10);
  customerCounter.printCustomers();
  customerCounter.substract(5);
  customerCounter.printCustomers();
  customerCounter.add(17);
  customerCounter.printCustomers();
  customerCounter.substract(20);
  customerCounter.printCustomers();

}
