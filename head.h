#ifndef HEAD_H
#define HEAD_H

// LIBS
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <sstream>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <pwd.h>
#include <cstdlib>
#include <cstdio>
#include <signal.h>
#include <readline/readline.h>
#include <readline/history.h>

//function declarations
vector<string> tokenizeInput(const string& input);
void cmdexe(const vector<string>& tokens);
void sighand(int signal);
void chgdir(const string& path);
void highl_op(const string& output);

#endif
