#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
#include <string.h>

// 구조체의 정의
// 서로 다른 데이터형의 변수들을 하나로 묶어서 사용하는 기능
// 사용자 정의 형으로 만듬

typedef struct human		// 내가 만든 데이터 형 정의
{
	int age;	// 나이
	int height;	// 키
	int weight;	// 몸무게
};				// 항상 세미클론 주의

struct contact
{
	char name[20];			// contact구조체의 member변수
	char phoneNumber[20];	// contact구조체의 member변수
	int ringtone;			// contact구조체의 member변수
};

void Structure()
{
	struct human info;	// 내가 만든 데이터 형 타입의 변수 선언
	//struct human info = { 90, 185, 100 }; // 이와같이 초기화도 가능하다.
	// 초기값이 멤버의 갯수보다 부족하면 나머지 멤버들은 0으로 초기화
	// 초기값보다 멤버의 갯수가 많으면 오류
	// 초기값을 {0}으로 지정하면 모든 멤버가 0으로 초기화

	info.age = 90;
	info.height = 185;
	info.weight = 100;

	printf("info에 대한 정보 \n");
	printf("나이 : %d, 키 : %d, 몸무게 : %d \n", info.age, info.height, info.weight);
	printf("크기 : %d, 주소 : %p, 멤버1 : %p, 멤버2 : %p, 멤버3 : %p\n", sizeof(info), &info, &info.age, &info.height, &info.weight);


	struct contact ct = { "김석진", "01012345678", 0 };
	struct contact ct1 = { 0 };
	struct contact ct2 = { 0 };

	printf("이    름 : %s \n", ct.name);
	printf("전화번호 : %s \n", ct.phoneNumber);
	printf("벨 소 리 : %d \n\n", ct.ringtone);

	ct.ringtone = 5;	// ct => ringtone을 5로 변경
	strcpy(ct.phoneNumber, "01011112222");

	printf("이    름 : %s \n", ct.name);
	printf("전화번호 : %s \n", ct.phoneNumber);
	printf("벨 소 리 : %d \n\n", ct.ringtone);

	strcpy(ct1.name, "전정국");
	strcpy(ct1.phoneNumber, "01088889999");
	ct1.ringtone = 2;

	printf("이    름 : %s \n", ct1.name);
	printf("전화번호 : %s \n", ct1.phoneNumber);
	printf("벨 소 리 : %d \n\n", ct1.ringtone);

	// 연락처를 입력 받아 본다.

	printf("이   름 : ");
	scanf("%s", ct2.name);	// name이 배열이라 &안붙여도 된다.
	printf("전화번호 : ");
	scanf("%s", ct2.phoneNumber);
	printf("벨 소 리 : ");
	scanf("%d", &ct2.ringtone);

	printf("이    름 : %s \n", ct2.name);
	printf("전화번호 : %s \n", ct2.phoneNumber);
	printf("벨 소 리 : %d \n\n", ct2.ringtone);

	// 구조체 변수를 다른 구조체 변수로 초기화 하면
	// 동일한 멤버간에 1:1 복사해서 초기화 한다.
	struct contact ct3 = ct1;

	printf("이    름 : %s \n", ct3.name);
	printf("전화번호 : %s \n", ct3.phoneNumber);
	printf("벨 소 리 : %d \n\n", ct3.ringtone);

	// 주의점
	// 같은 구조체 형의 변수를 대입할 때도 동일한 멤버간에 1:1
	// ct2 = ct; // ct의 모든 멤버 -> ct2로 대입
	// 구조체 변수를 초기화 할때 처럼 {}안에 값은 대입할 수 없다.
	// ex) ct2 = {"김석진", "01011112222", 4}; --> 초기화 할때만 사용 가능하다
	// 배열의 특징 때문에 char의 배열인 string은 대입이 불가능하다.
	// ex) ct2.name = ct1.name; --> 불가능하다.
	// 따라서 char의 배열인 string을 변경하려면 strcpy를 사용해야한다.
	// ex) strcpy(ct2.name, ct1.name);
}