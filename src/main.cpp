#include "utils.cpp"


int main() {
    double a = 5, b = 10;
    double c = plus(a, b);
    double r = minus(b, a);
    double y = umnozhenie(a, b);
    std::cout << c << std::endl;
    std::cout << r << std::endl;
    std::cout << y << std::endl;

    return 0;
}