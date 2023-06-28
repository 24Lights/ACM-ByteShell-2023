#include "head.h"

using namespace std;

void sighand(int signal) {
    if (signal == SIGINT) {
        std::cout << std::endl;
        rl_on_new_line();
        rl_replace_line("", 0);
        rl_redisplay();
    }
}
