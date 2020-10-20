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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);

#endif
