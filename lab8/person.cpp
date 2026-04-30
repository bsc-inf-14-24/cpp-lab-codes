#include "Person.h"

// Default constructor
Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string name, float newWeight) {
    mFirstName = name;
    mWeight = newWeight;
    mAge = 0;
}

// Destructor
Person::~Person(){
}

// Operator overloading (+)
float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}