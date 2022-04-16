struct User
{
	char *name;
	char *email;
	int age;
};

typedef struct Computer
{
	char *name;
	char *brand;
} Computer; /* using tydef to define new data types */

int main(void)
{
	struct User user;
	struct User *ptr; /* pointer to a struct */

	user.name = "Benjamin";
	user.email = "ben@fake.com";
	user.age = 160;

	ptr = &user; /* assigning pointer */

	/* ways to access data from pointer to struct */
	(*ptr).email = "ben@hot.mail";
	ptr->age = 20;

	return (0);
}
