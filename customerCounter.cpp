#include "customerCounter.h"

CustomerCounter::CustomerCounter(int maximum_customers){
  this->maximum_customers = maximum_customers;
  this->customer_count = 0;
}

void CustomerCounter::add(int numberCustomers){
  this->customer_count = this->customer_count + numberCustomers;
  if(this->customer_count > this->maximum_customers)
    {
      this->customer_count = this->maximum_customers;
      std::cout << "Maximum number of customers reached\n";
    }
}

void CustomerCounter::substract(int numberCustomers){
  this->customer_count = this->customer_count - numberCustomers;
  if(this->customer_count < 0)
    {
      this->customer_count = 0;
      std::cout << "Minimum number of customers reached\n";
    }
}

void CustomerCounter::printCustomers(){
  std::cout << "The current number of customers is: " << this->customer_count << "\n";
}
