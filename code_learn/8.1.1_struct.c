#include <stdio.h>
#include <string.h>

struct Student
{
    char name[10];
    int age;
    int score;
};

       int
       main()
{
    struct Student s1;
    strcpy(s1.name ,"ao");
    printf("%s\n",s1.name);
}
