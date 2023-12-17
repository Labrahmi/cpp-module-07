#include "iter.hpp"

int main(void)
{
    float x[10] = {10.1f, 2.2f, 30.3f, 4.4f, 50.5f, 6.6f, 70.7f, 8.8f, 90.9f, 10.0f};
    print_array(x, 10);
    iter<float, void (*)(float&)>(x, 10, doubleElement<float>);
    print_array(x, 10);
    return 0;
}
