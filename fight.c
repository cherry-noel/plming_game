#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int mon_n;
int classroom;

//mon_check():monster 등장 여부를 mon=rand()%(몬스터 수)로 반환해 mon이 0이 아니면 fight() 호출
int mon_check() {
	return mon_n = rand() % 6;
}

typedef struct Skill {
	char skill_name[20];
	int damage;
	int effect; //1 : 앞으로 1~3칸 전진 2 : 체력 회복 5~30 3: 추가 데미지 15~30
	int skill_type; //1 : 코딩, 2 : 수학, 3 : 물리, 4 : 교양
}skill;

skill s1 = { "코딩하기", 20, 1, 1 };
s1_point = &s1;

skill s2 = { "디버깅", 5, 2, 1};
s2_point = &s2;

skill s3 = { "푸리에 변환",30,3,2 };
s3_point = &s3;

skill s4 = { "Pspice", 10,1,3 };
s4_point = &s4;

skill s5 = { "PPT",10,2,4 };
s5_point = &s5;

skill s6 = { "Homogeneous sol", 20, 3, 2 };
s6_point = &s6;

typedef struct Monster {
	int mon_num;
	int mon_health;
	int mon_attack;
	char mon_name[20];
	skill* skill_point;
	int mon_type; //1 : 코딩, 2 : 수학, 3 : 물리, 4 : 교양

}mon;

void normal_attack(mon m, mon * mp, player* p) {
	mp = &m;
	int normal_dam;
	int* player_type;
	if (mp->mon_type==1) {
		player_type = &(p->coding);
	}
	else if (mp->mon_type == 2) {
		player_type = &(p->math);
	}
	else if (mp->mon_type == 3) {
		player_type = &(p->physics);
	}
	else if (mp->mon_type == 4) {
		player_type = &(p->elective);
	}

	normal_dam=p->attack*p->
	mon_point->mon_health = mp->mon_health - normal_dam;
}

mon m1 = { 1, 200, 10, "플밍실습", s1_point , 1};
mon m2 = { 2,150,20,"회로망해석", s1_point, 3};
mon m3 = { 3,130,10,"선형대수", s6_point, 2};

void stay(player* player) {
	player->player_health += (rand() % 20);
}


player{
	skill player_skill { skill skill_coding=[s1,s2,s3,s4,...] };
}

void fight(mon* mon_point) {

	int action;
	int act_num;
	int skill_num;
	
	printf("%s이(가) 나타났다!",mon_point->mon_name);

	while (mon_point->mon_health) {

		printf("\n\n\n\n\n나.");
		for (int i = 10; i = 0; i--) {
			printf("__.");
		}
		printf("mon");
		int i = 10;
		for (10 - i; i = 0; i) {
			printf(".__");
		}
		
		
			printf("\n\n행동을 선택하십시오.");
			scanf("%d", &action);
	
			if (action == 1) {
				normal_attack();
			}
			else if (action == 2) {
				printf("\n\n1. 코딩");
				printf("\n2. 수학");
				printf("\n3. 물리");
				printf("\n4. 교양\n");
				scanf("%d", skill_num);

				if (skillarraynum == 1) {
					for (int i = 0; i < nums; i++) {
						
						puts(skill[i]);
					}
				}
				player_point->skill; //배열을 만들어 스킬명을 넣고 각 스킬에 해당하는 정보를 포인터로 연결
			}
			else if (action == 3) {
				act_num = rand() % 3;
				if (act_num == 0) {
					printf("\n가만히 있었다. 이래도 될까...?\n");
					stay();//휴식 시 hp 소폭 상승
				}
				else if (act_num == 1) {
					printf("\n가만히 있었다. 오늘은 좀 쉬자.\n");
					stay();
				}
				else if (act_num == 2) {
					printf("\n가만히 있었다. 나중에 필기 보여달라고 해야지.\n");
					stay();
				}
			}
			else if (action == 4) {
				stop();
			}
			else {
				printf("올바른 선택이 아닙니다.");
				continue;
			}
		}

	mon = 0;
}

int main() {

	int classroom = 0;

	srand(time(NULL));

	if (classroom != 0) mon_check(); //강의실 입장시마다 몬스터 체크
	if (mon_check()) {
		printf("전투 시작!");
		fight();
	}
}
