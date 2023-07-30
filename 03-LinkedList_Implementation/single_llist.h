#ifndef _SLLIST_H
#define _SLLIST_H

#include "../my_types.h"
    
struct node{
    struct node *node_link;
    void *node_data;
};

void s_list_insert_node_at_beg(struct node **list, void* data_ptr);
void s_list_insert_node_at_end(struct node **list, void* data_ptr);
void s_list_insert_node_after_pos(struct node *list, uint32 node_pos, void* data_ptr);
void s_list_delete_node_at_beg(struct node **list);
void s_list_delete_node_at_pos(struct node *list, uint32 node_pos);
void s_list_display_all_nodes(struct node *list);
uint32  s_list_get_length(struct node *list);


#endif