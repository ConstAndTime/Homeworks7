#include<iostream>
#include<ctime>
//1
#define PROVERKA(x,y) ((((x) >= (0)) && ((x) < (y))) ? ("YES") : ("NO"))

//2
#define MASVALUE ((*(*arr) + (2)) + (2))

//3
#define COMBACK ((sizeof (ar1)) / (sizeof (*ar1)))




int main (int argc, const char** argv) {

//1
int x = 8;
int y = 11;
  std::cout << PROVERKA(x,y) << std::endl;
  std::cout << std::endl;

//2
int n = rand() % 90;
  int arr[5][5] = {n};
  std::cout << MASVALUE << std::endl;
std::cout << std::endl;

//3
int ar1[15];
std::cout << COMBACK << std::endl;


  return 0;
}
