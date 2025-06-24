#include <stdio.h>
#include <math.h>

  float volume(float r) {
    float v;
    v = (4.0 / 3.0) * M_PI * pow(r, 3);
    return v;
  }
  float main() {
    float raio, resposta;
      
    printf("Digite o valor do raio:\n");
    scanf("%f", &raio);

    resposta = volume(raio);
     printf("O volume é %f\n", resposta);

    return 0;
  }  