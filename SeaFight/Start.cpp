#include "Main.h"
#include "Windows.h"
#include <ctime>
#include "SeaFight.h"
#include "Menu.h"

int main()   // Главная функция запуска
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	options();
	menu();

	Sleep(INFINITE);   // Приостановка выполнения программы до закрытия вручную
}