#define DOG_H
#ifndef DOG_H
/**
 * struct dog - creating struct
 * @name: first
 * @age: second
 * @owner: third
 * return: 0;
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
