#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
};

int main()
{
    struct student record = {1, "Reaz",90.5};
    struct student *ptr;
    ptr = &record;

    printf("Id is : %d \n",ptr->id);
    printf("Name is : %s \n", ptr->name);
    printf("Percentage is : %f \n",ptr->percentage);
    return 0;

}
