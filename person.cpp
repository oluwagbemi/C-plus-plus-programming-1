#include "person.h"

Person::Person(std::string name){
  this->name = name;
}

void Person::befriend(Person * person){
  this->friends.push_back(person);
}
void Person::unfriend(Person * person){
  for (int i=0; i< this->friends.size() ; i++ )
    {
    if(this->friends[i]->getName() == person->getName())
      {
	this->friends.erase(this->friends.begin() + i);
	return;
      }
  }
  
}
std::string Person::getName(){
  return this->name;
}
void Person::printDetails(){
  std::cout << "The person's name is: " << this->getName() << std::endl;
  std::cout << "The person's friends are: \n";
  for (Person* p : this->friends)
    std::cout << p->getName() << std::endl;
}
