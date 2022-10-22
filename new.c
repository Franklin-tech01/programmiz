#include <stdio.h>                                                                                 
#include <string.h>
int main()
{   
        char name[25]; //bytes
        int age;

        printf("what is your name?:\n"); 
        // scanf("%s", &name);
        fgets(name, 25, stdin);// this function helps us include whites spaces in our c program  
        name[strlen(name)-1] = '\0';// it helps of get rid of the new line


        printf("what is your age?:\n"); 
        scanf("%d", &age);
        

        printf("hello %s how are you\n", name);
        printf("hello you are %d years old\n", age);
        return 0;                                                                                                               
}                                                                                                                            