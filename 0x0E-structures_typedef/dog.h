#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new typr, dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int len_str(char *str);
char *cpy_str(char *cpy_str, char *or_str);
void free_dog(dog_t *d);

#endif
