#include "holberton.h"
char *_getenv(const char *name);
void p_path(char *list);
list_t *add_node_end(list_t **head, const char *str);

int main(void)
{
        p_path(_getenv("PATH"));
        return (0);
}

char *_getenv(const char *name)
{
        extern char ** environ;
        int i, c;
        size_t j;

        for (i = 0; environ[i] != '\0'; i++)
        {
                for (j = 0; environ[i][j] != '='; j++)
                {
                }
                c = strncmp(environ[i], name, j);
                if ( c == 0) /*if 0 it means there is a coincidence*/
                {
                        strtok(environ[i], "=");
                        return(strtok(NULL, "="));
		}
	}
	return (NULL);
}

void p_path(char *dir) /* get the return of _getenv */

{
        char *token;
	list_t *head;
        head = NULL;

        if (dir == NULL)
                return;

        token = strtok(dir, ":");
        while (token)
        {
		printf("%s\n", token);
		add_node_end(&head, token);
		token = strtok(NULL, ":"); /*this allows to move the token to the next,
					     after ":" */
        }
}

/**
 * add_node_end - inserts node at the end.
 * @head: pointer to pointer
 * @str: string
 * Return: adress of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL; /*the function adds a node at the end and it creates*/
	list_t *aux = *head;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new;
	}
	return (new);
}
