/*
    Introduction to functions in C

    You cannot create a function inside another function
*/

#include <stdio.h>

//Function format
//<return_type>, <function_name> (<arguments (parameters, inputs)> or empty)
//{
//}

//The function doesnt take any arguments and doesn't return any value
void print_course(void){
    printf("You are in COP%d\n", 2271);
}

void draw_circle(void){
    printf("    *   *\n");
    printf(" *         *\n");
    printf("*   o   o   *\n");
    printf("*           *\n");
    printf(" *    U    *\n");
    printf("    *   *\n");
}

void draw_caret(void){
    puts("     / \\");
    puts("    /   \\");
    puts("   /     \\");
}

void draw_line(void){
    puts("  /_______\\");
}

void draw_legs(void){
    puts("    /   \\");
    puts("   /     \\");
    puts("  /       \\");
}

void draw_triangle(void){
   draw_caret();
   draw_line();
}

void draw_stick_figure(void){
    draw_circle();
    draw_triangle();
    draw_legs();
}

int main(){

    //Function call (Stick figure)
    draw_stick_figure();

return 0;

}