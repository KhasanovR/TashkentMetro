#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>
#include <exception>
#include "Chilonzor.h"
#include "Station.h"
#include "Yunusobod.h"
#include "Uzbekiston.h"
#include "Animation.h"

using namespace std;

static int counter = 0;

void set_color(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

string fill_column(string str, int size = 36)
{
	while (str.length() != size)
	{
		str.push_back(' ');
	}
	return str;
}

void ShowRouteChilonzorAmir(int i, int route){
	Station *station = new Chilonzor();
	if (route == 1){
		cout << "\n" << fill_column(" ") << "Steps are ";
		if (i>9){
			for (int k = i - 1; k>7; k--){
				if (k != i - 1)
					cout << "=> "; 
				cout << station->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = i - 1; k<9; k++){
				if (k != i - 1)
					cout << "=> "; 
				cout << station->getStation(k) << " ";
				counter++;
			}
		}
	}


	else{
		cout << "\n" << fill_column(" ") << "and transfer to ";
		if (i>9){
			for (int k = 8; k <= i - 1; k++){
				if (k != 8)
				cout << "=> "; 
				cout << station->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = 8; k >= i - 1; k--){
				if (k != 8)
				cout << "=> "; 
				cout << station->getStation(k) << " ";
				counter++;
			}
		}
	}

}

void ShowRouteChilonzorPax(int i, int route){
	Station *station = new Chilonzor();
	if (route == 1){
		cout << "\n" << fill_column(" ") << "Steps are ";
		if (i>7){
			for (int k = i - 1; k>5; k--){
				if (k != i - 1)
				cout << "=> "; 
				cout << station->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = i - 1; k<7; k++){
				if (k != i - 1)
				cout << "=> "; 
				cout << station->getStation(k) << " ";
				counter++;
			}
		}
	}
	else{
		cout << "\n" << fill_column(" ") << "and transfer to ";
		if (i>7){
			for (int k = 6; k <= i - 1; k++){
				if (k != 6)
				cout << "=> "; 
				cout << station->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = 6; k>i - 2; k--){
				if (k != 6)
				cout << "=> "; 
				cout << station->getStation(k) << " ";
				counter++;
			}
		}
	}

}

void ShowRouteYunusobodYunus(int j, int route){
	Station *station1 = new Yunusobod();
	if (route == 1){
		cout << "\n" << fill_column(" ") << "Steps are ";
		if (j>6){
			for (int k = j - 1; k>4; k--){
				if (k != j - 1)
				cout << "=> "; 
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = j - 1; k<6; k++){
				if (k != j - 1)
				cout << "=> "; 
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}

	}
	else{
		cout << "\n" << fill_column(" ") << "and transfer to ";
		if (j>6){
			for (int k = 5; k<j; k++){
				if (k != 5)
				cout << "=> "; 
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = 5; k>j - 2; k--){
				if (k != 5)
				cout << "=> "; 
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
	}
}

void ShowRouteYunusobodMing(int j, int route){
	Station *station1 = new Yunusobod();
	if (route == 1){
		cout << "\n" << fill_column(" ") << "Steps are ";
		if (j>5){
			for (int k = j - 1; k>3; k--){
				if (k != j - 1)
					cout << "=> ";
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = j - 1; k<5; k++){
				if (k != j - 1)
					cout << "=> ";
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}

	}
	else{
		cout << "\n" << fill_column(" ") << "and transfer to ";
		if (j>5){
			for (int k = 4; k<j; k++){
				if (k != 4)
				cout << "=> "; 
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = 4; k>j - 2; k--){
				if (k != 4)
					cout << "=> ";
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
	}
}

void ShowRouteUzbekistanAlisher(int j, int route){
	Station *station1 = new Uzbekiston();
	if (route == 1){
		cout << "\n" << fill_column(" ") << "Steps are ";
		if (j>5){
			for (int k = j - 1; k >= 4; k--){
				if (k != j - 1)
					cout << "=> ";
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = j - 1; k <= 4; k++){
				if (k != j - 1)
					cout << "=> ";
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}

	}
	else{
		cout << "\n" << fill_column(" ") << "and transfer to ";
		if (j>5){
			for (int k = 4; k<j; k++){
				if (k != 4)
				cout << "=> "; 
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = 4; k>j - 2; k--){
				if (k != 4)
				cout << "=> "; 
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
	}
}

void ShowRouteUzbekistanOybek(int j, int route){
	Station *station1 = new Uzbekiston();
	if (route == 1){
		cout << "\n" << fill_column(" ") << "Steps are ";
		if (j>7){
			for (int k = j - 1; k>6; k--){
				if (k != j - 1)
					cout << "=> ";
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = j - 1; k <= 7; k++){
				if (k != j - 1)
					cout << "=> ";
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}

	}
	else{
		cout << "\n" << fill_column(" ") << "and transfer to ";
		if (j>7){
			for (int k = 7; k<j; k++){
				if (k != 7)
				cout << "=> "; 
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
		else{
			for (int k = 7; k>j - 2; k--){
				if (k != 7)
					cout << "=> ";
				cout << station1->getStation(k) << " ";
				counter++;
			}
		}
	}
}

int main()
{
	system("mode 1000");
	int i = 0, j = 0;
	string c;
	do{
		int color_cyan = 11;
		cout << "\n\n\n\n\n";
		cout << fill_column(" ", 40); Animation::draw_border(47, color_cyan);
		cout << fill_column(" ", 40); Animation::frame_phrase("                                           ", color_cyan);
		cout << fill_column(" ", 40); Animation::frame_phrase("              Tashkent's Metro             ", color_cyan);
		cout << fill_column(" ", 40); Animation::frame_phrase("                                           ", color_cyan);
		cout << fill_column(" ", 40); Animation::draw_border(47, color_cyan);

		Station *st1 = new Chilonzor();
		cout << endl;

		Station *st2 = new Yunusobod();
		cout << endl;

		Station *st3 = new Uzbekiston();
		cout << endl;

		set_color(5);

		cout << "\n\n";
		Animation::draw_border(127, color_cyan);
		cout << endl << endl << endl;
		cout << fill_column(" ") << fill_column("Chilonzor line: ");
		cout << fill_column("Yunusobod line:");
		cout << fill_column("Uzbekistan line:");
		cout << endl << endl << endl;
		Animation::draw_border(127, color_cyan);
		cout << "\n\n";;

		set_color(11);
		for (int i = 0; i < 13; i++)
		{

			if (i>11)
				cout << fill_column(" ") << fill_column(" ");//11
			else
				cout << fill_column(" ") << fill_column(fill_column(to_string(i + 1) + ". ",4) + st1->getStation(i));//11

			cout << fill_column(to_string(i + 13) + ". " + st2->getStation(i));//13

			if (i > 11)
				cout << fill_column(" ");//11
			else
				cout << fill_column(to_string(i + 26) + ". " + st3->getStation(i)) << endl;//12
		}
		cout << endl << endl << endl << endl;
		Animation::draw_border(127, color_cyan);
		set_color(15);
		int lc1 = 0;
		int route1 = 0;
		bool exitStatus = false;

		while (!exitStatus){
			cout << "\n\n\n" << fill_column(" ") << "Which station you are : ";
			try {
				cin >> lc1;
				if (!cin.good())
				{
					throw 0;
				}
				if (lc1 >= 1 && lc1 <= 12)
				{
					route1 = 1;
					i = lc1;
					exitStatus = true;
				}
				else if (lc1 >= 13 && lc1 <= 25)
				{
					route1 = 2;
					lc1 -= 12;
					i = lc1;
					exitStatus = true;
				}
				else if (lc1 >= 26 && lc1 <= 36)
				{
					route1 = 3;
					lc1 -= 25;
					i = lc1;
					exitStatus = true;
				}
				else
				{
					exitStatus = false;
					cout << "\n" << fill_column(" ") << "Please, enter only given station numbers\nTry again!!!\n";
				}

			}
			catch (int e) {
				cout << fill_column(" ") << "Please, next time enter number from 1 to 35\n";
				_getch();
				exit(0);
			}
		}


		bool exitStatus2 = false;
		int lc2 = 0;
		int route2 = 0;

		while (!exitStatus2){
			cout << "\n" << fill_column(" ") << "Which station you need : ";
			try {
				cin >> lc2;
				if (!cin.good())
				{
					throw 0;
				}
				if (lc2 >= 1 && lc2 <= 12)
				{
					route2 = 1;
					j = lc2;
					exitStatus2 = true;
				}
				else if (lc2 >= 13 && lc2 <= 25)
				{
					route2 = 2;
					lc2 -= 12;
					j = lc2;
					exitStatus2 = true;
				}
				else if (lc2 >= 26 && lc2 <= 36)
				{
					route2 = 3;
					lc2 -= 25;
					j = lc2;
					exitStatus2 = true;
				}
				else
				{
					exitStatus2 = false;
					cout << "\n" << fill_column(" ") << "Please, enter only given station numbers\nTry again!!!" << endl;
				}
			}
			catch (int e) {
				cout << fill_column(" ") << "Please, next time enter number from 1 to 35\n";
				_getch();
				exit(0);
			}
		}


		if (route1 == 1 && route2 == 1){
			Station *station = new Chilonzor();

			cout << "\n" << fill_column(" ") << "Your Location : " << station->getStation(i - 1) << " and Destination : " << station->getStation(j - 1) << endl;
			if (i < j){
				cout << fill_column(" ");
				for (int k = i - 1; k<j; k++){
					if (k != i - 1)
						cout << "=> ";
					cout << station->getStation(k) << " ";
					counter++;
				}
			}
			else{
				cout << fill_column(" ");
				for (int k = i - 1; k>j - 2; k--){
					if (k != i - 1)
						cout << "=> ";
					cout << station->getStation(k) << " ";
					counter++;
				}
			}


		}
		else if (route1 == 1 && route2 == 2){
			ShowRouteChilonzorAmir(i, 1);
			ShowRouteYunusobodYunus(j, 2);
			//
			cout << endl;
		}
		else if (route1 == 1 && route2 == 3){
			ShowRouteChilonzorPax(i, 1);
			ShowRouteUzbekistanAlisher(j, 2);
			cout << endl;
		}
		else if (route1 == 2 && route2 == 1){
			ShowRouteYunusobodYunus(i, 1);
			ShowRouteChilonzorAmir(j, 2);
			cout << endl;
		}
		else if (route1 == 2 && route2 == 2){
			Station *station1 = new Yunusobod();

			cout << "\n" << fill_column(" ") << "Your Location : " << station1->getStation(i - 1) << " and Destination : " << station1->getStation(j - 1);
			if (i < j){
				cout << fill_column(" ");
				for (int k = i - 1; k<j; k++){
					if (k != i - 1)
						cout << "=> ";
					cout << station1->getStation(k) << " ";
					counter++;
				}
			}
			else {
				cout << fill_column(" ");
				for (int k = i - 1; k>j - 2; k--){
					if (k != i - 1)
						cout << "=> ";
					cout << station1->getStation(k) << " ";
					counter++;
				}
			}
			cout << endl;
		}
		else if (route1 == 2 && route2 == 3){
			ShowRouteYunusobodMing(i, 1);
			ShowRouteUzbekistanOybek(j, 2);
			cout << endl;
		}
		else if (route1 == 3 && route2 == 1){
			ShowRouteUzbekistanAlisher(i, 1);
			ShowRouteChilonzorPax(j, 2);
			cout << endl;
		}
		else if (route1 == 3 && route2 == 2){
			ShowRouteUzbekistanOybek(i, 1);
			ShowRouteYunusobodMing(j, 2);
			cout << endl;
		}
		else if (route1 == 3 && route2 == 3){
			Station *station2 = new Uzbekiston();

			cout << "\n" << fill_column(" ") << "Your Location: " << station2->getStation(i - 1) << " and Destination: " << station2->getStation(j - 1);
			if (i < j){
				cout << fill_column(" ");
				for (int k = i - 1; k<j; k++){
					if (k != i - 1)
						cout << "=> ";
					cout << station2->getStation(k) << " ";
					counter++;
				}
			}
			else {
				cout << fill_column(" ");
				for (int k = i - 1; k>j - 2; k--){
					if (k != i - 1)
						cout << "=> ";
					cout << station2->getStation(k) << " ";
					counter++;
				}
			}
			cout << endl;
		}

		cout << "\n\n" << fill_column(" ") << "number of passed stations : " << counter << endl;
		cout << fill_column(" ") << "This journey may take at least " << counter * 3 << " minutes.\n";
		b:
		cout << "\n" << fill_column(" ") << "Do you want to continue(y / n) ? ";
		c = _getch();
		if (c != "n" && c != "y")
		{
			cout << "Invalid, Try again\n";
			_getch();
			goto b;
		}
		system("cls"); // system("clear");
		counter = 0;
	} while (!(c == "n"));
	
	int color_cyan = 11;
	cout << "\n\n\n\n\n";
	cout << fill_column(" ", 40); Animation::draw_border(53, color_cyan);
	cout << fill_column(" ", 40); Animation::frame_phrase("                                                 ", color_cyan);
	cout << fill_column(" ", 40); Animation::frame_phrase("              Thank you, Dear User!!!            ", color_cyan);
	cout << fill_column(" ", 40); Animation::frame_phrase("                                                 ", color_cyan);
	cout << fill_column(" ", 40); Animation::draw_border(53, color_cyan);
	
	_getch();
	return 0;
}
