//#include "stdafx.h"
#include<iostream>
#include <stdlib.h>
#include<iomanip>

using namespace std;

void Sanya(int s)
{
cout << "Саня   ";
			switch (s)
			{
			case 0:
				cout << " В НОКАУТЕ!                      ";
				break;
			case 1:
				cout << "/                                ";
				break;
			case 2:
				cout << "//                                ";
				break;
			case 3:
				cout << "///                               ";
				break;
			case 4:
				cout << "////                              ";
				break;
			case 5:
				cout << "/////                             ";
				break;
			case 6:
				cout << "//////                            ";
				break;
			case 7:
				cout << "///////                           ";
				break;
			case 8:
				cout <<"////////                           ";
				break;
			case 9:
				cout << "/////////                         ";
				break;
			case 10:
				cout << "//////////                         ";
				break;
			}
cout<<endl;
};

void Vlad(int v)
{
cout << "Владос ";
			switch (v)
			{
			case 0:
				cout << " В НОКАУТЕ!                      ";
				break;
			case 1:
				cout << "/                                ";
				break;
			case 2:
				cout << "//                                ";
				break;
			case 3:
				cout << "///                               ";
				break;
			case 4:
				cout << "////                              ";
				break;
			case 5:
				cout << "/////                             ";
				break;
			case 6:
				cout << "//////                            ";
				break;
			case 7:
				cout << "///////                           ";
				break;
			case 8:
				cout << "////////                          ";
				break;
			case 9:
				cout << "/////////                         ";
				break;
			case 10:
				cout << "//////////                        ";
				break;
			}
cout<<endl;
};

int main()
{

		setlocale(LC_ALL, "rus");
		int sanyahealth = 10, vladhealth = 10, a = 0;
		bool SL = 0, SP = 0, SZL = 0, SZP = 0, Z = 1;
		cout << "Правила\n1 - удар левой\n2 - удар правой\n3 - защита слева\n4 - защита справа\n5 - сдаться\n";
cout << "------------Fight!------------\n";
		while (sanyahealth != 0 && vladhealth != 0 && Z != 0)
		{
		Sanya(sanyahealth); 
                Vlad(vladhealth);

			switch (1 + rand() % 4)
				//switch (1)
			{
			case 1:
				SL = 1;
				break;
			case 2:
				SP = 1;
				break;
			case 3:
				SZL = 1;
				break;
			case 4:
				SZP = 1;
				break;
			}
			
			
			cin >> a;
			switch (a)
			{
			case 1:
			;
				if (SZL == 0)
				{
					cout << "Твой удар слева прошёл!\n"; sanyahealth--;
					if (SL != 0 || SP != 0)
					{
						cout << ((SL == 0) ? "Но и Саня дал правый в ответ!\n" : "Но и Саня дал левый в ответ!\n");
						vladhealth--;
					}
				}
				else if (SZL == 1) cout << "Саня блочит твой левый!\n";
				break;
			case 2:
				
				if (SZP == 0)
				{
					cout << "Твой удар справа прошёл!\n"; sanyahealth--;
					if (SL != 0 || SP != 0)
					{
						cout << ((SL == 0) ? "Но и Саня дал правый в ответ!\n" : "Но и Саня дал левый в ответ!\n");
						vladhealth--;
					}
				}
				if (SZP == 1) cout << "Саня блочит твой правый!\n";
				break;
			case 3:
				
				if (SL == 1) cout << "Санин удар слева остановлен!\n";  else if (SL == 0) cout << "Пустой блок!\n";
				if (SP == 1) { cout << "Ты получил справа!\n"; vladhealth--; }
				break;
			case 4:
				
				if (SP == 1) cout << "Санин удар справа остановлен!\n";  else if (SP == 0) cout << "Пустой блок!\n";
				if (SL == 1) { cout << "Ты получил слева!\n"; vladhealth--; }
				break;
			case 5:
				
				cout << "ТРУС!\n";
				vladhealth = 0;
				break;
			}
			SL = 0, SP = 0, SZL = 0, SZP = 0;
		}
             
                        Sanya(sanyahealth); 
                  
                        Vlad(vladhealth);

		if (sanyahealth > vladhealth)
		{
			switch (1 + rand() % 5)
			{
			case 1:
				cout << "Саня WIN!\n";
				break;
			case 2:
				cout << "Саня насувал тебе!\n";
				break;
			case 3:
				cout << "Саня ЧЕМПИОН!\n";
				break;
			case 4:
				cout << "САНЯНАЛИТИ!\n";
				break;
			case 5:
				cout << "Саня отправил тебя в нокаут!\n";
				break;
			}
		}
		if (sanyahealth < vladhealth)
		{
			switch (1 + rand() % 5)
			{
			case 1:
				cout << "ВЛАДОС ЛЕВ!\n";
				break;
			case 2:
				cout << "ВЛАД WIN!\n";
				break;
			case 3:
				cout << "БЕЛОРУС ПОБЕДИЛ!\n";
				break;
			case 4:
				cout << "Владос научил Саню!\n";
				break;
			case 5:
				cout << "Владос победил!\n";
				break;
			}
		}
		cout << "Конес!\n";
	return 0;
}
