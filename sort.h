#ifndef SORT_H
#define SORT_H
#include <stddef.h>
void print_array(const int *array, size_t size);

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void swap(listint_t *p, listint_t *f);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap_int(int *a, int *b);
void sort(int *array, int lo, int hi, size_t size);
int pivot(int *array, int lo, int hi, size_t size);

void shell_sort(int *array, size_t size);
int gap(size_t n);
void shell_sort(int *array, size_t size);
void swaping(int *a, int *b);
#endif
