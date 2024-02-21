#include <stdlib.h>

struct Person
{
	char letter;
	int age;
};

struct Person* constructor(char l, int a)
{
	struct Person* ptr = (struct Person*) malloc(sizeof(struct Person));
	if (ptr)
	{
		ptr->letter = l;
		ptr->age = a;
	}
	return ptr;
}

void destructor(struct Person* p)
{
	free(p);
}