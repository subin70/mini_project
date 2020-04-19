#include "product.h"

int createProduct(Product *p){
    printf("상품명은?");
    getchar();
    fgets(p->name,50,stdin);

    printf("중량은?");
    scanf("%d",&p->gram);
    printf("가격은?");
    scanf("%d",&p->price);
    printf("별점수(1~5)는?");
    scanf("%d",&p->star);

    p->stdprice = (p->price/p->gram)*10;
    return 1;
}

int readProduct(Product p){
    printf("제품명:%s 중량:%d g\n",p.name,p.gram);
    printf("가격 : %d 원\n",p.price);
    printf("10g당 %d원\n",p.stdprice);
    printf("별점개수 : %d\n",p.star);

    return 1;
}

int updateProduct(Product *p){
    printf("상품명은?");
    getchar();
    fgets(p->name,50,stdin);

    printf("중량은?");
    scanf("%d",&p->gram);
    printf("가격은?");
    scanf("%d",&p->price);
    printf("별점수(1~5)는?");
    scanf("%d",&p->star);

    p->stdprice = (p->price/p->gram)*10;
    return 1;
}

int deleteProduct(Product *p){
    p->gram = -1;
    p->price = -1;
    p->stdprice = -1;
    p->star = -1;
    
    printf("삭제됨!");
    return 1;
}

int selectMenu(){
    int menu;
    printf("\n<< 과자 관리 프로그램 >>\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n"); 
    printf("5. 파일저장\n");
    printf("6. 검색기능\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}


