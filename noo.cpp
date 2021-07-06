#include <iostream>
 using namespace std;
 class imw;
 class Menu{
   int x;
   public :
   Menu(){    //Theme 1) Constructors
  cout<<"\n 1-drinks \n "<<"2-pizza\n " <<"3-burger \n "<<"4-snack food \n "<<"5-sandwich \n "<<endl;
    cout<<"Please give me your order from the list listed : " << endl;
    cin>>x;
    }

   ~Menu(){}//Theme 2) Destructors

  void print(){// Theme 3) Friend Functions
    if(x==1){
            cout<<"1-water ..price : 250IQD \n "<<"2-coffe..price : 500IQD \n "<<"3-tea ..price : 500IQD \n "<<"4-orange juice ..price : 1000IQD \n "<<"5-apple juice ..price : 1000IQD \n"<< "6-fig juice ..price : 1000IQD \n "<<endl;

    }

    if(x==2){

    cout<<"1-small pizza ..price : 4000IQD \n"<<"2-Middle pizza ..price : 7000IQD \n"<<

    "3-large bizza ..price : 9000IQD \n"<< "4-four seson bizza ..price : 1000IQD\n "<<endl;

    }

    if(x==3){

    cout<<"1-beef burger ..price : 2000IQD \n" << "2-small burger ..price : 1000IQD \n"<<

    "3-max burger ..price : 4000IQD \n"<<endl;

    }


  if(x==4){
    cout<<"1-Chips ..price : 1000IQD \n" <<"2-cap cake ..price : 750IQD \n " <<"3-Nuts ..price : 500IQD \n" <<endl;
     }
    if(x==5){
    cout<<"A shawarma sandwich ..price : 2000IQD \n" << "A falafel sandwich ..price : 1000IQD \n" << endl;
    }
  else
  {
cout<<"the number your enter is incorrect"<<endl; cout<<"\n please giv me your order from the list listed " ; }}
void glucose_measurement();
friend void print2(Menu me , imw iw);
friend void Weight_loss_instructions(Menu me);
class imw{
  public:
    int age;
    public:
 void print1()  {
do {  cout<<"____________________________________\n";
 cout<<endl;
   cout<<"To find out the ideal weight and height for children from the age of five until the age of twelve, enter the age for which you want to know the appropriate weight and height:-  \n"<<"________________________________________\n";
    cin>>age;
    switch(age) { case 5 : { cout<<"The right weight for this age is 18.8 and the right height for this age is 101 ."<<endl;
     break; }
      case 6 : {
      cout<<"The right weight for this age is 20 and the right height for this age is 106  ."<<endl;
      break; }
      case 7 :
       { cout<<"The right weight for this age is 22.9 and the right height for this age is 111 ."<<endl;
        break; }
        case 8 : {
        cout<<"The appropriate weight for this age is 25.9 and the appropriate height for this age is 114 ."<<endl;
        break; }
        case 9 : {
        cout<<"The appropriate weight for this age is 27.9 and the appropriate height for this age is 124 ."<<endl;
        break; }
        case 10 : {
        cout<<"The appropriate weight for this age is 31.9 and the appropriate height for this age is 129 ."<<endl;
        break; }
        case 11 : {
        cout<<"The appropriate weight for this age is 34 and the appropriate height for this age is 132 ."<<endl;
        break; }
        case 12 : {
        cout<<"The appropriate weight for this age is 36 and the appropriate height for this age is 147 ."<<endl;
        break; }
        default: { cout<<"Sorry, this does not meet the requirements, try again ! "<<endl; } }}
        while(age!=13);
 }

 };
 friend void print2(Menu me , imw iw);
 friend class Menu;
 };

void print2(Menu me , Menu::imw iw)
 {  cout<<"enter the year and age :-\n";
    cin>>me.x>>iw.age;
    int Birth=me.x-iw.age;
    cout<<"the birth =\n "<<Birth;
 }

void Weight_loss_instructions(Menu me){//Theme 4) Pointers to Derived Classes
  cout<<"\n °°°°°°Instructions for weight loss°°°°°°\n"<<"\n1-Morning lemonade: Drink the juice of half a lemon in a glass of hot water first thing in the morning before breakfast \n "<<"2-Exercising for one hour daily \n " <<"3-Eat fresh and uncooked foods as much as possible\n"<<"\n4-Drink three liters of water daily\n "<<"\n5-Chew food 10 to 12 times before swallowing \n "<<endl;   cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~\n"<<"\nFoods to avoid\n"<<"\n1. Alcohol\n"<<"\n2. Cigarettes\n"<<"\n 3. Milk products (except ½ cup unsweetened lite yogurt every day)\n"<<"\n 4.Sugar, honey and artificial sweeteners\n"<<"\n 5.Coffee\n"<<"\n 6. Grains: Wheat (bread, biscuits, cake, pasta),barley, oats, rice.\n"<<"\n 7. Dried fruit\n"<<endl;  }
  void Menu::glucose_measurement(){
  	 int y;
  cout<<"1- Two hours after eating \n"<<"2- One hour after eating \n"<<"3- Before breakfast\n";
  cout<<endl;
  cout<<"__________________________________________\n";
  cout<<endl;
  	cin>>y;
  	cout<<"__________________________________________\n";
  cout<<endl;
  if(y==1){
  	cout<<"1- Sugar from 140 - 120\n  "<<"\n2- Sugar from 160 - 141\n"<<"3- Sugar from 180\n";
  	cout<<"__________________________________________\n";
  cout<<endl;
  	int z;
  cin>>z;
  cout<<endl;
  	if(z==1){
  		cout<<"Very natural\n";}
  		if(z==2){
  	cout<<"normal max\n";
  	}
  	if(z==3){
  	cout<<"high sugar\n";
  cout<<endl;
  	 if(y==2){
  	cout<<"1- Sugar from 180 - 160\n  "<<
  "\n	2- Sugar from 180 - 195\n"<<"3- Sugar from 200 _ 250\n";
  	cout<<"__________________________________________\n";
  cout<<endl;
  	int u;
  	cin>>u;
  	cout<<"__________________________________________\n";
  cout<<endl;
  	if(u==1){
  		cout<<"Very natural\n";}
  		if(u==2){
  	cout<<"normal max\n";
  	}
  	if(u==3){
  	cout<<"high sugar\n";
  	}}
  cout<<endl;
  	 if(y==3){
  	cout<<"1- Sugar from 80 - 110\n  "<<
  	"\n2- Sugar from 111 - 124 \n"<<"3- Sugar from 125 \n";
  cout<<endl;
  	int k;
  	cin>>k;

cout<<"__________________________________________\n";
  cout<<endl;
  	if(k==1){
  		cout<<"Very natural\n";}
  		if(k==2){
  	cout<<"normal max\n";
  	}
  	if(k==3){
  	cout<<"high sugar\n";
  	}}


}
  }}

int main(){
  Menu me;
   Menu *p;
   p=&me;
  p->print();
  Weight_loss_instructions(me);
 //Theme 5) Classes inside classes
Menu:: imw  iw;
  iw.print1();
  //theme 6) freind class
  print2(me,iw);
  me.glucose_measurement();
  return 0;
  }


