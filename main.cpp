/*� �� ����� ���� �������, ���� �� ��� ���������� ���� ��. �������� ����, ���� ����� �������. ������� ������
���� ������: ����, ����, ����, ������. ����� ������� ������ ��������, ���� ����������� ���� �������.
����� ������ �� ���� ��� (�������������� std::string) � ������� �������, ��� ��������, ������ ����� �� ����
��������, ���� �� �����. �������� ������� printMonster(), ��� ������ ������� ��� �������. �������� �������
������ ����, ����������� �� (������� � ������������� auto � ���������� ������������). � �������� ����������
�������� ���� ����� �������������� ������� ����� auto. ��� ��������� ����� ������� �������������� decltype
��� �� ����������.*/
#include <iostream>

class Monsters {
protected:
	std::string monstrtype;
	std::string name;
	int hp;
	int armor;
public:
	void MonstersData(std::string monstrtype,std::string name,int hp,int armor) {
		this->monstrtype = monstrtype;
		this->hp = hp;
		this->armor = armor;
		this->name = name;
		/*if (hp > 0) {
			this->hp;
		}
		else
			hp = 20;
		if (armor > 0)
			this->armor;
		else
			armor = 0;
		this->name;*/
	}
	void printMonster() {
		std::cout << "Monstr's type is " << monstrtype << std::endl;
		std::cout << "Monstr's name is " << name << std::endl;
		std::cout << "HP = " << hp << std::endl;
		std::cout << "Armor = " << armor << std::endl;
	}
};

class Orcs : public Monsters {
protected:
	int speed;
	int power;
public:
	void OrcsData(std::string monstrtype, std::string name, int hp, int armor, int speed, int power) {
		MonstersData(monstrtype,name, hp, armor);
		this->speed = speed;
		this->power = power;
		/*if (speed > 0) {
			this->speed;
		}
		else
			speed = 10;
		if (power > 0)
			this->power;
		else
			power = 3;*/
	}
	void printOrcs() {
		Monsters::printMonster();
		std::cout << "Speed = " << speed << std::endl;
		std::cout << "Power = " << power << std::endl;
	}
};

class Trolls : public Monsters {
protected:
	int magic;
	int archerySkill;
public:
	void TrollsData(std::string monstrtype, std::string name, int hp, int armor, int magic, int archerySkill) {
		MonstersData(monstrtype, name, hp, armor);
		auto addmagic = 1;
		this->magic = magic + addmagic;
		this->archerySkill = archerySkill;
		/*if (magic > 0) {
			this->magic;
		}
		else
			magic = 5;
		if (archerySkill > 0)
			this->archerySkill;
		else
			archerySkill = 1;*/
	}
	void printTrolls() {
		Monsters::printMonster();
		std::cout << "Magic = " << magic << std::endl;
		std::cout << "Archery Skill = " << archerySkill << std::endl;
	}
};

class Zombi : public Monsters {
protected:
	int reincarnation;
	int explosiveness;
public:
	void ZombiData(std::string monstrtype, std::string name, int hp, int armor, int reincarnation, int explosiveness) {
		MonstersData(monstrtype, name, hp, armor);
		this->reincarnation = reincarnation;
		this->explosiveness = explosiveness;
		/*if (reincarnation > 0) {
			this->reincarnation;
		}
		else
			reincarnation = 1;
		if (explosiveness > 0)
			this->explosiveness;
		else
			explosiveness = 1;*/
	}
	void printZombi() {
		Monsters::printMonster();
		std::cout << "Reincarnation = " << reincarnation << std::endl;
		std::cout << "Explosiveness = " << explosiveness << std::endl;
	}
};

class Goblins : public Monsters {
protected:
	int wielding�lub;
	int javelinThrow;
public:
	void GoblinsData(std::string monstrtype, std::string name, int hp, int armor, int wielding�lub, int javelinThrow) {
		MonstersData(monstrtype, name, hp, armor);
		this->wielding�lub = wielding�lub;
		this->javelinThrow = javelinThrow;
		/*if (wielding�lub > 0) {
			this->wielding�lub;
		}
		else
			wielding�lub = 2;
		if (javelinThrow > 0)
			this->javelinThrow;
		else
			javelinThrow = 1;*/
	}
	void printGoblins() {
		Monsters::printMonster();
		std::cout << "Wielding club = " << wielding�lub << std::endl;
		std::cout << "Javelin throw = " << javelinThrow << std::endl;
	}
};

int main() {
	//Monsters m;
	Orcs orc1;
	Trolls troll1;
	decltype(troll1) troll2;
	Zombi zombi1;
	Goblins goblin1;
	decltype(goblin1) goblin2;
	orc1.OrcsData("Orc","Lolly", 100, 20, -27, 17);
	troll1.TrollsData("Troll","Gogil", 78, 32, 63, 1);
	troll2.TrollsData("Troll", "Morda", 60, 60, 60, 0);
	zombi1.ZombiData("Zombi", "Fred", 2, 1, 100, 200);
	goblin1.GoblinsData("Goblin", "Svystun", 84, 12, 43, 23);
	goblin2.GoblinsData("Goblin", "Korg", 84, 12, 43, 23);
	orc1.printOrcs();
	std::cout << "---------------------------------------------------------"<<std::endl;
	troll1.printTrolls();
	std::cout << "---------------------------------------------------------" << std::endl;
	troll2.printTrolls();
	std::cout << "---------------------------------------------------------" << std::endl;
	zombi1.printZombi();
	std::cout << "---------------------------------------------------------" << std::endl;
	goblin1.printGoblins();
	std::cout << "---------------------------------------------------------" << std::endl;
	goblin2.printMonster();
	return 0;
}