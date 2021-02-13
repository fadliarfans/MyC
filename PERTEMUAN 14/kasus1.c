#include<stdio.h>

struct book{
	char title[25];
	char author[30];
	char subject[25];
	int id;
};

void printstruct(struct book ps){
	printf("Book title : %s\n",ps.title);
	printf("Book author : %s\n",ps.author);
	printf("Book subject : %s\n",ps.subject);
	printf("Book book_id : %d\n",ps.id);
}

main(){	
	struct book book1 = {"C++ Programming","Balmond","C++ Programming Tutorial",9191912};
	struct book book2 = {"C# Programming","Moskov","C# Programming Tutorial",4343432};	
	printstruct(book1);
	printstruct(book2);	
}




