#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];

    float maths;
    float english ;
    float language ;
    float marks;
    printf ("student name:");
    scanf("%s",name);
    printf("The mark of maths:");
    scanf("%f",&maths);
    printf("The mark of english:");
    scanf("%f",&english);
    printf("The mark of language:");
    scanf("%f",&language);
    marks = (maths+english+language)/3;
    printf("The total marks is :%2f\n",marks);
    if(marks<40) printf("student %s is failed", name);
    else printf("student %s is Pass", name);
    return 0;
}