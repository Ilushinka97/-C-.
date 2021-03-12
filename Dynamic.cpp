
int** dynamic (int pr, int br)

{
 int **A;
 
 A=(int **)malloc(sizeof(int *)*(pr)); // Динамическое выделение памяти
 
 if (A==NULL)
  { 
   printf ("\n    ОШИБКА! Память не выделена! Нажмите Enter");
   exit (1); 
   system ("PAUSE");
  }
  
 for (int i=0; i<br; i++)
  {
 	 A[i]=(int *)malloc(sizeof(int)*br);
	 if (A[i]==NULL)
	  {
	   printf ("\n    ОШИБКА! Память не выделена! Нажмите Enter");
       exit (1); 
       system ("PAUSE");
	  }
  }

 return A;
}
