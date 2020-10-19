#ifndef DOG
#define DOG

/**
 * struct dog - check the code for Holberton School students.
 * @name: string for name
 * @age: int for age
 * @owner: string for owner
 * Return: Always 0.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} doggi;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
