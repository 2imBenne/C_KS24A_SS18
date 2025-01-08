#include <stdio.h>
#include <string.h>

struct sinhVien{
	char name[100];
	int age;
	char phoneNumber[100];
};

typedef struct sinhVien sinhVien;

int main(){
	sinhVien x;
	printf("Moi nhap ten sinh vien: ");
	fgets(x.name,100,stdin);
	x.name[strcspn(x.name,"\n")] = '\0';
	
	printf("Moi nhap tuoi sinh vien: ");
	scanf("%d",&x.age);
	
	getchar();
	printf("Moi nhap sdt sinh vien: ");
	fgets(x.phoneNumber,100,stdin);
	x.name[strcspn(x.name,"\n")] = '\0';
	
	printf("Ho va Ten: %s\n",x.name);
	printf("Tuoi: %d\n",x.age);
	printf("Sdt: %s",x.phoneNumber);
}
