#include <string>
using namespace std;

long long itc_oct_num(long long number) {
    if (number == 0) {
        return 0;
    }
    string binary = "";
    while (number != 0) {
        int digit = number % 8;
        binary = to_string(digit) + binary;
        number /= 8;
    }
    return stoll(binary);
}
