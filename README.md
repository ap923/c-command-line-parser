# c-command-line-parser

 C program that uses getopt() to parse its command line. Assuming that I an writing a program named my_uniq to report or filter out repeated lines
in a file (the same as the uniq tool in Linux). The arguments in the command lines are also the same as
those for uniq:
my_uniq [−c|−d|−u] [−f fields] [−s char] [input_file [output_file]]

The program is to extract the options, option parameters, and other arguments in the command line.
Note: the program just prints the information on the screen, just as the example program for getopt() does
