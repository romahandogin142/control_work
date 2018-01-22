#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

using namespace std;
const int arrSize = 20;
void main()
{
#define sizeArr 20
	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << " Exit 0'" << endl;
		cout << "Vedite zd: ";
		cin >> tm;
		switch (tm)
		{
/*1.	*Написать, программу, которая вычисляет прибыль 
фирмы за 6 месяцев. Пользователь вводит прибыль фирмы за каждый месяц.*/
		case 1:
		{
	     int  sum=0,doxod=0;
			for (int i = 1; i <= 6; i++)
			{
					cout << "Vedite pribel firm ";
					cin >> sum;
					doxod += sum;
			}
			cout << "  " << doxod << endl;
		}break;


		/*Написать программу,
		которая выводит одномерный массив в обратном порядке*/
		case 2:
		{
			int mas[10];
			for (int i = 0; i < 10; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "  " << endl;
			}
			cout << "V obratnom poryadke " << endl;
			for (int  i = 9 ; 0 <= i; i--)
			{
				cout << mas[i]<<endl;
			}


		}break;
		
		/*3.	*Пользователь вводит длину сторон пятиугольника, каждая сторона 
		заноситься в массив, необходимо вычислить периметр пятиугольника (периметр – сумма всех сторон).*/
		case 3:
		{
			int mas[5],per=0;
			for (int i = 0; i <= 5; i++)
			{

				mas[i] = 1 + rand() % 10;
				cout << i << " - " << mas[i] << "  " << endl;
				per = mas[0]+mas[1] + mas[2] + mas[3] + mas[4] + mas[5];
			}
			cout << " " << per << endl;

		}break;

		/*4.	*Пользователь вводит прибыль фирмы за год (12 месяцев). 
		Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна.*/
		case 4:
		{
			int mas[12], min =0,max=0,chet=0;

			for (int i = 0; i < 12; i++)
			{
				chet++;
				mas[i] = 1000 + rand() % 200000;
				cout << mas[i] << "  " << endl;
			}
			min = mas[0];
			max = mas[0];
			cout << "Min " << endl;
			for (int i = 0; i <12; i++)
			{
				if (mas[i]<min)
				{
					min = mas[i];
				}
					
			}
			cout << "Min " << min << endl;

			cout << "Max "<<endl;
			for (int  i = 0; i < 12; i++)
			{
				if (mas[i]>max)
					max = mas[i];
			}
			cout << "Max " <<max<< endl;

			
		}break;

		/*В одномерном массиве, заполненном 
		случайными числами, определить минимальный и максимальный элементы*/
		case 5:
		{
			int mas[10], min = 0, max = 0, chet = 0;

			for (int i = 0; i < 10; i++)
			{
				chet++;
				mas[i] = 10 + rand() % 30;
				cout << mas[i] << "  " << endl;
			}
			min = mas[0];
			max = mas[0];
			cout << "Min " << endl;
			for (int i = 0; i <10; i++)
			{
				if (mas[i]<min)
				{
					min = mas[i];
				}

			}
			cout << "Min " << min << endl;

			cout << "Max " << endl;
			for (int i = 0; i < 10; i++)
			{
				if (mas[i]>max)
					max = mas[i];
			}
			cout << "Max " << max << endl;
		}break;

		/*6.	**Пользователь вводит прибыль фирмы за год (12 месяцев). 
		Затем  пользователь вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем).
		Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна с учетом выбранного диапазона.

*/
		case 6:
		{
			const char Month[][12] = { "Январь","Февраль","Март","Апрель","Май  ","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь" };

			int profit[12];
			int begin = 0;
			int end = 0;
			int max = begin;
			int min = begin;


			for (int i = 0; i < 12; i++)
			{
				cout << "Прибыль в : " << Month[i] << "\t";
				cin >> profit[i];
			}

			cout << "\n";
			cout << "Введите начальный диапазон месяцев от 1 до 12  : ";
			cin >> begin;
			cout << "Введите конечный диапазон месяцев от 1 до 12  : ";
			cin >> end;



			for (int i = begin; i <= end; i++)
			{
				cout << " " << profit[i];   //вывожу  прибыль по месяцам в заданном диапазоне

				if (profit[max] <= profit[i])
					max = i;

				if (profit[min] >= profit[i])
					min = i;
			}

			cout << "\nМаксимальная прибыль в выбраном диапазоне будет в  " << Month[max] << "\t" << profit[max] << "\n\n";
			cout << "\nМинимальная прибыль в выбраном диапазоне будет в  " << Month[min] << "\t" << profit[min] << "\n\n";




		



		}break;


		/*
7.	**В одномерном массиве, состоящем из N вещественных чисел вычислить:
•	Сумму отрицательных элементов.
•	Произведение элементов, находящихся между min и max элементами.
•	Произведение элементов с четными номерами.
•	Сумму  элементов, находящихся между первым и последним отрицательными элементами.
*/
		case 7:
		{
			cout << "Vvedite razmer massiva:";
			int n, a;
			cin >> n;
			cout << "Vedite" << n << "elements:\n";
			for (int i = 0; i < n; i++)
			{
				cout << "a[" << i + 1 << "]: ";
				cin >> a;
			}
			int negativ = 0;
			for (int i = 0; i < n; i++)
			{
				if (a < 0)
				{
					negativ += a;
				}
			}
			cout << "Summa otricatel'nyh elementov = " << negativ << endl;
			int max = a, i_max, min = a, i_min;
			for (int i = 1; i < n; i++)
			{
				if (a > max)
				{
					max = a;
					i_max = i;
				}
				if (a < min)
				{
					min = a;
					i_min = i;
				}
			}
			i_min++;
			i_max--;
			int mult = 1;
			for (int i = i_min; i < i_max; i++)
			{
				mult *= a;
			}
			cout << "Произведение элементов, находящихся между min и max элементами =" << mult << endl;
			mult = 1;
			for (int i = 1; i < n; i += 2)
			{
				mult *= a;
			}
			cout << "Произведение элементов с четными номерами =" << mult << endl;
			for (int i = 0; i < n; i++)
			{
				if (a < 0)
				{
					i_min = i;
					break;
				}
			}
			for (int i = n - 1; i > i_min; i--)
			{
				if (a < 0)
				{
					i_max = i;
					break;
				}
			}
			i_min++;
			mult = 1;
			for (int i = i_min; i < i_max; i++)
			{
				mult *= a;
			}
			cout << "Сумму  элементов, находящихся между первым и последним отрицательными элементами =" << mult << endl;

		}break;
		
		/*9.	*Написать программу, выполняющую сортировку 
		одномерного массива целых чисел методом пузырька.*/
		case 8:
		{
			int arrNumber[sizeArr];



			for (int i = 0; i <= sizeArr - 1; i++)

			{

				arrNumber[i] = 1 + rand() % 99;

			}



			
				cout << "Do sortirivki" << endl;



				for (int i = 0; i <= sizeArr - 1; i++)

				{

					cout << "arr[" << i << "] = " << arrNumber[i] << "\n";

				}



				cout << endl;

				cout << "Posle sortirivki" << endl;



				for (int i = 0; i < sizeArr - 1; i++)

				{

					for (int j = (sizeArr - 1); j > i; j--)

					{

						if (arrNumber[j - 1] > arrNumber[j])

						{

							int temp = arrNumber[j - 1];

							arrNumber[j - 1] = arrNumber[j];

							arrNumber[j] = temp;

						}

					}

					cout << "arr[" << i << "] = " << arrNumber[i] << "\n";

				}
		}break;

		/*15.	*Написать программу, которая заполняет одномерный массив из 10 элементов вещественными числами в диапазоне от 1 до 10 с двумя знаками после запятой.
а)**количество знаков после запятой вводит пользователь.
*/
		case 9:
		{
			const int size = 10;
			float mas[size];
			int i;
			srand(time(NULL));
			for (i = 0; i<size; i++)

			{
				mas[i] = (rand() % 901 + 100) / 100;

				cout << mas[i];

			}
		}break;

		/*19.	 *Напишите программу, которая выполняет поэлементную с
		умму двух массивов и результат заносит в третий  массив*/
		case 10:
		{
			int mas[12];
			int mas1[12];
			int mas2[12];

			for (int i = 0; i < 12; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout <<i<<" - "<< mas[i] << " " << endl;
				
			}
			cout << "Vtori massiv " << endl;
			for (int i = 0; i < 12; i++)
			{
				mas1[i] = 1 + rand() % 30;
				cout << i << " - " << mas1[i] << " " << endl;

			}

			cout << "Tretiy massiv " << endl;
			for (int i = 0; i < 12; i++)
			{
				mas2[i] = mas[i] + mas1[i];
				cout << mas[i] << " + " <<mas1[i]<<" = "<< mas2[i]<< endl;

			}
		}break;

	/*21.	**Напишите программу, которая суммирует элементы массива
	из 10 элементов по следующему принципу: первый суммирует с последним; второй – с предпоследним и т.д. И заносит сумму в массив из 5 элементов.*/
		case 11:
		{
			int mas[10];
			int summa = 0;

			for (int i = 0; i < 10; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout <<i<<" - "<< mas[i] << "  " << endl;
			}
			for (int i = 0; i < 9; i++)
			{
				summa=mas[0] +mas [9];
			}
			cout << mas[0] << " + " << mas[9] << " = " << summa << endl;

			for (int i = 0; i < 9; i++)
			{
				summa = mas[2] + mas[8];
			}
			cout << mas[1] << " + " << mas[8] << " = " << summa << endl;

			for (int i = 0; i < 9; i++)
			{
				summa = mas[2] + mas[7];
			}
			cout << mas[2] << " + " << mas[7] << " = " << summa << endl;

			for (int i = 0; i < 9; i++)
			{
				summa = mas[3] + mas[6];
			}
			cout << mas[3] << " + " << mas[6] << " = " << summa << endl;

			for (int i = 0; i < 9; i++)
			{
				summa = mas[4] + mas[5];
			}
			cout << mas[4] << " + " << mas[5] << " = " << summa << endl;
		}break;

		/*23.	**Написать программу, которая переворачивает массив 
		(первый элемент становиться последним, второй предпоследним и т.д.)*/
		case 12:
		{
			int mas1[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
			int mas2[11], i, j;
			for (i = 0, j = 10; i<11; i++, j--)
				mas2[i] = mas1[j];

			for (i = 0; i<11; i++)
				cout << mas1[i] << " ";
			cout << "\n";
			for (i = 0; i<11; i++)
				cout << mas2[i] << " ";

		}break;


		}

		system("pause");

	} while (tm != 0);



}