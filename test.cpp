#include <iostream>
#include <string>
#include <iomanip>
#include<ctime>
#include <vector>
using namespace std;


class dog{
public:
    string name ="dog";
    int age=19;
    int HP = 90;
    int attack =15;
    
    /*void bark(){
        cout<<"BARK!"<<endl;
        attack+=10;
    }*/
};

class cat{
public:
    string name = "cat";
    int HP = 60;
    int attack = 20;

    /*void Meow(){
        cout<<"MEOW!"<<endl;
        attack+=15;
    }*/
};


class rat{
public:
  string name = "rat";
  int HP = 50;
  int attack =30;

  /*void addHP(){
    cout<<"HP + 30!";
    HP+=30;
  }*/

};

class tiger{
public:
    string name = "tiger";
    int HP =120;
    int attack =40;

    /*void jump(){
        cout<<"JUMP!";
        HP+=20;
    }*/
};



void rest(){
    cout<<endl;
    for(int i =0;i<10;i++){
        cout<<"-";
    }
    cout<<endl;
}


struct animals{
    string name;
    int HP;
    int attack;
};

struct animal_ai{
    string name;
    int HP;
    int attack;
};

int Search(animals animal[],string name){
    for(int i =0;i<3;i++){
        if(name==animal[i].name){
            return i;
        }
    }
    return -1;
}

animals animal[10]; //玩家的精灵数据库
animals animal_ai[10]; //AI 的精灵数据库

void input(){
    dog dog;//create object
    cat cat;
    rat rat;
    tiger tiger;
    animal[0].name =dog.name;//把class里的数据放到animals里
    animal[0].HP =dog.HP;
    animal[0].attack=dog.attack;
    animal[1].name =cat.name;
    animal[1].HP =cat.HP;
    animal[1].attack=cat.attack;
    animal[2].name =tiger.name;
    animal[2].HP =tiger.HP;
    animal[2].attack=tiger.attack;

    animal_ai[0].name =dog.name;//把class里的数据放到ai animals里
    animal_ai[0].HP =dog.HP;
    animal_ai[0].attack=dog.attack;
    animal_ai[1].name =cat.name;
    animal_ai[1].HP =cat.HP;
    animal_ai[1].attack=cat.attack;
    animal_ai[2].name =tiger.name;
    animal_ai[2].HP =tiger.HP;
    animal_ai[2].attack=tiger.attack;
}


bool alive(animals animal[],int index){//判断生命值
    if(animal[index].HP>0){
        return true;
    }
    return false;
}

bool lose(vector<string>bag){
    for(int i =0;i<bag.size();i++){
        if(bag[i]!=""){
            return false;
        }
    }
    return true;
}


void fight(vector<string>bag){
    int ai_1 = 2;//(rand())%3;//随机数？
    int ai_2 = 0;//(rand())%3;//随机数
    cout<< "AI_1: "<<endl;//两个AI和玩家对打，每次只选一个攻击，算作一回合
    cout<<animal_ai[ai_1].name<<endl;
    cout<<animal_ai[ai_1].HP<<endl;
    cout<<animal_ai[ai_1].attack<<endl;
    rest();
    cout<< "AI_2: "<<endl;
    cout<<animal_ai[ai_2].name<<endl;
    cout<<animal_ai[ai_2].HP<<endl;
    cout<<animal_ai[ai_2].attack<<endl;
    rest();
    vector<string>bag_ai;//ai对战精灵
    bag_ai.push_back(animal_ai[ai_1].name);
    bag_ai.push_back(animal_ai[ai_2].name);
    int name;
    int num,choose;
    while(true){
        cout<<"Your turn, choose the pet: "<<endl;
        cout<<"Your pet:";
        for(int i=0;i<bag.size();i++){
            cout<<i<<":"<<bag[i]<<" ";
        }
        cin>>name;
        cout<<bag[name]<<" is going to attack!";
        string pname = bag[name];
        
        cout<<"Who do you want to attack: "<<endl;
        cout<<"enemy: ";
        for(int i =0;i<bag_ai.size();i++){//输出ai的精灵 按数字排列开
            cout<<i<<":"<<bag_ai[i]<<" ";
        }
        cin>>choose;//接收选择
        int enemy = Search(animal_ai,bag_ai[choose]);//获取ai选择的精灵的数据
        int pet = Search(animal,pname);//获取自己精灵的数据
        cout<<animal_ai[enemy].name<<" has been attacked!"<<endl;
        cout<<"HP- "<<animal[pet].attack<<endl;
        animal_ai[enemy].HP-=animal[pet].attack;//扣除ai被攻击方的血量
        cout<<"HP: "<<animal_ai[enemy].HP<<endl;

        if(!alive(animal_ai,enemy)){
            cout<<animal_ai[enemy].name <<" is dead!";
            bag_ai[choose]="";
        }
        if(lose(bag_ai)){
            cout<<"You win!";
            break;
        }
        rest();

        cout<<"AI's turn!"<<endl;
        int choose_ai=(rand()%2);
        while(bag_ai[choose_ai]==""){
            choose_ai=(rand()%2);//攻击的ai 必须还是存活状态
        }
        int choose_fai=(rand()%2);//被攻击精灵
        cout<<bag_ai[choose_ai]<<"is going to fight!"<<endl;
        cout<<bag_ai[choose_ai]<<" is going to attack "<<bag[choose_fai]<<"!"<<endl;
        cout<<bag[choose_fai]<<" has been attacked!"<<endl;
        int attack = Search(animal,bag[choose_fai]);//玩家被攻击的精灵的数据
        cout<<"HP- "<<animal_ai[attack].attack<<endl;
        animal[attack].HP-=animal_ai[attack].attack;//扣除玩家精灵的血量
        cout<<"HP: "<<animal[attack].HP<<endl;
        if(!alive(animal,enemy)){
            cout<<animal[enemy].name <<" is dead!";
            bag_ai[choose]="";
        }
        if(lose(bag_ai)){
            cout<<endl<<"You lose!";
            break;
        }

    }

}


int main(){
    input();
    string name;
    vector<string> bag;//个人背包
    for(int j=0;j<2;j++){//选两次
        cout<<"enter your pet:";
        cin>>name;
        int i = Search(animal,name);
        while (i==-1){
            cout<<"enter your pet:";
            cin>>name;
            i = Search(animal,name);
        }
        bag.push_back(name);
        cout<<"your pet: "<<animal[i].name<<endl;
        cout<<"HP: "<<animal[i].HP<<endl;
        cout<<"Attack: "<<animal[i].attack<<endl;
        cout<<"your bag: ";
        for(vector<string>::iterator i=bag.begin();i!=bag.end();i++){
            cout<<*i<<" ";
        }
        rest();
        }
    fight(bag);
    
}


    
    
 
    
    



