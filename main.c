#include <stdio.h>

int main() {
	printf("hello\n");
/*
int a[5]={1,2,3,4};
printf("%ls\n",&a[0]) ;
printf("%d\n",a[0]);
printf("%d\n",*a);
  */
    int a[1][2]={{1,2},{3,4}};

    printf("%ls",*(a)  );
    printf("%ls", *(a+1) );
    printf("%ls", (*(a+1)+1) );
//printf("%d",    )  
    return 0;

}
