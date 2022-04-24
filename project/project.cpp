// project.cpp: определяет точку входа для приложения.
//

#include "project.h"

using namespace std;



int main()
{
srand(static_cast<unsigned int>(time(0)));  //начальная точка отсчета для генерации случайных чисел, взятая со системных часов
setlocale(LC_ALL, "ru");  //метод, позволяющий отображать кириллицу
int par = get_random_number(1,5);
pars.push_back(par);
int ind = 0; //счетчик циклов
double otv;  //переменная, в которую будут записываться ответы пользователя
switch (par) //цикл отображения заданий с вводом ответа (зависит от случайного числа, который записан в переменную par)
	{
	case 1:
		cout << *objem_it << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 2:
		cout << *(objem_it + 1) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 3:
		cout << *(objem_it + 2) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 4:
		cout << *(objem_it + 3) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 5:
		cout << *(objem_it + 4) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	}
par = get_random_number(1, 5);
pars.push_back(par);
switch(par){
	case 1:
		cout << *dlinna_it << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *ploshad_kr_it << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 2:
		cout << *(dlinna_it + 1) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_kr_it + 1) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 3:
		cout << *(dlinna_it + 2) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_kr_it + 2) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 4:
		cout << *(dlinna_it + 3) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_kr_it + 3) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 5:
		cout << *(dlinna_it + 4) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_kr_it + 4) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	}
par = get_random_number(1, 5);
pars.push_back(par);
switch (par) {
	case 1:
		cout << *perimetr_pr_it << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *ploshad_pr_it << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 2:
		cout << *(perimetr_pr_it + 1) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_pr_it + 1) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 3:
		cout << *(perimetr_pr_it + 2) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_pr_it + 2) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 4:
		cout << *(perimetr_pr_it + 3) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_pr_it + 3) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 5:
		cout << *(perimetr_pr_it + 4) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_pr_it + 4) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	}
par = get_random_number(1, 5);
pars.push_back(par);
double otv1 = 0; double otv2=0; double otv3=0; double otv4=0; double otv5=0; double otv6=0; double otv7=0;//переменные, хранящие ответы пользователя
int ind1 = 0; //второй счетчик циклов
switch (par) {
	case 1:
		cout << *perimetr_kv_it << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *ploshad_kv_it << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 2:
		cout << *(perimetr_kv_it + 1) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_kv_it + 1) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 3:
		cout << *(perimetr_kv_it + 2) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_kv_it + 2) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 4:
		cout << *(perimetr_kv_it + 3) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_kv_it + 3) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	case 5:
		cout << *(perimetr_kv_it + 4) << endl;
		cin >> otv;
		otvs.push_back(otv);
		cout << *(ploshad_kv_it + 4) << endl;
		cin >> otv;
		otvs.push_back(otv);
		break;
	}
for (vector<double>::iterator otvs_it = otvs.begin(); otvs_it < otvs.end(); otvs_it++) {
	ind1++;
	switch (ind1) {
	case 1:
		otv1 = *otvs_it;
		break;
	case 2:
		otv2 = *otvs_it;
		break;
	case 3:
		otv3 = *otvs_it;
		break;
	case 4:
		otv4 = *otvs_it;
		break;
	case 5:
		otv5 = *otvs_it;
		break;
	case 6:
		otv6 = *otvs_it;
		break;
	case 7:
		otv7 = *otvs_it;
		break;
	}
}//цикл, переносящий ответы из контейнера в переменные
for (vector<int>::iterator pars_it = pars.begin(); pars_it < pars.end(); pars_it++) {
	switch (ind) {
	case 0:
		switch (*pars_it) {
		case 1:
			if (otv1 == *klyuchi_objem_it) {
				cout << "1) Верно" << endl;
			}
			else {
				cout << "1) Неверно" << endl;
			}
			break;
		case 2:
			if (otv1 == *(klyuchi_objem_it+1)) {
				cout << "1) Верно" << endl;
			}
			else {
				cout << "1) Неверно" << endl;
			}
			break;
		case 3:
			if (otv1 == *(klyuchi_objem_it + 2)) {
				cout << "1) Верно" << endl;
			}
			else {
				cout << "1) Неверно" << endl;
			}
			break;
		case 4:
			if (otv1 == *(klyuchi_objem_it + 3)) {
				cout << "1) Верно" << endl;
			}
			else {
				cout << "1) Неверно" << endl;
			}
			break;
		case 5:
			if (otv1 == *(klyuchi_objem_it + 4)) {
				cout << "1) Верно" << endl;
			}
			else {
				cout << "1) Неверно" << endl;
			}
			break;
		}
		break;
	case 1:
		switch (*pars_it)
		{
		case 1:
			if (otv2 == *klyuchi_dlinna_it) {
				cout << "2) Верно" << endl;
			}
			else {
				cout << "2) Неверно" << endl;
			}
			if (otv3 == *klyuchi_ploshad_kr_it) {
				cout << "3) Верно" << endl;
			}
			else {
				cout << "3) Неверно" << endl;
			}
			break;
		case 2:
			if (otv2 == *(klyuchi_dlinna_it + 1)) {
				cout << "2) Верно" << endl;
			}
			else {
				cout << "2) Неверно" << endl;
			}
			if (otv3 == *(klyuchi_ploshad_kr_it+1)) {
				cout << "3) Верно" << endl;
			}
			else {
				cout << "3) Неверно" << endl;
			}
			break;
		case 3:
			if (otv2 == *(klyuchi_dlinna_it + 2)) {
				cout << "2) Верно" << endl;
			}
			else {
				cout << "2) Неверно" << endl;
			}
			if (otv3 == *(klyuchi_ploshad_kr_it + 2)) {
				cout << "3) Верно" << endl;
			}
			else {
				cout << "3) Неверно" << endl;
			}
			break;
		case 4:
			if (otv2 == *(klyuchi_dlinna_it + 3)) {
				cout << "2) Верно" << endl;
			}
			else {
				cout << "2) Неверно" << endl;
			}
			if (otv3 == *(klyuchi_ploshad_kr_it + 3)) {
				cout << "3) Верно" << endl;
			}
			else {
				cout << "3) Неверно" << endl;
			}
			break;
		case 5:
			if (otv2 == *(klyuchi_dlinna_it + 4)) {
				cout << "2) Верно" << endl;
			}
			else {
				cout << "2) Неверно" << endl;
			}
			if (otv3 == *(klyuchi_ploshad_kr_it + 4)) {
				cout << "3) Верно" << endl;
			}
			else {
				cout << "3) Неверно" << endl;
			}
			break;
		}
		break;
	case 2:
		switch (*pars_it)
		{
		case 1:
			if (otv4 == *klyuchi_perimetr_pr_it) {
				cout << "4) Верно" << endl;
			}
			else {
				cout << "4) Неверно" << endl;
			}
			if (otv5 == *klyuchi_ploshad_pr_it) {
				cout << "5) Верно" << endl;
			}
			else {
				cout << "5) Неверно" << endl;
			}
			break;
		case 2:
			if (otv4 == *(klyuchi_perimetr_pr_it + 1)) {
				cout << "4) Верно" << endl;
			}
			else {
				cout << "4) Неверно" << endl;
			}
			if (otv5 == *(klyuchi_ploshad_pr_it + 1)) {
				cout << "5) Верно" << endl;
			}
			else {
				cout << "5) Неверно" << endl;
			}
			break;
		case 3:
			if (otv4 == *(klyuchi_perimetr_pr_it + 2)) {
				cout << "4) Верно" << endl;
			}
			else {
				cout << "4) Неверно" << endl;
			}
			if (otv5 == *(klyuchi_ploshad_pr_it + 2)) {
				cout << "5) Верно" << endl;
			}
			else {
				cout << "5) Неверно" << endl;
			}
			break;
		case 4:
			if (otv4 == *(klyuchi_perimetr_pr_it + 3)) {
				cout << "4) Верно" << endl;
			}
			else {
				cout << "4) Неверно" << endl;
			}
			if (otv5 == *(klyuchi_ploshad_pr_it + 3)) {
				cout << "5) Верно" << endl;
			}
			else {
				cout << "5) Неверно" << endl;
			}
			break;
		case 5:
			if (otv4 == *(klyuchi_perimetr_pr_it + 4)) {
				cout << "4) Верно" << endl;
			}
			else {
				cout << "4) Неверно" << endl;
			}
			if (otv5 == *(klyuchi_ploshad_pr_it + 4)) {
				cout << "5) Верно" << endl;
			}
			else {
				cout << "5) Неверно" << endl;
			}
			break;
		}
		break;
	case 3:
		switch (*pars_it)
		{
		case 1:
			if (otv6 == *klyuchi_perimetr_kv_it) {
				cout << "6) Верно" << endl;
			}
			else {
				cout << "6) Неверно" << endl;
			}
			if (otv7 == *klyuchi_ploshad_kv_it) {
				cout << "7) Верно" << endl;
			}
			else {
				cout << "7) Неверно" << endl;
			}
			break;
		case 2:
			if (otv6 == *(klyuchi_perimetr_kv_it + 1)) {
				cout << "6) Верно" << endl;
			}
			else {
				cout << "6) Неверно" << endl;
			}
			if (otv7 == *(klyuchi_ploshad_kv_it + 1)) {
				cout << "7) Верно" << endl;
			}
			else {
				cout << "7) Неверно" << endl;
			}
			break;
		case 3:
			if (otv6 == *(klyuchi_perimetr_kv_it + 2)) {
				cout << "6) Верно" << endl;
			}
			else {
				cout << "6) Неверно" << endl;
			}
			if (otv7 == *(klyuchi_ploshad_kv_it + 2)) {
				cout << "7) Верно" << endl;
			}
			else {
				cout << "7) Неверно" << endl;
			}
			break;
		case 4:
			if (otv6 == *(klyuchi_perimetr_kv_it + 3)) {
				cout << "6) Верно" << endl;
			}
			else {
				cout << "6) Неверно" << endl;
			}
			if (otv7 == *(klyuchi_ploshad_kv_it + 3)) {
				cout << "7) Верно" << endl;
			}
			else {
				cout << "7) Неверно" << endl;
			}
			break;
			break;
		case 5:
			if (otv6 == *(klyuchi_perimetr_kv_it + 4)) {
				cout << "6) Верно" << endl;
			}
			else {
				cout << "6) Неверно" << endl;
			}
			if (otv7 == *(klyuchi_ploshad_kv_it + 4)) {
				cout << "7) Верно" << endl;
			}
			else {
				cout << "7) Неверно" << endl;
			}
			break;
		}
		break;
	}
	ind++;
}//цикл, проверяющий верность/неверность ответов пользователя
system ("pause");
return 0;
}
