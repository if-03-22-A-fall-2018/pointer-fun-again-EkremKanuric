#include <stdio.h>
#include <string.h>
struct PlayStruct{
  int int_value;
  double double_value;
  char a_string[64];
};

void print_struct(struct PlayStruct ps, struct PlayStruct* pps);
void change_struct(struct PlayStruct ps, struct PlayStruct* pps);
void print_string(char* string_to_print);
void change_string(char* string1, char** p_string);
