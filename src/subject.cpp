#include "subject.h"

void Subject::attach(std::shared_ptr<Observer> observer)
{
  m_observers.push_back(observer);
}

void Subject::detach(std::shared_ptr<Observer> observer)
{
  std::erase(m_observers, observer);
}

void Subject::setState(const std::string new_state)
{
  m_state = new_state;
  notify();
}

void Subject::notify()
{
  for (std::shared_ptr<Observer> observer : m_observers) 
  {
    observer->update(m_state);
  }
}