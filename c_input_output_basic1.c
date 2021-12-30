/*scanf() function to take input from the user, and printf() function to display output to the user.*/

# include <stdio.h>
int main ()
{
  // Display the program in side the quatation.
  print ("C Programming");
  return 0;
}

//

# include <stdio.h>
int main()
{
    int i=5;
    printf  ("number = %d\n",i);
  // \n give the new line aftre the 1st printf.
    printf ("numbers= %d", i);
    return 0;
}

//Example I/O:- 

#include <stdio.h>
int main (void)
{
    printf ("I'm intel.\n");
    printf ("print = %s\n", "Ram Raja rani");
    int i = 123;
    printf("Print int value = %d\n", i);
    printf ("Print int vaule updated = %d\n", 6548);
    return 0;
}

//EX-1:- 

#include <stdio.h>

int main ()
{
    printf ("I'm intel.\n");
    printf ("print = %s\n", "Ram Raja rani");
    int i = 1234563232;
    printf("Print int value = %d\n", i);
    printf ("Print int vaule updated = %d\n", 6548);
    short int K = 12;
    printf ("Print short int vaule= %hd\n", K);
    printf ("print short int updated = %hd\n", 16457);
    long int i2 = 154.86;
    printf ("Print long int = %li \n", i2);
    printf("Print long int = %li\n",13515161615611111);
    long long int i3=1234561311516;
    printf ("print long long int= %lli\n",i3);
    printf ("Print long long int updated = %lli\n",132545466515165161);
    float f = 165.56323265116;
    double d = 163.4565322;
    long double L= 1.5646315161115;
    printf ("Print float vaule = %f\n", f);
    printf ("Print double vaule = %lf\n",d);
    printf ("Print float vaule updated = %f\n",136.5466);
    printf ("Print double Vaule updated = %lf\n", 136.4586);
    printf ("Print long double Vaule=%Lf\n", L);
    printf ("Print long double Vaule=%Lf\n", 12.654656);
    char c = 'A';
    printf ("Print char value = %c\n",c);
    printf ("Print Char value = %c\n",'K');
    
    return 0;
}

//Output:-
/*main.c:18:47: warning: format ‘%lli’ expects argument of type ‘long long int’, but argument 2 has type ‘long int’ [-Wformat=]
   18 |     printf ("Print long long int updated = %lli\n",132545466515165161);
      |                                            ~~~^    ~~~~~~~~~~~~~~~~~~
      |                                               |    |
      |                                               |    long int
      |                                               long long int
      |                                            %li
main.c:27:40: warning: format ‘%Lf’ expects argument of type ‘long double’, but argument 2 has type ‘double’ [-Wformat=]
   27 |     printf ("Print long double Vaule=%Lf\n", 12.654656);
      |                                      ~~^     ~~~~~~~~~
      |                                        |     |
      |                                        |     double
      |                                        long double
      |                                      %f
I'm intel.
print = Ram Raja rani
Print int value = 1234563232
Print int vaule updated = 6548
Print short int vaule= 12
print short int updated = 16457
Print long int = 154 
Print long int = 13515161615611111
print long long int= 1234561311516
Print long long int updated = 132545466515165161
Print float vaule = 165.563232
Print double vaule = 163.456532
Print float vaule updated = 136.546600
Print double Vaule updated = 136.458600
Print long double Vaule=1.564632
Print long double Vaule=-nan
Print char value = A
Print Char value = K
*/


