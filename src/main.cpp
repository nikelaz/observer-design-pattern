#include <iostream>
#include "observer.h"
#include "subject.h"

int main() {
  // create observers
  auto observer_instance = std::make_shared<Observer>();
  auto observer_instance_2 = std::make_shared<Observer>();

  // create subject
  Subject subject_instance;

  // attach observers to subject
  subject_instance.attach(observer_instance);
  subject_instance.attach(observer_instance_2);

  // update subject state
  subject_instance.setState("foo");
  std::cout << "Subject state updated" << std::endl;

  // print state of observers
  // (their state should already be updated)
  std::cout << "observer_instance state: " << observer_instance->getState() << std::endl;
  std::cout << "observer_instance_2 state: " << observer_instance_2->getState() << std::endl;

  return 0;
}
