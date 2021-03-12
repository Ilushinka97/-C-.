void psnf (int pr, int br, int **A, int s) // Ïîñòğîåíèå ÑÄÍÔ è ÑÊÍÔ
{
 if (s==1)
  {
   printf ("    ÑÄÍÔ:  \n  ");
  }
 else
  {
   printf ("    ÑÊÍÔ:  \n");
  }

 for (int j=0; j<br; j++)
  {
   if (s==1)
    {
     if (A[pr-1][j]==s)   
      { 
       for (int i=0; i<pr-1; i++)
        { 
         if (A[i][j]==0)
          {
           printf ("!X%d", i+1); //ÑÄÍÔ
          }
         else
          {
           printf ("X%d", i+1);
          }
        }
       if (j<br-2)
        {
         printf (" + \n  "); 
        }
      } 
    }
   else
    {
     if (A[pr-1][j]==s)
	  {
	   printf ("  ( ");
	   for (int i=0; i<pr-1; i++)
        {
	     if (A[i][j]==0)
          {
           printf ("!X%d", i+1);
          }
         else
	      {
	       printf ("X%d", i+1);
	      }
         if (i<pr-2)
          {
           printf ("+"); 
          }
        }
       printf (" )"); 
       if (j<br-2)
	    {
	     printf (" * \n");
	    }  
      }
    }
  }   
  printf ("\n");
}


void psnf2 (int pr, int br, int **A, int s)
{
  char z, q;
  int d;
  
  if (s==1)
  {
   printf ("    ÑÄÍÔ:  \n  ");
   z=(' +');
   q=(' *');
  }
 else
  {
   printf ("    ÑÊÍÔ:  \n");
   z=(' *');
   q=('+');
  }

  for (int j=0, d=0; j<br; j++)
  { 
   if (A[pr-1][j]==s)
    {
     if (d!=0)
      {
       printf (" %c \n", z);
      }
      printf ("  ( ");
      for (int i=0; i<pr-1; i++)
       {
        if (i!=0 && i!=pr-1)
         {
          printf (" %c ", q);
         }
        if (A[i][j]==1)
         {
           printf ("X%d", i+1);
         }
        else 
         {
           printf ("!X%d", i+1);
         } 
       }
      printf ("  ) ");
      d=1;
    }
  }
}

