#include <unistd.h>  // доделать Rush01.  Сначала сделаю квадрат

void print_first_and_last_lines(int x)
{
	int star;
	star = 0; // будет выводить нужное количество звездочек в строке

	while(star < x)
	{
		write(1, "*", 1);
		star++;
	}
	write(1, "\n", 1);
}

void print_sides(int x) // выводит элементы одной строки
{
	int counter_for_x;
	counter_for_x = 0; // counter_for_x будет проходиться по каждому элемементу 
	while(counter_for_x < x)
	{
		if(counter_for_x == 0 || counter_for_x == x-1 ) 
		{
			write(1, "*", 1);
		}
		else
		{
			write(1, " ", 1);
		}
		counter_for_x++;
	}
	write(1, "\n", 1);
}

void	print_lines_one_by_one(int x, int y)
{
	int counter_for_y;
	counter_for_y = 0;
	print_first_and_last_lines(x);
	while (counter_for_y <= y - 3)
	{
		print_sides(x);
		counter_for_y++;
	}
	print_first_and_last_lines(x);
}

int main ()
{
	print_lines_one_by_one(4, 3);
	return 0;
}

// при переносе переменной в другую функцию лучше использовать для нее поинтер