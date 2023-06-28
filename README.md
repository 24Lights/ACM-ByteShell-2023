# ACM-ByteShell-2023

I have implemented a simple Shell using C++ programming language. 


Map of contents:

head.h ----> contains the header files and necessary function aliases

main.cpp ----> main file

sighand.cpp------> Signal handler

tokenize_Sep.cpp------->tokenizer

chgdir ------> directory changer

cmdexe.cpp------> command executer

highl_op.cpp-------> highlights output in red

Compile  :
$ g++ -c tokenize_sep.cpp
$ g++ -c cmdexe.cpp
$ g++ -c sighand.cpp
$ g++ -c chgdir.cpp
$ g++ -c highl_op.cpp
$ g++ -c main.cpp

Execute:
$ g++ -o myshell tokenize_sep.o cmdexe.o sighand.o chgdir.o highl_op.o main.o -lreadline


Resources used :

https://www.geeksforgeeks.org/introduction-of-process-management/
https://hackernoon.com/building-a-linux-shell-part-v-k61a3uai
https://www.geeksforgeeks.org/difference-between-process-parent-process-and-child-process/
https://gist.github.com/vratiu/9780109 (for colors for highlighting)


