#include "list.h"
#include <stdio.h>


t_list *sort_list(t_list *lst, int (*cmp)(int, int)) {
    int swapped;
    t_list *tmp = NULL;
    int temp;

    if (lst == NULL)  // If the list is empty, return immediately
        return lst;

    do {
        swapped = 0;
        tmp = lst;

        while (tmp->next != NULL) {
            if ((*cmp)(tmp->data, tmp->next->data) == 0) {
                temp = tmp->data;
                tmp->data = tmp->next->data;
                tmp->next->data = temp;
                swapped = 1;
            }
            tmp = tmp->next;
        }
    } while (swapped); 

    return lst;
}

