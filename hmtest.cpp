#include<iostream>

#define THISISMYCONSTANT
#define INT_TEN 10
#define PRINT_HELLO_WORLD printf\
("Hel\
lo, wo\
rld")

#define SQUARE(x) ((x) * (x))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define PRINT(...) printf(__VA_ARGS__)

int main(int argc, const char** argv) {
 std::cout << INT_TEN <<  " ";

PRINT_HELLO_WORLD;

std::cout << "This is a very long \
 string to print\
  to our close" <<  std::endl;

int x = 5;
std::cout << "Square " << x << " = " << SQUARE(x) << std::endl;

std::cout << "Square " << x + 1 << " = " << SQUARE(x + 1) << std::endl;
PRINT("%s %s %s\n", "Hello", "C++", "World");
std::cout <<
#include "hm77.cpp"
<< std::endl;

#ifdef THISISMYCONSTANT
printf("%d\n", 2);
#endif



#undef THISISMYCONSTANT

  return 0;
}
