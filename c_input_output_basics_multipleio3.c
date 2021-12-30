//multi input and output:-

#include <stdio.h>

int main(void)
{
    int i;
    float f;
    double d;
    char c;
    
    printf("Enter the int, float, double n char:");
    scanf("%c%d%f%lf", &c,&i,&f,&d);
    
    printf("Print the entered no: %d\n",i);
    printf("Print the float entered no: %f\n",f);
    printf("Print the double entered value:%lf\n",d);
    printf("Print the char Value : %c\n",c);
    printf("Print the char Value:%d\n",c);
    return 0;
}
//output:-
/*Enter the int, float, double n char:m
12
123.5638
1236589.15165156  
Print the entered no: 12
Print the float entered no: 123.563797
Print the double entered value:1236589.151652
Print the char Value : m
Print the char Value:109*/

//

//Ex:- 

#include <stdio.h>

int main(void)
{
    int i;
    float f;
    double d;
    char c;
    
    printf("Enter the int, float, double n char:");
    scanf("%c%d%f%lf", &c,&i,&f,&d);
    
    printf("Print the entered i/o %c\n%d\n%f\n%lf\n", c,i,f,d);
    return 0;
}
//output:-
/*
Enter the int, float, double n char:m
120
123.562262
13221313.216515615161
Print the entered i/o m
120
123.562263
13221313.216516
*/
