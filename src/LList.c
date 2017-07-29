#include <stdio.h>
#include <stdlib.h>
#include "LList.h"
#include <string.h>

outLList * init_outLList() {
	outLList *llist = (outLList *)malloc(sizeof(outLList));
	llist->length = 0;
	return llist;
}

int destory_outLList(outLList *llist) {
	free(llist);
	llist = NULL;
	return 0;
}

int push_outLList(outLList *llist, const char *output_text) {
	strcpy(llist->nodes[llist->length], output_text);
	llist->length++;
	return 0;
}

char * pop_outLList(outLList *llist) {
	char node[MAXSIZE_RECORD];  
	strcpy(node, llist->nodes[llist->length]);
	strcpy(llist->nodes[llist->length], NULL);  //删除内容
	llist->length--;
	return node;
}

int output_outLList(outLList *llist, FILE *f1) {  //这是唯一和文件接触的点
	int length = llist->length;
	for (int i = 0; i < length; i++)
	{
		fprintf(f1, llist->nodes[i]);
	}
	fclose(f1);
	return 0;
}