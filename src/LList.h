#pragma once  //designed to cause the current source file to be included only once in a single compilation.
#define MAXSIZE_RECORD 50  //每行输出最多字符数
#define MAXSIZE_LLIST 5000000  //在一次清空前, 链表最多允许有多少结点, 内存需求:节点数100k => 5MByte, 1M => 50MByte, 10M =>500MByte

/*输出链表*/
typedef struct outLList {
	char nodes[MAXSIZE_LLIST][MAXSIZE_RECORD];
	int length;
}outLList;

outLList * init_outLList();
int destory_outLList(outLList *llist);
int push_outLList(outLList *llist, const char *output_text);
char * pop_outLList(outLList *llist);
int output_outLList(outLList *llist, FILE *f1);