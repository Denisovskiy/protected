#include "Source.h"
int input_key()
{
    int key;
    cout << "Выберите вариант" << endl;
    cout << "1.Выполнение программы" << endl;
	cout << "2.тест" << endl;
    cout << "3.выход" << endl;
    cin >> key;
    return key;
}
int minelem(int* a, int n)
{
	int min=a[0];
	for (int i = 0; i < n; i++)
	{
			if (min > a[i])
			{
				min = a[i];
			}
	}
	cout <<endl<<"минимальный элемент"<<" " << min << endl;
	return min;
}
void swaper(int* a, int n)
{
		int imin = minelem(a, n);
		swap(a[3], a[imin]);
    

}
int* TakeData_and_FindnOfElem(FILE* file, int* a, int* n)
{

	if (file == NULL)
	{
		cout << "Файл не найден" << endl;
		return 0;
	}
	else
	{

		*n = 0;
		char* read_s = (char*)malloc(100 * sizeof(char));
		char* now_s = (char*)malloc(100 * sizeof(char));
		char* save_n = (char*)malloc(100 * sizeof(char));
		a = (int*)malloc(1 * sizeof(int));
		char now[10] = " ";

		cout <<endl<<"Массив для чтения"<< endl;

		fgets(read_s, 1000, file);

		now_s = strtok(read_s, now);

		int i = 0;

		int error = 0;

		while (now_s != NULL)
		{
			cout<<" "<< now_s << " ";
			a = (int*)realloc(a, (i + 1) * sizeof(int));
			a[i] = atoi(now_s);
			if ((now_s[0] >= 'A' && now_s[0] <= 'Z') || (now_s[0] >= 'a' && now_s[0] <= 'z'))
			{

				error = 1;

				now_s = strtok(NULL, now);

			}
			else
			{

				now_s = strtok(NULL, now);
				i++;
				*n = i;

			}


		}

		if (*n < 4)
		{
			cout <<endl<< "ошибка,элементов меньше 4" << endl;
			a = (int*)realloc(a, 0 * sizeof(int));
			*n = 0;

		}
		if (error != 0)
		{

			cout <<endl<< "ошибка,введены буквы" << endl;
			a = (int*)realloc(a, 0 * sizeof(int));
			*n = 0;

		}
		if (*n >= 4)
		{
			cout << endl;
			cout <<endl<< "Элементов в массиве=" << *n << endl;

			return a;
		}

	}
}
void Test(int* a, int n)
{
	FILE* file = fopen("test.txt", "r+");
	a = TakeData_and_FindnOfElem(file, a, &n);
	a = TakeData_and_FindnOfElem(file, a, &n);
	a = TakeData_and_FindnOfElem(file, a, &n);
	Printarray(a, n);
	swaper(a, n);
	Printmodernarray(a, n);
}
void Printarray(int* a, int n)
{
	
		cout << endl << "Массив до преобразования" << endl;
		for (int count = 0; count < n; count++)
		{
			cout << " " << *(a + count) << " ";
		}
		cout << endl;
	
}
void Printmodernarray(int* a, int n)
{
	
		cout <<endl<< "Массив после преобразования" << endl;
		for (int count = 0; count < n; count++)
		{
			cout <<" " << *(a + count) << " ";
		}
		cout << endl;
}
void My_Program(int* a, int n)
{
	FILE* file = fopen("program.txt", "r+");

	a = TakeData_and_FindnOfElem(file, a, &n);
	swaper(a, n);
	Printmodernarray(a, n);
	cout << endl;
}

