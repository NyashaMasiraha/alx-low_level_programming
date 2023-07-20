#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure project
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: dog structure project
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog_t;

/* function to initialize a dog struct */
void init_dog(struct dog *d, char *name, float age, char *owner);

/*function that prints a struct dog*/
void print_dog(struct dog *d);

#endif/*DOG_H*/

