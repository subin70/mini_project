#include "manager.h"
#include <string.h>
void listProduct(Product *p,int count){

  printf("===========================\n");    
  for(int i=0;i<count;i++){
      if(p[i].price==-1) continue;
      printf("%2d", i+1);
      readProduct(p[i]);
      printf("\n");
  } 
  printf("\n");
}

int selectDataNo(Product *p, int count){
  int no;
  listProduct(p, count);
  printf("번호는 (취소:0)?");
  scanf("%d", &no);
  return no;
}

void searchName(Product *p, int count){
	int scount = 0;
	char search[20];
	printf("찾으시는 제품 이름은?");
	scanf("%s", search);
	
	printf("=======================\n");	
	for (int i=0;i<count;i++){
		if(p[i].price == -1) continue;
		if(strstr(p[i].name,search)){
			readProduct(p[i]);
			scount++;
		}
	}
	if(scount ==0) printf("검색 결과 없음\n");
	printf("\n");
} 

void searchStar(Product *p, int count){
	int scount = 0;
	int search_s = 0;
	printf("찾으시는 상품의 별점수?");
	scanf("%d", &search_s);
	
	printf("======================\n");
	for(int i=0;i<count;i++){
		if(p[i].price == -1) continue;
		if(p[i].star==search_s){
			readProduct(p[i]);
			scount++;
		}
	}
	if(scount == 0)printf("검색 결과 없음\n");
	printf("\n");
}
void searchGram(Product *p, int count){
	int scount =0;
	int search_g =0;
	printf("찾으시는 상품의 중량은?");
	scanf("%d",&search_g);
	
	printf("======================\n");
	for(int i=0;i<count;i++){
		if(p[i].price == -1) continue;
		if(p[i].gram==search_g){
			readProduct(p[i]);
			scount++;
		}
	}
	if(scount==0)printf("검색 결과 없음\n");
	printf("\n");
}
