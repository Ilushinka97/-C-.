
 void simtbl (int pr, int br, int **A)  // Проверка на наличие символов, отличных от 0 и 1 проверка на пустое отношение или на отсутсвие матрицы
 {
  int k=0;
  for (int i=0; i<pr; i++)
   {
    for (int j=0; j<br; j++)
    {
  	  if (A[i][j]==0)
  	  {
  	   k++;
  	   continue;
      }
  	  else
  	  {
  	     if (A[i][j]==1)
  	       continue;
  	     else
  	       printf ("\n  В отношении присутсвуют символы, отличные от 0 или 1! Исправьте отношение! Нажмите Enter \n");
           system ("PAUSE");
           exit (1); 
  	  }
    } 	
   }
  if (k==(pr*br) || k==0)
   {
      printf ("\n  Отношение не верно. Матрица пустая или состоит из 0. Исправьте отношение! Нажмите Enter \n");
      system ("PAUSE");
      exit (1); 
   }	
} 
