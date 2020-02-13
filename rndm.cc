#include <iostream>
#include <TRandom3.h>
int main()
{
  TRandom3 generator;
  std::cout<<generator.Poisson(5)<<std::endl;
}
