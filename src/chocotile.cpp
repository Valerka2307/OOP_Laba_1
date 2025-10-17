#include <../include/chocotile.hpp>

int choco_sep(int n, int m) {
    if (n <= 0 || m <= 0) {
        return -1;
    }
    return (n - 1) + (m - 1);
}
