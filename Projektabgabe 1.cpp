//Implementierung der Bibliothek unseres Profs
#include "\Users\jakko\Documents\std_lib_inc.h"

int main()
{
	cout << "Bitte gib drei Zahlen ein:\n";
	int first_number;
	int second_number;
	int third_number;
	cin >> first_number >> second_number >> third_number;
	if (!cin)		//fehlerhafte Eingabe abfangen
	{
		simple_error("Die Eingabe ist falsch!");
	}
	int biggest_number;
	int smallest_number;
	int middle_number;
	if (first_number <= second_number && first_number <= third_number) // NR1 kleiner oder gleich nr2 und nr3
	{
		smallest_number = first_number;
		if (second_number <= third_number)	//Nr2 kleiner oder gleich nr 3
		{
			middle_number = second_number;
			biggest_number = third_number;
		}
		else// Nr 3 kleiner als Nr 2
		{
			middle_number = third_number;
			biggest_number = second_number;
		}
	}
	
	if (second_number <= first_number && second_number <= third_number) //Nr 2 kleiner gleich NR1 und Nr3
	{
		smallest_number = second_number;
		if (first_number <= third_number)	//NR 1 kleiner als 3
		{
			middle_number = first_number;
			biggest_number = third_number;
		}
		else//Nr3 kleiner als 1
		{
			middle_number = third_number;
			biggest_number = first_number;
		}
	}

	if (third_number <= first_number && third_number <= second_number)	//Nr.3 kleiner als Nr 1 und Nr 2
	{
		smallest_number = third_number;
		if (first_number <= second_number)		//Nr.1 kleiner als Nr.2
		{
			middle_number = first_number;
			biggest_number = second_number;
		}
		else//Nr.2 kleiner als Nr.1
		{
			middle_number = second_number;
			biggest_number = first_number;
		}
	}
	cout << smallest_number << ", " << middle_number << ", " << biggest_number << '\n';
}