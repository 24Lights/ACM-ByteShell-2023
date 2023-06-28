
#include "head.h"
using namespace std;

void executeCommand(const vector<string>& tokens) {
    const char** args = new const char*[tokens.size() + 1];
    for (size_t i = 0; i < tokens.size(); ++i) {
        args[i] = tokens[i].c_str();
    }
    args[tokens.size()] = nullptr;

    pid_t pid = fork();
    if (pid == 0) {
        execvp(args[0], const_cast<char* const*>(args));
        cerr << "Command execution is failed" << endl;
        exit(EXIT_FAILURE);
    } else if (pid > 0) {
        int status;
        waitpid(pid, &status, 0);
    } else {
        cerr << "Forking has failed" << endl;
    }

    delete[] args;
}
