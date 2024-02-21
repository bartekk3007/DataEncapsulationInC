#include <stdio.h>
#include "Person.cpp"

int main(void)
{
	struct Person p1 = {'b', 25};
	printf("Favourite letter is %c and age is %d", p1.letter, p1.age);

	struct Person* p2 = constructor('a', 30);
	p2->letter = 'c';

	return 0;
}