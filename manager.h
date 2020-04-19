#include "product.h"

void listProduct(Product *p,int count); // 전체 product
int selectDataNo(Product *p, int count); //다중 데이터 선택
 
void searchName(Product *p, int count); //이름 검색
void searchStar(Product *p, int count); // 별 개수 검색
void searchGram(Product *p , int count); // 중량 검색

void saveData(Product *p, int count); //파일 저장
int loadData(Product *p); //파일 불러오기


