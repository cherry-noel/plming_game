#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int mon_number;
int classroom;

//mon_check():monster 등장 여부를 mon=rand()%(몬스터 수)로 반환해 mon이 0이 아니면 fight() 호출
int mon_check() {
	return mon_number = rand() % 6;
}



//스킬 관련

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


void skill_player(player* pp) {


}



//몬스터 관련

typedef struct Monster {
	int mon_num;
	int mon_health;
	int mon_attack;
	char mon_name[20];
	skill* skill_pointer;
	int mon_type; //1 : 코딩, 2 : 수학, 3 : 물리, 4 : 교양

}mon;

mon m1 = { 1, 200, 10, "플밍실습", s1p , 1};
mon m2 = { 2,150,20,"회로망해석", s1p, 3};
mon m3 = { 3,130,10,"선형대수", s6p, 2};

void monster_skill(mon* mp) {

	if(mp->skill)

	//몬스터만 알려주면 스킬 알아서 쓰게 할 순 없나?
}



//player 관련

struct player {

	skill player_skill{ skill skill_coding[20] = [s1,s2,s3,s4,...], int skillarraynum;};

};

void stay(player* pp) {

	int luck = rand() % 15;
	pp->player_health += (rand() % 20+luck);

}

void normal_attack(mon m, mon* mp, player* pp) {
	mp = &m;
	int normal_dam;
	int player_type;
	int luck;
	float luck_damage;

	if (mp->mon_type == 1) {
		player_type = (pp->coding);
	}
	else if (mp->mon_type == 2) {
		player_type = (pp->math);
	}
	else if (mp->mon_type == 3) {
		player_type = (pp->physics);
	}
	else if (mp->mon_type == 4) {
		player_type = (pp->elective);
	}

	player_type = player_type / 10;

	luck = rand() % 10;

	if (luck <= 5) luck_damage == 1;
	else if (luck <= 8) luck_damage == 1.2;
	else luck_damage = 1.5;

	(int)normal_dam = (pp->attack * player_type * luck_dam); //mon_health에 float으로 빼주면 깔끔하게 0이 안 될수도 있음->문제 발생 가능
	mon_point->mon_health = mp->mon_health - normal_dam;
}



//fight 본체

void fight(mon* mp,player* pp) {

	int action;
	int act_num;
	int mon_act;
	int skill_num;
	int i;
	int time_over=2;
	char montype[20];

	if (mp->mon_type == 1) strcpy(montype,"코딩");
	else if (mp->mon_type == 2) strcpy(montype, "수학");
	else if (mp->mon_type == 3) strcpy(montype = "물리");
	else if (mp->mon_type == 4) strcpy(montype = "교양");

	printf("%s이(가) 나타났다!",mp->mon_name);

	while (1) {

		while (turn <= 10) {
			int i = 10;
			int turn_num = i - turn;

			printf("\n\n\n\n\n나.");
			for (turn_num; turn_num > 0; turn_num--) {
				printf("__.");

			}
			printf("mon");
			if (turn == 10 && time_over == 2) {
				printf("두 턴 후 과제 마감입니다.");
				time_over--;
			}
			else if (turn == 10 && time_over == 1) {
				printf("한 턴 후 과제 마감입니다.");
				time_over--;
			}
			else if (turn == 10 && time_over == 0) {
				printf("과제 마감기한 초과!");
				goto end;
				
			}

			printf("내 체력 : %d    내 공격력 : %d    <코딩 : %d    수학 : %d    물리 : %d    교양 : %d >", pp->player_health, pp->player_attack, pp->coding, pp->math, pp->physics, pp->elective);
			printf("\n적 체력 : %d    적 속성 : %s", mp->mon_health, montype); //너무 많은 정보를 주면 게임 공략의 재미를 해치므로 최소한의 정보 제공
		
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
				pp->p_skill; //배열을 만들어 스킬명을 넣고 각 스킬에 해당하는 정보를 포인터로 연결
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
				end3;
			}
			else {
				printf("올바른 선택이 아닙니다.");
				continue;
			}

			mon_act = rand() % 3;
			
			if (mon_act == 0) {

				printf("%s의 일반공격!", mp->mon_name);
				pp->health = pp->health - (mp->mon_attack * (pp->type / mon->type);  //여기 수정해야됨 pp->type 이딴거 없음
				printf("%d의 데미지를 입었다.", mp->mon_attack * (pp->type / mon->type);
			}
			else if (mon_act == 1) {
			
				printf("%s가 스킬을 사용했다!", (mp->skill_pointer->skill_name));
				monster_skill(mp);
			
			}



			if(mp->mon_health==0){
				goto end2;

			else if (pp->player_health == 0) {
				goto end1;
			}

		turn++;
		}
	
	end1:
		if (pp->player_type > 13) {//경험치 넣으려 했으나 시간 부족으로 다른 패널티
			pp->player_type -= 2;
		}
		mon_num = 0;
		break;

	end2:
		printf("축하합니다! 종강입니다!");
		pp->player_type += 4;
		mon_num = 0;
		break;
	end3:
		printf("드랍하였습니다.");
		if (pp->player_type > 10) {
			pp->player_type -= 1;
		}
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
