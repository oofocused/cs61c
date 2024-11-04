#include "ll_cycle.h"
#include <stddef.h>

int ll_has_cycle(node *head) {
  /* your code here */
  if (head == NULL)
    return 0;
  node *hare, *tortoise;
  hare = tortoise = head;
  while (1) {
    hare = hare->next;
    if (hare == NULL) {
      return 0;
    }
    hare = hare->next;
    if (hare == NULL) {
      return 0;
    }
    tortoise = tortoise->next;
    if (tortoise == hare) {
      return 1;
    }
  }
  return 0;
}
