#include <stdio.h>

struct Books{
	char title[100];
	char author[50];
	char subject[100];
	int book_id;
	
} book={"C programing","KN","ComputerScience",12306};

//函数声明
void printBook(struct Books book);
void printBookByPtr(struct Books *book);
 
int main(void)
{
	printf("title:%s\n",book.title);
	printf("author:%s\n",book.author);
	printf("subject:%s\n",book.subject);
	printf("book_id:%d\n",book.book_id);
	
	
	//访问结构成员
	
	struct Books book1;
	struct Books book2;
	
	//book1 描述
	strcpy(book1.title,"C_programing");
	strcpy(book1.author,"lzf");
	strcpy(book1.subject,"CS");
	book1.book_id=54321;
	
	//book2 描述
	strcpy(book2.title,"python programing");
	strcpy(book2.author,"wkk");
	strcpy(book2.subject,"CS");
	book2.book_id=545321;
	
	//book1 info print
	printf("book1 title:%s\n",book1.title);
	printf("book1 author:%s\n",book1.author);
	printf("book1 subject:%s\n",book1.subject);
	printf("book1 book_id:%d\n",book1.book_id);
	
	//book2 info print
	printf("book2 title:%s\n",book2.title);
	printf("book2 author:%s\n",book2.author);
	printf("book2 subject:%s\n",book2.subject);
	printf("book2 book_id:%d\n",book2.book_id);
	
	printf("=========print by printBook================\n");
	//book1 info print by printFunc
	printBook(book1);
	//book2 info print by printFunc
	printBook(book2);
	
	printf("=========print by printBookByPtr============\n"); 
	//book1 info print by printFunc
	printBookByPtr(&book1);
	//book2 info print by printFunc
	printBookByPtr(&book2);
	 
}


void printBook(struct Books book)
{
	printf("book title:%s\n",book.title);
	printf("book author:%s\n",book.author);
	printf("book subject:%s\n",book.subject);
	printf("book book_id:%d\n",book.book_id);
}


void printBookByPtr(struct Books *book)
{
 	printf("book title:%s\n",book->title);
	printf("book author:%s\n",book->author);
	printf("book subject:%s\n",book->subject);
	printf("book book_id:%d\n",book->book_id);
	
} 
