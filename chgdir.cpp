#include "head.h"

using namespace std;

void chgdir(const string& path) {

    if (chdir(path.c_str()) != 0) {
        std::cerr << "Directory change failed " << std::endl;
    }


}
