
#include "head.h"

using namespace std;


int main() {
    signal(SIGINT, handleSignal);

    string input;
    char* username = getenv("USER");
    string prompt = username != nullptr ? username : "user";

    while (true) {
        char* cwd = get_current_dir_name();
        prompt += ":" + string(cwd) + "> ";
        free(cwd);

        char* line = readline(prompt.c_str());
        if (line == nullptr) {
            break;
        }

        if (strcmp(line, "") == 0) {
            free(line);
            continue;
        }

        add_history(line);
        input = line;
        free(line);

        if (input == "exit") {
            break;
        }

        vector<string> tokens = tokenizeInput(input);

        if (!tokens.empty()) {
            string command = tokens[0];
            if (command == "cd") {
                if (tokens.size() > 1) {
                    chgdir(tokens[1]);
                } else {
                    struct passwd* pw = getpwuid(getuid());
                    if (pw != nullptr && pw->pw_dir != nullptr) {
                        chgdir(pw->pw_dir);
                    } else {
                        cerr << "home directory not found :(" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
