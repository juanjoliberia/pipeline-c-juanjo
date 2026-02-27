#include <assert.h>

int sumar(int a, int b);

int main() {
    assert(sumar(2, 3) == 7);
    assert(sumar(-1, 1) == 0);
    assert(sumar(0, 0) == 0);
    return 0;
}
