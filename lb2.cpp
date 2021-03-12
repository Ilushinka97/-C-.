#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <malloc.h>

#include "openinput.cpp"
#include "dynamic.cpp"
#include "verif.cpp"
#include "postrSNF.cpp"
#include "GrayKarno.cpp"

int main()

{
setlocale(LC_ALL,"rus");

int **A, n, m, snf;

for(;;)
{
printf ("\n  Введите количество переменных n (min = 2, max = 4) = ");// Размерность
scanf ("%d", &n); 

if (n >= 2 && n <= 4)
 {
	break;			
 }
else 
 {
       printf ("Неверно введено количество переменных, ещё раз!!!");
	continue;
 }
} 

m=pow(2,n); 
n++;

A=dynamic(n,m); //Выделение памяти для таблицы истинности/кода Грея

MTRXSCH (n, m, A); //Чтение и вывод матрицы
simtbl (n, m, A);
MTRXVV (n, m, A);

printf ("\n Для вывода СДНФ нажмите 1, для вывода СКНФ нажмите 0 \n\n Ответ: ");
scanf ("%d", &snf);
psnf (n, m, A, snf);  //Построение СДНФ и СКНФ
printf (" \n");
psnf2 (n, m, A, snf); 

KRKarno (A,(n-1)); // Карта Карно



system ("PAUSE");           
return 0;
 }
