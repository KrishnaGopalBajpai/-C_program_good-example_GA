// Interger input/output 
#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter the int value:");
    scanf ("%d",&i);
    printf("Print the entered no: %d", i);
}
// output:-
/*Enter the int value:12
Print the entered no: 12*/

//Flot and Double input and output
#include <stdio.h>

int main(void)
{
    int i;
    float f;
    double d;
    printf("Enter the int value:");
    scanf ("%d",&i);
    printf("Enter the float value:");
    scanf ("%f",&f);
    printf("Enter the double value:");
    scanf("%lf",&d);
    
    printf("Print the entered no: %d\n",i);
    printf("Print the float entered no: %f\n",f);
    printf("Print the double entered value:%lf\n",d);
    return 0;
}
//output:-
/*Enter the int value:10
Enter the float value:123.6654
Enter the double value:1235.56663161
Print the entered no: 10
Print the float entered no: 123.665398
Print the double entered value:1235.566632*/

// int, float, double & char
#include <stdio.h>

int main(void)
{
    int i;
    float f;
    double d;
    char c;
    
    printf("Enter the char vaule:");
    scanf("%c", &c);
    printf("Enter the int value:");
    scanf ("%d",&i);
    printf("Enter the float value:");
    scanf ("%f",&f);
    printf("Enter the double value:");
    scanf("%lf",&d);

    
    printf("Print the entered no: %d\n",i);
    printf("Print the float entered no: %f\n",f);
    printf("Print the double entered value:%lf\n",d);
    printf("Print the char Value : %c\n",c);
    printf("Print the char Value:%d\n",c);
    return 0;
}

//output:-
?*
Enter the char vaule:c
Enter the int value:12
Enter the float value:13.56379
Enter the double value:143.562336266
Print the entered no: 12
Print the float entered no: 13.563790
Print the double entered value:143.562336
Print the char Value : c
Print the char Value:99
 */
