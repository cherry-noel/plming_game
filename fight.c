#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int mon_n;
int classroom;

//mon_check():monster ���� ���θ� mon=rand()%(���� ��)�� ��ȯ�� mon�� 0�� �ƴϸ� fight() ȣ��
int mon_check() {
	return mon_n = rand() % 6;
}


typedef struct Skill {
	char skill_name[20];
	int damage;
	int effect; //1 : ������ 1~3ĭ ���� 2 : ü�� ȸ�� 5~30 3: �߰� ������ 15~30
	int skill_type; //1 : �ڵ�, 2 : ����, 3 : ����, 4 : ����
}skill;

skill s1 = { "�ڵ��ϱ�", 20, 1, 1 };
s1_point = &s1;

skill s2 = { "�����", 5, 2, 1};
s2_point = &s2;

skill s3 = { "Ǫ���� ��ȯ",30,3,2 };
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
	struct Skill* skill_point;
	int mon_type; //1 : �ڵ�, 2 : ����, 3 : ����, 4 : ����

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

mon m1 = { 1, 200, 10, "�ùֽǽ�", s1_point , 1};
mon m2 = { 2,150,20,"ȸ�θ��ؼ�", s1_point, 3};
mon m3 = { 3,130,10,"�������", s6_point, 2};

void stay(player* player) {
	player->player_health += (rand() % 20);
}

void fight(mon* mon_point) {

	int action;
	int act_num;
	
	printf("%s��(��) ��Ÿ����!",mon->mon_name);

	while (mon->mon_health) {

		printf("\n\n\n\n\n��.");
		for (int i = 10; i = 0; i--) {
			printf("__.");
		}
		printf("mon");
		for (10 - i; i = 0; i) {
			printf(".__");
		}
		
		
			printf("\n\n�ൿ�� �����Ͻʽÿ�.");
			scanf("%d", &action);
	
			if (action == 1) {
				normal_attack();
			}
			else if (action == 2) {
				skill(); //�迭�� ����� ��ų���� �ְ� �� ��ų�� �ش��ϴ� ������ �����ͷ� ����
			}
			else if (action == 3) {
				act_num = rand() % 3;
				if (act_num == 0) {
					printf("\n������ �־���. �̷��� �ɱ�...?\n");
					stay();//�޽� �� hp ���� ���
				}
				else if (act_num == 1) {
					printf("\n������ �־���. ������ �� ����.\n");
					stay();
				}
				else if (act_num == 2) {
					printf("\n������ �־���. ���߿� �ʱ� �����޶�� �ؾ���.\n");
					stay();
				}
			}
			else if (action == 4) {
				stop();
			}
			else {
				printf("�ùٸ� ������ �ƴմϴ�.");
				continue;
			}
		}

	mon = 0;
}

int main() {

	int classroom = 0;

	srand(time(NULL));

	if (classroom != 0) mon_check(); //���ǽ� ����ø��� ���� üũ
	if (mon_check()) {
		printf("���� ����!");
		fight();
	}
}