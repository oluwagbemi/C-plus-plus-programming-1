#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include <iostream>
#include <vector>

class Person{
 private:
  std::string name;
  std::vector<Person*> friends;
 public:
  Person(std::string name);
  void befriend(Person * person);
  void unfriend(Person * person);
  std::string getName();
  void printDetails();
};

#endif
