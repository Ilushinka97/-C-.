int Q(int i)
{
	int q=1;
	while (i%2==0)
		{
			i/=2;
			q++;
		}
		
return q;
}

int* gray (int pr)  // Построение кода Грея
{
	int *B, i, p, z, k, *C, j=0;
	
 B=(int *)malloc(sizeof(int)*pr);
 C=(int*)malloc(sizeof(int)*pow(2,pr)*pr);                         
 
 for (int i=0; i<pr; i++)
 {
  B[i]=0; 
  C[i]=0;
 }
j++;
 for (i=0;i<pow(2,pr)-1;i++)
  {
   p=Q(i+1);
   B[p-1]=1-B[p-1];
   for (k=0,z=(pr-1);k<pr;k++,z--)
    {
	 C[(j*pr)+k]=B[z];
	}
   j++;
  }
  return C;
}


void KRKarno (int **A, int n) //Карта Карно
{
	int n1, n2, *Gr1, *Gr2, **K, count, z;
	n1=floor((float)n/2);	
	n2=n-n1;
	
	K=dynamic(pow(2,n1), pow(2,n2));
	
	Gr1=gray(n1);
	Gr2=gray(n2);
	
	printf("\n    Карта Карно:   \n");
	
	for (int i=0;i<n1;i++)
	 {
    	printf("x%d", i+1);
     }
	printf("||");
	
	for (int i=n1;i<n;i++)
	 {
    	printf("x%d", i+1);
     }
    printf("   ");
    
    z=0;
 
	for (int g2=0;g2<pow(2,n2)*n2;g2++) // Код Грея вверх
	 {
		printf("%d",Gr2[g2]);
		z++;
		if (z==n2)
		 {
			printf(" "); 
			z=0;
		 }
	 }
	
	printf("\n");
	
	for (int j=0;j<pow(2,n);j++)
	 { 
		for (int g1=0;g1<pow(2,n1);g1++)
		 {
			for (int g2=0;g2<pow(2,n2);g2++)
			 {
				count=0;
				for (int z=0; z<n1; z++)
				 {
					if (A[z][j]==Gr1[g1*n1+z])
					 {
						count++;
					 }
					else
					 {
						break;
					 }
				 }	
				for (int z=n1; z<n1+n2; z++)
				 {
					if (A[z][j]==Gr2[g2*n2+z-n1])
					 {
						count++;
					 }
					else
					 {
						break;
					 }
				 }
				if (count==n)
				 {
					K[g1][g2]=A[n][j];	
				 }
			 }
		 }
	 }
	
	for (int i=0; i<pow(2,n1); i++)
	 {
		printf("      ");
	    for(int k=0;k<n1;k++)
		 {
			printf("%d",Gr1[i*n1+k]);
		 }
		printf("|  ");
		for (int j=0; j<pow(2,n2); j++)
		 {
			printf("%2d ",K[i][j]);
		 }
		printf("\n");
	 }
			
}
