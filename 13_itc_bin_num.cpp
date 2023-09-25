#include <string>
using namespace std;

long long itc_bin_num(long long number) {
    if (number == 0) {
        return 0;
    }
    string binary = "";
    while (number != 0) {
        int digit = number % 2;
        binary = to_string(digit) + binary;
        number /= 2;
    }
    return stoll(binary);
}
