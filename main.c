#include <stdio.h>

void welcome();

int main(int argc, char* argv[])
{
    // Init
    int loop = 1;
    char input[100];

    while(loop)
    {
        welcome();
        printf("Your Choice: ");
        scanf("%s", input);
    }
    return 0;
}

void welcome()
{
    puts("Phone Book v0.1");
    puts("Copyright (c) 2018 Star. All rights reserved.\n");

    puts("1. Add Profile");
    puts("2. Search Profile");
    puts("3. Edit Profile");
    puts("4. Delete Profile");
    puts("5. Settings");

    puts("0. Exit");
}
