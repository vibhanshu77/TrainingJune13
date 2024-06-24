#include "stdio.h"

int main()
{
        float weight, height, BMI;
        printf("Enter Weight(Kg) : ");
        scanf("%f", &weight);
	printf("Enter Height(m) : ");
        scanf("%f", &height);
	BMI = weight/(height * height);
        if(BMI>=30)
        {
                printf("BMI : Obesity\n");
        }
        else if(BMI>=25 && BMI<=29.9)
        {
                printf("BMI : Over Weight\n");
        }
        else if(BMI>=18.5 && BMI<=24.9)
        {
                printf("BMI : Normal Weight\n");
        }
        else
        {
                printf("BMI : Under Weight\n");
        }
        return 0;
}

