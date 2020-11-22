#include<stdio.h>
#include<conio.h>
#define N 5

void print_name_heading(void)
{
	printf("\t\t\t __    __\t  __   _        __            _  _____  __   __ \n");
	printf("\t\t\t|__   |__\t |    /-\\  |   |   |  | |    /-\\   |   |  | |__|\n");
	printf("\t\t\t|__ . |__\t |__ /   \\ |__ |__ |__| |__ /   \\  |   |__| |  \\\n");
}

void print_name_subheading(void)
{
	printf("\n\t\t\t\t\t\t       MAIN MENU");
	printf("\n\t\t         ============================= \t\t ======================\n");
	printf("\t\t        |  FOR SCIENTIFIC CALCULATOR  |\t\t|  FOR LCA CALCULATOR  |\n");
	printf("\t\t         ============================= \t\t ======================\n");
	printf("\t\t                   press S         \t\t           press L\n");
}

void print_name_lca_menu(void)
{
	system("cls");
	printf("\t\t\t                             LCA CALCULATOR            \n");
	printf("\t\t\t _____________________________________________________________________\n");
	printf("\t\t\t|         FOR          |         FOR            |        FOR          |\n");
	printf("\t\t\t| Resistors in series  | Resistors in parallel  | Delta-Wye resistors |\n");
	printf("\t\t\t|        Press r       |         Press r        |       Press d       |\n");
	printf("\t\t\t|----------------------|------------------------|---------------------|\n");
	printf("\t\t\t|         FOR          |         FOR            |        FOR          |\n");
	printf("\t\t\t| Inductors in series  | Inductors in parallel  |   LCA DIAGRAMS      |\n");
	printf("\t\t\t|        Press l       |         Press l        |      Press w        |\n");
	printf("\t\t\t|----------------------|------------------------|---------------------|\n");
	printf("\t\t\t|         FOR          |         FOR            |        FOR          |\n");
	printf("\t\t\t| Capacitors in series | Capacitors in parallel | Voltage division    |\n");
	printf("\t\t\t|        Press c       |         Press c        |       Press v       |\n");
	printf("\t\t\t|----------------------|------------------------|---------------------|\n");
}

void print_name_scientific_menu(void)
{
	system("cls");
	printf("***************************************************************");
	printf("**************************************************\n");
	printf("*\t\t                                SCIENTIFIC CALCULATOR                        \t\t\t*\n");
	printf("*\t\t    ________________________________________________________________________ \t\t\t*\n");
	printf("*\t\t   |          FOR           |           FOR           |         FOR         |\t\t\t*\n");
	printf("*\t\t   | Arithmetic Operations  | Trigonometric Functions |      Factorial      |\t\t\t*\n");
	printf("*\t\t   |        Press a         |         Press t         |       Press f       |\t\t\t*\n");
	printf("*\t\t   |------------------------|-------------------------|---------------------|\t\t\t*\n");
	printf("*\t\t   |           FOR          |         FOR             |         SECRET      |\t\t\t*\n");
	printf("*\t\t   |          Power         |    Linear equation      |        A Secret     |\t\t\tq\n");
	printf("*\t\t   |         Press p        |        Press e          |      Press ??????   |\t\t\t*\n");
	printf("*\t\t   |------------------------|-------------------------|---------------------|\t\t\t*\n");
	printf("**************************************************************");
	printf("***************************************************\n");
}

void print_name_trigonometric_menu(void)
{
	system("cls");
	printf("\t\t\t                             TRIGONOMETRIC FUNCTIONS            \n");
	printf("\t\t\t ________________________________________________________________________\n");
	printf("\t\t\t|          FOR           |           FOR           |          FOR        |\n");
	printf("\t\t\t|      Sin Function      |      Cos Function       |      Tan Function   |\n");
	printf("\t\t\t|        Press 1         |         Press 2         |        Press 3      |\n");
	printf("\t\t\t|------------------------|-------------------------|---------------------|\n");
	printf("\t\t\t|           FOR          |           FOR           |         FOR         |\n");
	printf("\t\t\t|    Cosecant Function   |     Secant Function     |  Cotangent Function |\n");
	printf("\t\t\t|         Press 4        |        Press 5          |       Press 6       |\n");
	printf("\t\t\t|------------------------|-------------------------|---------------------|\n");
}

void print_name_lca_diagrams(void)
{
	system("cls");
	printf("\t\t\t                  LCA DIAGRAMS          \n");
	printf("\t\t\t _______________________________________________\n");
	printf("\t\t\t|         FOR          |         FOR            |\n");
	printf("\t\t\t| Resistors in series  | Resistors in parallel  |\n");
	printf("\t\t\t|        Press r       |         Press r        |\n");
	printf("\t\t\t|----------------------|------------------------|\n");
	printf("\t\t\t|         FOR          |         FOR            |\n");
	printf("\t\t\t| Inductors in series  | Inductors in parallel  |\n");
	printf("\t\t\t|        Press l       |         Press l        |\n");
	printf("\t\t\t|----------------------|------------------------|\n");
	printf("\t\t\t|         FOR          |         FOR            |\n");
	printf("\t\t\t| Capacitors in series | Capacitors in parallel |\n");
	printf("\t\t\t|        Press c       |         Press c        |\n");
	printf("\t\t\t|----------------------|------------------------|\n");
}

void print_resistances_diagram_series(int r)
{
	if (r <= 5)
	{
		printf("\n");
		printf("|---");
		for (int i = 0; i < r; i++)
			printf("----/\\/\\/\\/\\---");
		printf("-----|\n");
		printf("\t   ");
		for (int i = 0; i < r; i++)
			printf("R%d\t        ", i + 1);
		printf("\n\n");
	}
	else printf("---max limit reached---\a\n");
}

void print_resistances_diagram_parallel(int r)
{
	if (r <= 5)
	{
		printf("\n");
		for (int i = 0; i < r; i++)
		{
			printf("|---/\\/\\/\\/\\---|   R%d\n", i + 1);
			if (i<r - 1)
				printf("|              |\n");
		}
		printf("\n");
	}
	else printf("---max limit reached---\a\n");
}

void print_inductors_diagram_series(int l)
{
	if (l <= 5)
	{
		printf("\n");
		printf("|---");
		for (int i = 0; i < l; i++)
			printf("----()()()()---");
		printf("-----|\n");
		printf("\t   ");
		for (int i = 0; i < l; i++)
			printf("L%d\t        ", i + 1);
		printf("\n\n");
	}
	else printf("---max limit reached---\a\n");
}

void print_inductors_diagram_parallel(int l)
{
	if (l <= 5)
	{
		printf("\n");
		for (int i = 0; i < l; i++)
		{
			printf("|---()()()()---|   L%d\n", i + 1);
			if (i<l - 1)
				printf("|              |\n");
		}
		printf("\n");
	}
	else printf("---max limit reached---\a\n");
}

void print_capacitors_diagram_series(int c)
{
	if (c <= 5)
	{
		printf("\n");
		printf("|---");
		for (int i = 0; i < c; i++)
			printf("---| (--");
		printf("-----|\n");
		printf("\t");
		for (int i = 0; i < c; i++)
			printf("C%d\t", i + 1);
		printf("\n\n");
	}
	else printf("---max limit reached---\a\n");
}

void print_capacitors_diagram_parallel(int c)
{
	if (c <= 5)
	{
		printf("\n");
		for (int i = 0; i < c; i++)
		{
			printf("|---| (---|   C%d\n", i + 1);
			if (i<c - 1)
				printf("|         |\n");
		}
		printf("\n");
	}
	else printf("---max limit reached---\a\n");
}

void voltage_division(void)
{
	int sum = 0;
	char series_parallel_check = '0';
	int number_resistors = 0;
	double voltage = 0;
	double voltage_division = 0;
	double resistor = 0;
	double resistors = 0;

	system("cls");
	printf("Enter the value of voltage of battery: ");
	scanf("%lf", &voltage);

	printf("Enter the value of resistance across which the voltage is to be measured: ");
	scanf("%lf", &resistor);

	printf("Enter number of resistances: ");
	scanf("%d", &number_resistors);

	fseek(stdin, 0, SEEK_END);
	printf("Are they connected in series or parallel?\n PRESS S for series and P for parallel: ");
	scanf(" %c", &series_parallel_check);

	switch (toupper(series_parallel_check))
	{
	case 'S':
		printf("Enter the value of remaining resistances\n");
		for (int i = 0; i<number_resistors - 1; i++)
		{
			printf("Enter the value of resistance%d ", i + 1);
			scanf("%lf", &resistors);
			sum += resistors;
		}
		voltage_division = (resistor / (sum + resistor))*voltage;
		printf("Value of volatge across resistance %.2lf = %.2lf \n", resistor, voltage_division);
		break;

	case 'P':
		printf("Voltage is the same as the voltage of battery which is %.2lf \n", voltage);
		break;

	default: printf("---Sahi input de---\a\n");
	}
}

void quiz_calculator(void)
{
	float max_marks = 0, min_marks = 56000, sum_marks = 0;  /*larger value of min is taken so that
															student marks less than min are stored in min*/
	int number_students = 0;

	float student_marks = 0, your_marks = 0;
	float average_marks = 0;

	printf("Enter your marks: ");
	scanf("%f", &your_marks);

	printf("Enter number of students in class: ");
	scanf("%d", &number_students);

	printf("Enter the marks of students other than you\n");
	for (int i = 0; i<number_students - 1; i++)
	{
		printf("Enter the marks of student%d: ", i + 1);
		scanf("%f", &student_marks);

		if (student_marks>max_marks)
			max_marks = student_marks;
		if (student_marks<min_marks)
			min_marks = student_marks;
		sum_marks += student_marks;
	}
	average_marks = sum_marks / number_students;

	printf("Highest marks: %.1f\n", max_marks);
	printf("Lowest marsk: %.1f\n", min_marks);
	printf("Average marks: %.1f\n", average_marks);

	if (your_marks>average_marks)
		printf("-----You are above average-----\n");
	else if (your_marks<average_marks)
		printf("-----You are below average-----\n");
	else if(your_marks==average_marks)
		printf("-----You are on average-----\n");
	else printf("---You have given wrong input---");
}

double resistor_series(int resistor_number)
{
	double resistance_series = 0;
	double total_resistance_s = 0;

	for (int i = 0; i < resistor_number; i++)
	{
		printf("Enter value of resistance %d (unit-ohm): ", i + 1);
		scanf("%lf", &resistance_series);
		total_resistance_s += resistance_series;
	}
	return total_resistance_s;
}

double resistor_parallel(int resistor_number)
{
	double resistance_parallel = 0;
	double total_resistance_p = 0;

	for (int i = 0; i < resistor_number; i++)
	{
		printf("Enter value of resistance %d (unit-ohm): ", i + 1);
		scanf("%lf", &resistance_parallel);
		total_resistance_p += (1 / resistance_parallel);
	}
	return 1 / total_resistance_p;
}

double inductor_series(int inductor_number)
{
	double inductance_series = 0;
	double total_inductance_s = 0;

	for (int i = 0; i < inductor_number; i++)
	{
		printf("Enter value of inductance %d (unit-henry): ", i + 1);
		scanf("%lf", &inductance_series);

		total_inductance_s += inductance_series;
	}
	return  total_inductance_s;
}

double inductor_parallel(int inductor_number)
{
	double inductance_parallel = 0;
	double total_inductance_p = 0;

	for (int i = 0; i < inductor_number; i++)
	{
		printf("Enter value of inductance %d (unit-henry): ", i + 1);
		scanf("%lf", &inductance_parallel);

		total_inductance_p += (1 / inductance_parallel);
	}
	return 1 / total_inductance_p;
}

double capacitor_series(int capacitor_number)
{
	double capacitance_series = 0;
	double total_capacitance_s = 0;

	for (int i = 0; i < capacitor_number; i++)
	{
		printf("Enter value of capacitance %d (unit-farad): ", i + 1);
		scanf("%lf", &capacitance_series);
		total_capacitance_s += (1 / capacitance_series);
	}
	return 1 / total_capacitance_s;
}

double capacitor_parallel(int capacitor_number)
{
	double capacitance_parallel = 0;
	double total_capacitance_p = 0;

	for (int i = 0; i < capacitor_number; i++)
	{
		printf("Enter value of capacitance %d (unit-farad): ", i + 1);
		scanf("%lf", &capacitance_parallel);
		total_capacitance_p += capacitance_parallel;
	}
	return total_capacitance_p;
}

unsigned long long int factorial_function(int number)   //Gives factorial of a number
{
	unsigned long long int factorial = 1;

	for (int i = number; i > 1; i--)  //Takes a number and decreases it every time the loop is executed to evaluate factorial
		factorial *= i;

	return factorial;
}

unsigned long long int power_function(int number)   //Gives power of a number
{
	int power = 0;
	unsigned long long int power_result = 1;

	printf("Enter the power: ");
	scanf("%d", &power);

	for (int i = 0; i < power; i++)  //Takes a number and decreases it every time the loop is executed to evaluate factorial
		power_result *= number;

	return power_result;
}

long double sin_function(long double angle)
{
	long double sin_angle = 0;

	sin_angle = angle - (angle*angle*angle) / 6 + (angle*angle*angle*angle*angle) / 120 - (angle*angle*angle*angle*angle*angle*angle) / 5040;

	return sin_angle;
}

long double cos_function(long double angle)
{
	long double cos_angle = 0;

	cos_angle = (1 - ((angle*angle) / 2) + ((angle*angle*angle*angle) / 24) - ((angle*angle*angle*angle*angle*angle) / 720));

	return cos_angle;
}

void print_invalid(void)
{
	system("cls");
	printf("\ainvalid input\n");
}

int main()
{
	// THIS PROGRAM IS A COMBINATION OF SCIENTIFIC CALCUALTOR AND LCA CALCULATOR AND CAN DO THE FOLLOWING TASKS
	//1----->Basic mathematical operations addition,subtraction,multiplication,division,remaindor
	//2----->Can solve liner equation in one vairable
	//3----->Can calculate factorial of a number
	//4----->Can evaluate power of a number
	//5----->Can evaluate trigonometric functions
	//6----->Can calculate resistances in series, parallel and delta-wye combinations
	//7----->Can evaluate inductances in series and parallel combination
	//8----->Can evaluate capacitances in series and parallel combination

	//main menu settings
	int password_try = 3;
	char main_menu_selector, EE_calculator_restart = 'y';
	char password_defined[10] = "idontknow";
	char password[100];

	int resistor_number = 0;
	int inductor_number = 0;
	int capacitor_number = 0;
	double delta_resistances[3] = { 0 };
	double delta_resistance_sum = 0;
	double wye_resistance_sum = 0;
	double wye_resistances[3] = { 0 };

	//lca calculator settings
	char main_control_lca = '0';
	char series_parallel_check = '0';
	char delta_wye_check = '0';
	char diagram_control_lca = '0';

	//scientific calculator settings
	char main_control_scinetific = '0';
	char linear_check = '0';

	long double angle = 0;
	int trigonometric_function_check = 0;
	int number;
	char factorial_control = '0';
	float result_linear_one;

	int command_number = 0, number_of_numbers = 0;                        //Main command variables
	int sum = 0, number_add = 0;                                     //Addition variables 
	float subtraction = 0, number_subtract1 = 0, number_subtract2 = 0;   // Subtraction variables
	int	multiplication = 1, number_multiply = 0;                     // Multiplication and division variables
	float division = 0, number_divide1 = 0, number_divide2 = 0;              //Division variables
	int remainder = 0, number_remainder1 = 0, number_remainder2 = 0;         //Remainder variables
	int quiz_marks[N][N], i = 0;

	int row = 0, column = 0;
	int row_sum[N] = { 0 }, column_sum[N] = { 0 };

	float a, b, c, d, e, f, x, y, detA, detAx, detAy;

	for (; EE_calculator_restart == 'y'&& password_try > 0;)
	{
		printf("Enter the password: ");

		fseek(stdin, 0, SEEK_END);   //To clear the input stream so that the enter or the space character is not saved in password
		gets(password);

		if (strcmp(password, password_defined) == 0)
		{
			print_name_heading();
			print_name_subheading();

			scanf("%c", &main_menu_selector);

			switch (toupper(main_menu_selector))
			{
			case 'S':
				print_name_scientific_menu();

				scanf(" %c", &main_control_scinetific);

				switch (toupper(main_control_scinetific))
				{
				case 'A':
					system("cls");

					for (int program_restart = 1; program_restart != 0;)
					{
						printf("Operations (1=add,2=minus,3=multiply,4=divide,5=remainder): ");
						scanf("%d", &command_number);

						switch (command_number)
						{

						case 1:
						{

							printf("How many numbers do you want to enter? ");
							scanf("%d", &number_of_numbers);

							for (int i = 0; i < number_of_numbers; i++)
							{
								printf("enter number: ");
								scanf("%d", &number_add);
								sum = sum + number_add;
							}

							printf("SUM of given numbers =%d\n", sum);
						}
						break;

						case 2:
							for (int operation_repeat = 1; operation_repeat != 0;)
							{
								printf("enter first number: ");
								scanf("%f", &number_subtract1);

								printf("enter second number: ");
								scanf("%f", &number_subtract2);

								subtraction = number_subtract1 - number_subtract2;
								printf("Difference of %f and %f = %f\n", number_subtract1, number_subtract2, subtraction);

								printf("Do you want to subtract again?(if yes enter any number other than 0,if no enter 0)");
								scanf("%d", &operation_repeat);

								system("cls");
							}
							break;

						case 3:
							printf("How many numbers do you want to enter?");
							scanf("%d", &number_of_numbers);

							for (int i = 0; i < number_of_numbers; i++)
							{
								printf("enter number:");
								scanf("%d", &number_multiply);
								multiplication = multiplication * number_multiply;
							}

							printf("MULTIPLICATION of given numbers =%d\n", multiplication);
							break;

						case 4:
							for (int operation_repeat = 1; operation_repeat != 0;)
							{
								printf("enter first number: ");
								scanf("%f", &number_divide1);

								printf("enter second number: ");
								scanf("%f", &number_divide2);

								if (number_divide2 != 0)
								{
									division = number_divide1 / number_divide2;
									printf("Number %f when divided by %f gives %f\n", number_divide1, number_divide2, division);
								}
								else printf("division by zero is undefined");

								printf("Do you want to divide again?(if yes enter any number other than 0,if no enter 0)");
								scanf("%d", &operation_repeat);

								system("cls");
							}
							break;

						case 5:
							for (int operation_repeat = 1; operation_repeat != 0;)
							{
								printf("enter first number: ");
								scanf("%d", &number_remainder1);

								printf("enter second number: ");
								scanf("%d", &number_remainder2);

								remainder = number_remainder1 % number_remainder2;
								printf("Difference of %d and %d = %d\n", number_remainder1, number_remainder2, remainder);

								printf("Do you want to subtract again?(if yes enter any number other than 0,if no enter 0)");
								scanf("%d", &operation_repeat);

								system("cls");
							}
							break;

						default:
							printf("wrong command given\n");
						}

						printf("Do you want to restart the Arithmetic calculator?(if yes enter any number other than 0,if no enter 0)");
						scanf("%d", &program_restart);

						system("cls");
					}
					break;
				case 'E':
					system("cls");
				    
					printf("FOR LINEAR EQUATION IN ONE VARIABLE PRESS O\t\t\tFOR LINEAR EQUATION IN TWO VARIABLES PRESS T\n");
					scanf(" %c", &linear_check);
					fseek(stdin, 0, SEEK_END);

						switch (toupper(linear_check))
						{
				case 'T':
							printf("Enter the coefficient of first equation of the form ax+by=c\n  ");
							scanf_s("%f %f %f", &a, &b, &c);

							fseek(stdin, 0, SEEK_END);
							printf("Enter the coefficient of second equation of the form dx+ey=f\n  ");
							scanf_s("%f %f %f", &d, &e, &f);

							detA = (a*e) - (b*d);
							detAx = (c*e) - (b*f);
							detAy = (a*f) - (c*d);

							x = detAx / detA;
							y = detAy / detA;

							printf("The value of x is:%2f \n", x);
							printf("The value of y is:%2f \n", y);
							break;
				case 'O':
					printf("Enter cofficient of x and constants of linear equation of the form aX+b=c \n");
					scanf_s("%fx+%f=%f", &a, &b, &c);

					result_linear_one = (c - b) / a;
					printf("\nSolution is X=%.2f\n", result_linear_one);
					break;
				default: print_invalid();
						}
					break;

				case 'Q':
					system("cls");

					printf("\t\t\tQUIZ AVERAGE CALCULATOR\n");
					printf("Enter marks of students in class in quiz and it will give you maximum,minmum and average marks\n");
					quiz_calculator();

					break;

				case 'T':
					system("cls");

					print_name_trigonometric_menu();
					printf("Which trigonometric function you want to evaluate? ");

					scanf("%d", &trigonometric_function_check);

					switch (trigonometric_function_check)
					{
					case 1:
						printf("Enter the value of angle: ");
						scanf("%lf", &angle);

						printf("%lf\n", sin_function(angle));
						break;
					case 2:
						printf("Enter the value of angle: ");
						scanf("%lf", &angle);

						printf("%lf\n", cos_function(angle));
						break;
					case 3:
						printf("Enter the value of angle: ");
						scanf("%lf", &angle);

						printf("%lf\n", sin_function(angle) / cos_function(angle));
						break;
					case 4:
						printf("Enter the value of angle: ");
						scanf("%lf", &angle);

						printf("%lf\n", 1 / cos_function(angle));
						break;
					case 5:
						printf("Enter the value of angle: ");
						scanf("%lf", &angle);

						printf("%lf\n", 1 / sin_function(angle));
						break;
					case 6:
						printf("Enter the value of angle: ");
						scanf("%lf", &angle);

						printf("%lf\n", cos_function(angle) / sin_function(angle));
						break;

					default: print_invalid();
					}
					break;

				case 'F':
					system("cls");

					printf("Enter the number of which you want to take factorial: ");
					scanf("%d", &number);

					if (number < 66)       //Maximum number that can be entered is 65 because at larger number program is out of memory
						printf("%llu\n", factorial_function(number));
					else
						printf("number is so large");

					break;

				case 'P':
					system("cls");

					printf("Enter the number of which you want to take power: ");
					scanf("%d", &number);

					printf("%llu\n", power_function(number));
					break;

				default: print_invalid();
				}
				break;

			case 'L':
				fseek(stdin, 0, SEEK_END);        //input stream is washed

				print_name_lca_menu();
				scanf(" %c", &main_control_lca);

				switch (toupper(main_control_lca))
				{
				case 'R':
					system("cls");

					printf("How many resistances do you want to enter? ");
					scanf("%d", &resistor_number);

					printf("Do you want to connect them in series or in parallel?(s for series,p for parallel): ");
					scanf(" %c", &series_parallel_check);

					switch (toupper(series_parallel_check))
					{
					case 'P':
						printf("%.2lf ohms\n", resistor_parallel(resistor_number));
						break;
					case 'S':
						printf("%.2lf ohms\n", resistor_series(resistor_number));
						break;
					default: print_invalid();
					}
					break;

				case 'L':
					system("cls");

					printf("How many inductors do you want to enter? ");
					scanf("%d", &inductor_number);

					printf("Do you want to connect them in series or in parallel?(s for series,p for parallel): ");
					scanf(" %c", &series_parallel_check);

					switch (toupper(series_parallel_check))
					{
					case 'P':
						printf("%.2lf henry\n", inductor_parallel(inductor_number));
						break;
					case 'S':
						printf("%.2lf henry\n", inductor_series(inductor_number));
						break;
					default: print_invalid();
					}
					break;

				case 'V':
					voltage_division();
					break;

				case 'W':
					system("cls");
					fseek(stdin, 0, SEEK_END);

					print_name_lca_diagrams();
					scanf("%c", &diagram_control_lca);

					switch (toupper(diagram_control_lca))
					{
					case 'R':
						system("cls");
						printf("Enter number of resistances:(max limit=5) ");
						scanf("%d", &resistor_number);

						fseek(stdin, 0, SEEK_END);
						printf("Do you want to connect them in series or parallel?");
						scanf("%c", &series_parallel_check);

						switch (toupper(series_parallel_check))
						{
						case 'S':
							print_resistances_diagram_series(resistor_number);
							break;
						case 'P':
							print_resistances_diagram_parallel(resistor_number);
							break;
						default: print_invalid();
						}
						break;
					case 'L':
						system("cls");
						printf("Enter number of inductors:(max limit=5) ");
						scanf("%d", &inductor_number);

						fseek(stdin, 0, SEEK_END);
						printf("Do you want to connect them in series or parallel?");
						scanf("%c", &series_parallel_check);

						switch (toupper(series_parallel_check))
						{
						case 'S':
							print_inductors_diagram_series(inductor_number);
							break;
						case 'P':
							print_inductors_diagram_parallel(inductor_number);
							break;
						default: print_invalid();
						}
						break;

					case 'C':
						system("cls");
						printf("Enter number of capacitors:(max limit=5) ");
						scanf("%d", &capacitor_number);

						fseek(stdin, 0, SEEK_END);
						printf("Do you want to connect them in series or parallel?");
						scanf("%c", &series_parallel_check);

						switch (toupper(series_parallel_check))
						{
						case 'S':
							print_capacitors_diagram_series(capacitor_number);
							break;
						case 'P':
							print_capacitors_diagram_parallel(capacitor_number);
							break;
						default: print_invalid();
						}
						break;

					default: system("cls"); print_invalid();
					}
					break;

				case 'C':
					system("cls");

					printf("How many capacitors do you want to enter? ");
					scanf("%d", &capacitor_number);

					printf("Do you want to connect them in series or in parallel?(s for series,p for parallel): ");
					scanf(" %c", &series_parallel_check);

					switch (toupper(series_parallel_check))
					{
					case 'P':
						printf("%.2lf farads\n", capacitor_parallel(capacitor_number));
						break;

					case 'S':
						printf("%.2lf farads\n", capacitor_series(capacitor_number));
						break;

					default: system("cls"); print_invalid();
					}
					break;

				case 'D':
					system("cls");

					fseek(stdin, 0, SEEK_END);

					printf("To convert delta/pi to wye/tee press D, To convert wye/tee to delta/pi press Y ");
					scanf(" %c", &delta_wye_check);

					switch (toupper(delta_wye_check))
					{
					case 'D':
						printf("Enter the value of resistances\n");

						for (int i = 0; i < 3; i++)
						{
							printf("R%c=", i + 97);  //97 is added because the value of a,b and c in ASCII are 97,98 and 99 respectively 
							scanf("%lf", &delta_resistances[i]);
							delta_resistance_sum += delta_resistances[i];
						}

						wye_resistances[0] = (delta_resistances[1] * delta_resistances[2]) / delta_resistance_sum;
						wye_resistances[1] = (delta_resistances[0] * delta_resistances[2]) / delta_resistance_sum;
						wye_resistances[2] = (delta_resistances[0] * delta_resistances[1]) / delta_resistance_sum;

						for (int i = 0; i < 3; i++)
						{
							printf("R%d=", i + 1);
							printf("%.2lf ohms\n", wye_resistances[i]);
						}
						break;

					case 'Y':
						printf("Enter the value of resistances\n");

						for (int i = 0; i < 3; i++)
						{
							printf("R%d=", i + 1);
							scanf("%lf", &wye_resistances[i]);
						}
						wye_resistance_sum = wye_resistances[0] * wye_resistances[1] + wye_resistances[1] * wye_resistances[2] + wye_resistances[0] * wye_resistances[2];

						delta_resistances[0] = wye_resistance_sum / wye_resistances[0];
						delta_resistances[1] = wye_resistance_sum / wye_resistances[1];
						delta_resistances[2] = wye_resistance_sum / wye_resistances[2];

						for (int i = 0; i < 3; i++)
						{
							printf("R%c=", i + 97);  //97 is added because the value of a,b and c in ASCII are 97,98 and 99 respectively
							printf("%.2lf ohms\n", delta_resistances[i]);
						}
						break;

					default: system("cls"); print_invalid();
					}

				default: system("cls"); print_invalid();
				}
				break;
			default: system("cls"); print_invalid();
			}

			fseek(stdin, 0, SEEK_END);

			printf("Do you want to run the program again?(y/n)");
			scanf("%c", &EE_calculator_restart);

			system("cls");

			if (EE_calculator_restart == 'y')
			{
				password_try = 3;
			}
		}

		else
		{
			printf("wrong password\n");
			printf("remaining tries:%d\n", --password_try);
		}
	}

	system("pause");
}