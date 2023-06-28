#include "head.h"

using namespace std;

int main(void):
{
  vector<string> tokenizeInput(const string& input) {
    vector<string> tokens;
    istringstream iss(input);
    string token;
    while (iss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

}
