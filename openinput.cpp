
void MTRXSCH (int pr, int br, int **A) // Считывание таблиц
 { 
    
   FILE *tb;    // Открытие файлов
   if (pr==5) 
    {
	 tb=fopen("4.txt", "r");
	} 
   else
    {
     if (pr==4)
	  { 
	   tb=fopen("3.txt", "r");
	  }
     else
	   {
		tb=fopen("2.txt", "r");
	   }
    }

   if (tb==NULL) // Проверка на открытие файла
 	 {
 	   printf ("\n    Произошла ошибка в открытии файлов, нажмите Enter");
 	   system ("PAUSE");
       exit (1); 
     }
     
   for (int i=0; i<pr; i++) //Считывание таблицы
    {
      for (int j=0; j<br; j++)
      {
      	fscanf (tb, "%d", &A[i][j]);
      }
    }
	fclose (tb);
 }
 
void MTRXVV (int pr, int br, int **A) // Вывод матрицы
 {
  for (int i=0; i<pr; i++)
 {
 	if ((pr-i)==1) printf (" Y   ");
	  else printf (" X%d  ", i+1);
 	for (int j=0; j<br; j++)
 	{
 		printf ("%2d ", A[i][j]);
 	}
   printf ("\n");
 }
 }
 
