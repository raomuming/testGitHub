#include <iostream>

class Person{
public:
  Person();
  void sayHello();
  void sayLove();
private:
    string& name;
    int age;
    int times;
};
