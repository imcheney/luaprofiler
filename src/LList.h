#pragma once  //designed to cause the current source file to be included only once in a single compilation.
#define MAXSIZE_RECORD 50  //ÿ���������ַ���
#define MAXSIZE_LLIST 5000000  //��һ�����ǰ, ������������ж��ٽ��, �ڴ�����:�ڵ���100k => 5MByte, 1M => 50MByte, 10M =>500MByte

/*�������*/
typedef struct outLList {
	char nodes[MAXSIZE_LLIST][MAXSIZE_RECORD];
	int length;
}outLList;

outLList * init_outLList();
int destory_outLList(outLList *llist);
int push_outLList(outLList *llist, const char *output_text);
char * pop_outLList(outLList *llist);
int output_outLList(outLList *llist, FILE *f1);