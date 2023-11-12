#include <string>
#include "observer.h"

std::string Observer::getState()
{
  return m_state;
}

void Observer::update(std::string new_state)
{
  m_state = new_state;
}
