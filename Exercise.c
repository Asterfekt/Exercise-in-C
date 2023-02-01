/*założenia
Program:
wczyta ze standardowego wejścia trzy liczby rzeczywiste
wyliczy średnią arytmetyczną tych liczb
obliczy wartość każdej z tych liczb podniesionej do kwadratu
wypisze na standardowe wyjście największą z tych liczb
*/

#include <stdio.h> //Printf
#define LEN 3 

void multiplication(int liczby[])
{

for (int i = 0; i < LEN; i++)
{
   int Multiply=liczby[i]*liczby[i];
   printf("Liczba %d podniesiona do kwadratu wynosi: %d \n",liczby[i],Multiply);
}
}

void Srednialgebraiczna(int liczby[])
{
    int suma=0;
for (int i = 0; i < LEN; i++)
{
   suma+=liczby[i];
}
double SredniaAlgebra=suma/LEN;
printf("Srednia algebraiczna wynosi %.2f \n",SredniaAlgebra);
}


int compare(void* a, void* b)
{
    int a_ = *(int*)a;
    int b_ = *(int*)b;

    return b_- a_;
}



int main()
{
int Liczby[LEN];

for (int i = 0; i < LEN; i++)
{
    scanf("%d",&Liczby[i]);
  
}
printf("Wpisane Liczby to :\n");
for (int a = 0; a < LEN; a++)
{
    printf("%d",Liczby[a]);
}
 printf("\n");
multiplication(Liczby);
Srednialgebraiczna(Liczby);
qsort(Liczby, LEN, sizeof(int), compare);

printf("Najwieksza wypisana liczba to; %d",Liczby[0]);

return 0;

}