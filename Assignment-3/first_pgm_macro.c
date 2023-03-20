# include <stdio.h>
#include <stdarg.h>
# define print(fmt, ...) printf(fmt, ##__VA_ARGS__);
int main()
{
        char* data = "EmbedUR", *data_1 = "Engineer", *data_2 = "EmbedUR";
        print("Welcome to %s\n",data);
        print("Hello to %s: Welcome to %s",data_1,data_2);
}


Output:

Welcome to EmbedUR
Hello to Engineer: Welcome to EmbedUR

