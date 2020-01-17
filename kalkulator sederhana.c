#include <stdio.h>

int main()
{
	char Operator;
	float angka1, angka2, hasil = 0;

	printf("\n tolong masukan Operator (+,-)  :  ");
  	scanf("%c", &Operator);

	printf("\n masukan 2 angka: angka1 and angka2  :  ");
  	scanf("%f%f", &angka1, &angka2);

  	switch(Operator)
  	{
  		case '+':
  			hasil = angka1 + angka2;
  			break;
        case '-':
            hasil = angka1 - angka2;
            break;
		default:
			printf("\n operator yang kamu masukan tidak sesuai ");
	}

	printf("\n The result of %.2f %c %.2f  = %.2f", angka1, Operator, angka2, hasil);

  	return 0;
}
