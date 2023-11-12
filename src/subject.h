#pragma once
#include <memory>
#include <vector>
#include <string>
#include "observer.h"

class Subject
{
  public:
    void attach(std::shared_ptr<Observer>);
    void detach(std::shared_ptr<Observer>);
    void setState(const std::string);
    void notify();
  
  private:
    std::vector<std::shared_ptr<Observer>> m_observers;
    std::string m_state;
};