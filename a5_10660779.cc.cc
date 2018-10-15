#include <iostream>
#include <fstream>

using namespace std;

struct student {
string ID;
string name;
string gender;
string age;
int score;
char grade;
};

char getGrade(int score){
    char Grade;
    if(score >=80 && score <=100){
        Grade = 'A';
    }else if (score >=70 && score <80){
        Grade = 'B';
    }else if (score >=60 && score <70){
        Grade = 'C';
    }else if (score >=50 && score <60){
        Grade = 'D';
    }else if (score >=40 && score <50){
        Grade = 'E';
    }else if (score <=39 && score >= 0){
        Grade = 'F';
    }

    return Grade;


}

int main()
{
    student data[5];

    for (int x=0;x<5;x++)
 {
     cout << "Enter Student " << x+1 << "'s Name: ";
     cin >> data[x].name;
     cout << "Enter Student " << x+1 << "'s Id: ";
     cin >> data[x].ID;
      cout << "Enter Student " << x+1 << "'s Gender: ";
     cin >> data[x].gender;
      cout << "Enter Student " << x+1 << "'s Age ";
     cin >> data[x].age;
      cout << "Enter Student " << x+1 << "'s Score ";
     cin >> data[x].score;

     data[x].grade = getGrade(data[x].score);

 }

 fstream file;
 file.open("answer.txt");
 file << "Id\t\tName\tGender\tAge\tScore\tGrade"<<endl;
 for(int i=0; i<5; i++){

   file << data[i].ID << "\t"<<data[i].name << "\t"<<data[i].gender << "\t"<< data[i].age <<"\t" << data[i].score << "\t" << data[i].grade<< endl;
 }

    return 0;
}
