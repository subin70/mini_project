#include "manager.h"

int main(){
    Product plist[100];
    int curcount = 0;
    int count = 0, menu;

    count = loadData(plist);
    curcount = count;

    while (1){
        menu = selectMenu();
        if (menu == 0) break;
        if (menu == 1){
            if(curcount >0){
                listProduct(plist,curcount);
            } else{
                printf("데이터 없음!\n");
            }
        }
        else if (menu == 2){
            count += createProduct(&plist[curcount++]);
       
        }
        else if (menu == 3){
	    int no = selectDataNo(plist,curcount);
	    if (no==0){
		printf("취소\n");
		continue;
	     }
            updateProduct(&plist[no-1]);
        }
        else if (menu == 4){
            int ok;
	    int no = selectDataNo(plist,curcount);
            printf("정말로 삭제하겠습니까?(삭제 : 1)");
            scanf("%d",&ok);
            if(ok==1){
                if(deleteProduct(&plist[no-1]))count--;
            }
        }
	else if (menu==5){
	    if(count==0) printf("데이터 없음\n");
	    else saveData(plist, curcount);
	}
	else if (menu==6){
	    int num;
	    printf("어떤 검색 기능을 선택하시겠습니까?\n");
	    printf("1.이름 검색\n2.별개수 검색\n3.중량검색\n");
	    scanf("%d",&num);
	    if (count==0) printf("데이터 없음\n");
	  	
	    if (num==1) searchName(plist,curcount);
	    else if (num==2) searchStar(plist,curcount);
	    else if (num==3) searchGram(plist,curcount);
	   
	}

    }
    printf("종료됨!\n");
    return 0; 
}
