#include <iostream>
#include "person.h"

int main()
{
  Person person1 = Person("John Nash");
  Person person2 = Person("Gauss");
  Person person3 = Person("Albert Einstein");
  Person person4 = Person("Marie Curie");
  Person person5 = Person("Ada Lovelace");

  person1.befriend(&person2);
  person1.befriend(&person3);
  person1.printDetails();
  
  person2.befriend(&person1);
  person2.befriend(&person4);
  person2.befriend(&person3);
  person2.printDetails();

  person2.unfriend(&person1);
  person2.befriend(&person5);
  person2.printDetails();

}
