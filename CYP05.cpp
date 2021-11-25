
#include <stdio.h>
#define Limite 2000
#define Limite2 2000
int main()
{
	int Calificacion;
	int aux;
	float Calficacion2[Limite2];
	int cuenta[Limite];
	scanf_s("%i", &Calificacion);
	aux = Calificacion;
	if (Calificacion > 0 && Calificacion <= 2000)
	{
		int a = 0;
		int A = 0;
		for (a; a < Calificacion; a++)
		{
			scanf_s("%i", &cuenta[a]);
			scanf_s("  %f", &Calficacion2[A]);
			A = A++;
		}
		int Pasada = 0;
		for (Pasada; Pasada < Calificacion - 1; Pasada++)
		{
			int ordenar = 0;
			for (ordenar; ordenar < Calificacion - 1; ordenar++)
			{
				if (cuenta[ordenar] > cuenta[ordenar + 1])
				{
					float CAL;
					CAL = Calficacion2[ordenar + 1];
					Calficacion2[ordenar + 1] = Calficacion2[ordenar];
					Calficacion2[ordenar] = CAL;

					int C = cuenta[ordenar + 1];
					cuenta[ordenar + 1] = cuenta[ordenar];
					cuenta[ordenar] = C;

				}
			}
		}
		Pasada = 0;
		for (Pasada; Pasada < Calificacion - 1; Pasada++)
		{
			int repetido = 0;
			for (repetido; repetido < Calificacion - 1; repetido++)
			{
				if (cuenta[repetido] == cuenta[repetido + 1])
				{
					if (Calficacion2[repetido] < Calficacion2[repetido + 1])
					{
						float cal = Calficacion2[repetido];
						Calficacion2[repetido] = Calficacion2[repetido + 1];
						Calficacion2[repetido + 1] = cal;
					}
				}
			}
		}
		Pasada = 0;
		for (Pasada; Pasada < Calificacion - 1; Pasada++)
		{
			int Delete = 0;
			for (Delete; Delete < Calificacion - 1; Delete++)
			{
				if (cuenta[Delete] == cuenta[Delete + 1])
				{
					cuenta[Delete + 1] = 0;
					if (Calficacion2[Delete] < Calficacion2[Delete + 1])
					{
						Calficacion2[Delete] = Calficacion2[Delete + 1];
						Calficacion2[Delete + 1] = Calficacion2[Delete + 2];
					}
					if (Calficacion2[Delete] > Calficacion2[Delete + 1])
					{
						Calficacion2[Delete + 1] = Calficacion2[Delete + 2];
					}
				}
				if (cuenta[Delete] > cuenta[Delete + 1])
				{
					float Eva;
					Eva = Calficacion2[Delete + 1];
					Calficacion2[Delete + 1] = Calficacion2[Delete];
					Calficacion2[Delete] = Eva;

					int C = cuenta[Delete + 1];
					cuenta[Delete + 1] = cuenta[Delete];
					cuenta[Delete] = C;
				}
			}
		}
		int aux2 = 0;
		for (aux2; aux2 < aux; aux2++)
		{
			if (cuenta[aux2] == 0)
			{
				Calificacion = Calificacion - 1;
			}
		}
		printf("%i\n", Calificacion);
		int salida = 0;
		for (salida; salida < aux; salida++)
		{
			if (cuenta[salida] == 0 || cuenta[salida] < 0);
			else
				printf("%i %f\n", cuenta[salida], Calficacion2[salida]);
		}
	}
	else
		printf("%i\n", Calificacion);
	
} 