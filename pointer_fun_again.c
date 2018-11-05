/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			Pointer_Fun_Again
 * Author:			Ekrem Kanuric
 * ----------------------------------------------------------
 * Description:
 * Practice of pointerusage with structs and strings.
 *
 * ----------------------------------------------------------
 */
#include "pointer_fun_again.h"

int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct = {1,1,"EkremWasHere"};
  struct PlayStruct* play_struct_pointer = &play_struct;

  print_struct(play_struct,play_struct_pointer);
  change_struct(play_struct,play_struct_pointer);
  print_struct(play_struct,play_struct_pointer);
  /*Both values get changed to 3,5 ,SomeText. The reason behind that is the same memory adress*/
    print_string(play_struct.a_string);

    char another_string[16]="Hello";
    char* p = another_string;
    char** another_string_pointer=&p;

    change_string(play_struct.a_string,another_string_pointer);

    print_string(play_struct.a_string);
    print_string(another_string);

    return 0;
}
void print_struct(struct PlayStruct ps, struct PlayStruct* pps){
  printf("Values of struct ps: %d, %lf, %s\n", ps.int_value,ps.double_value,ps.a_string);
  printf("Values of struct ps: %d, %lf, %s\n", pps->int_value,pps->double_value,pps->a_string);
}
void change_struct(struct PlayStruct ps, struct PlayStruct* pps){
  ps.int_value = 2;
  ps.double_value = 2;
  strcpy(ps.a_string, "Ok");

  pps->int_value = 3;
  pps->double_value = 5;
  strcpy(pps->a_string, "SomeText");
}
void print_string(char* string_to_print){
  printf("%s\n", string_to_print);
}
void change_string(char* string1, char** p_string){
  string1[2] = '\0';
  p_string[1] = '\0';
}
