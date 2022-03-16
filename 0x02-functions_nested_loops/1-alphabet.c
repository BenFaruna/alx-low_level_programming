#include <unistd.h>

void print_alphabet(void)
{
        int i = 0;
        char ch[] = "abcdefghijklmnopqrstuvwxyz";

        while (i < 26)
        {
            write(1, &ch[i], 1);
            i++;
        }
        write(1, "\n", 1);
}
