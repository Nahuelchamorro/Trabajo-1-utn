
int resultado1(int operando1, int operando2)
{
    int suma=operando1+operando2;
    return suma;
}

int resultado2(int operando1, int operando2)
{
    int resta=operando1-operando2;
    return resta;
}

int resultado3(int operando1, int operando2)
{
    int multiplicacion=operando1*operando2;
    return multiplicacion;
}

float resultado4(int operando1, int operando2)
{
    float division=(float)operando1/operando2;
    return division;
}
int factorial1(int operando1)
{
int b, fact1 = 1;

for (b = operando1 ; b > 1; b--)
{
    fact1 = fact1 * b;
}
     return fact1;
}

int factorial2(int operando2)
{
int b2, fact2 = 1;
for (b2 = operando2 ; b2 > 1; b2--)
{
    fact2 = fact2 * b2;
}
     return fact2;
}
