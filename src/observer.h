#pragma once
#include <string>

class Observer
{
  public:
    std::string getState();
    void update(std::string);

  private:
    std::string m_state;
};
