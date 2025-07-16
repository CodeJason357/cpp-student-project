#include<iostream>
using namespace std;

int main()
{
    int stu_num, sub_num;
    cout << "How many students you want to save = ";
    cin >> stu_num;
    cout << "How many subjects you want to save = ";
    cin >> sub_num;

    string name[stu_num], grade[stu_num];
    int marks[stu_num][sub_num], total[stu_num];
    float average[stu_num];

    for(int i = 0; i < stu_num; i++) {
        cout << "Enter student" << i + 1 << "'s name> ";
        cin >> name[i];
        total[i] = 0;
        for(int j = 0; j < sub_num; j++) {
            cout << "Enter marks = ";
            cin >> marks[i][j];
            total[i] = total[i] + marks[i][j];
        }
    }

    for(int i = 0; i < stu_num; i++) {
        average[i] = (float)total[i] / sub_num;
        if(average[i] >= 80) {
            grade[i] = "A+";
        } else if(average[i] >= 70) {
            grade[i] = "A";
        } else if(average[i] >= 60) {
            grade[i] = "A-";
        } else if(average[i] >= 50) {
            grade[i] = "B";
        } else if(average[i] >= 40) {
            grade[i] = "C";
        } else if(average[i] >= 33) {
            grade[i] = "D";
        } else {
            grade[i] = "F";
        }
    }

    for(int i = 0; i < stu_num; i++) {
        cout << name[i] << "'s total, average and grade is = " 
             << total[i] << ", " << average[i] << ", " << grade[i] << endl;
    }

    return 0;
}