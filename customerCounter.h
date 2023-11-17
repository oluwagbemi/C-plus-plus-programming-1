#ifndef _CUSTOMER_COUNTER_H_
#define _CUSTOMER_COUNTER_H_

#include <string>
#include <iostream>

class CustomerCounter{
 private:
  int maximum_customers;
  int customer_count;
 public:
  CustomerCounter(int maximum_customers);
  //  virtual ~CustomerCounter();
  void add(int numberCustomers);
  void substract(int numberCustomers);
  void printCustomers();
};

#endif
