#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: Singly linked list node structure with an express lane.
 * in project.
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer on the first node where value is located,
 * or NULL if value is not present in list or if head is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev = NULL, *node = list;
    size_t i = 0, exp_size = sqrtl(skiplist_length(list));

    if (!list)
        return NULL;

    while (node->express && node->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               node->express->index, node->express->n);
        prev = node;
        node = node->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           prev ? prev->index : 0, node->index);
    while (node->n < value)
    {
        if (!node->next || node->next->n > value)
            break;

        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
        node = node->next;
    }

    printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    if (node->n == value)
        return node;

    return NULL;
}

/**
 * skiplist_length - Computes the number of elements in a skip list.
 * @list: Pointer to the head of the skip list.
 *
 * Return: The number of elements in the skip list.
 */
size_t skiplist_length(const skiplist_t *list)
{
    size_t n = 0;

    while (list)
    {
        n++;
        list = list->next;
    }

    return n;
}

