#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list
 * @str: A string (allocated with malloc)
 * @len: The length of the string
 * @next: A pointer to the next node
 *
 * Description: Defines a structure for a singly linked list node,
 * used in Holberton project.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);

#endif

