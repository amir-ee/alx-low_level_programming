#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *prv;
    struct node *nxt;
};

int main()
{
    struct node *head;
    struct node *pnt_0;
    struct node *pnt_1;
    struct node *pnt_2;
    struct node *head_fake;

    pnt_0 = (struct node *)malloc(sizeof(struct node));
    pnt_1 = (struct node *)malloc(sizeof(struct node));
    pnt_2 = (struct node *)malloc(sizeof(struct node));

    head = pnt_0;

    /* 0 */

    head->data = 0;
    head->prv = NULL;
    head->nxt = pnt_1;

    /* 1 */

    head->nxt->data = 1;
    head->nxt->prv = head;
    head->nxt->nxt = pnt_2;

    /* 2 */

    head->nxt->nxt->data = 2;
    head->nxt->nxt->prv = head->nxt;
    head->nxt->nxt->nxt = NULL;

    /* displaying */

    head_fake = head;

    while (head_fake != NULL)
    {
        printf("-> %d\n", head_fake->data);
        head_fake = head_fake->nxt;
    }
}