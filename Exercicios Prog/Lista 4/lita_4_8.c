    #include<stdio.h>
    #include<time.h>
   
    float conceito(float media) 
    {
      char con;
    
    if (media <= 4.9)
      con = 'D';
    else
    if (media <= 6.9)
      con = 'C';
    else
    if (media <= 8.9)
      con = 'B';
    else
      con = 'A';
      return(con); 
    }
      int main(void)
      {
      float media;
      char resultado;
      printf("Digite a media:");
      scanf("%f", &media);
      
      resultado = conceito(media);
      
      printf("Resultado = %c \n",resultado);
      
      return 0;
    }
