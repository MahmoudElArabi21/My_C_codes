#include "single_llist.h"
#include "double_llist.h"

// void s_list_insert_node_at_beg(struct node **list, void* data_ptr);
// void s_list_insert_node_at_end(struct node **list, void* data_ptr);
// void s_list_insert_node_after_pos(struct node *list, uint32 node_pos, void* data_ptr);
// void s_list_delete_node_at_beg(struct node **list);
// void s_list_delete_node_at_pos(struct node *list, uint32 node_pos);
// void s_list_display_all_nodes(struct node *list);
// uint32  s_list_get_length(struct node *list);

struct node *ListHead = NULL;
uint8 UserChoice = 0;
uint32 ListLength = 0;

uint32 n1 = 11 , n2 = 22, n3 =33, n4 =44, n5 = 55, n6 = 66, n7 =77, n8 = 88, n9 = 99;
int main(){
    s_list_insert_node_at_beg(&ListHead, &n4);
    s_list_insert_node_at_beg(&ListHead, &n3);
    s_list_insert_node_at_beg(&ListHead, &n2);
    s_list_insert_node_at_beg(&ListHead, &n1);
    s_list_display_all_nodes(ListHead);
    s_list_insert_node_at_end(&ListHead, &n5);
    s_list_display_all_nodes(ListHead);
    s_list_insert_node_after_pos(ListHead,1, &n6);
    s_list_display_all_nodes(ListHead);
    s_list_delete_node_at_beg(&ListHead); 
    s_list_display_all_nodes(ListHead);
    s_list_insert_node_at_beg(&ListHead, &n1);
    s_list_display_all_nodes(ListHead);
    s_list_delete_node_at_pos(ListHead, 3);
    s_list_display_all_nodes(ListHead);
    s_list_delete_node_at_pos(ListHead, 5);
    s_list_display_all_nodes(ListHead);
}