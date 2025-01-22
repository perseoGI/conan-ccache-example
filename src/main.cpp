#include "app.h"
#include <vector>
#include <string>

int main() {
    app();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    app_print_vector(vec);
}
