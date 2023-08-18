// task3


#include<iostream>
#include<vector>
#include<limits>
using namespace std;

class student{
    public:
    string sname;
    int marks;

};

void findhighestandlowest(vector<student>v){
    double minval=numeric_limits<double>::min();
    double maxval=numeric_limits<double>::max();

    for(auto s:v){
        if(s.marks>=minval){
            minval=s.marks;
        }

    }
    for(auto s:v){
        if(s.marks<=maxval){
            maxval=s.marks;
        }

    }
    cout<<"highest marks "<<minval<<endl;
    cout<<"lowest marks "<<maxval<<endl;


}


int main(){
    vector<student> records;
    double n;

    cout<<"enter number of records : ";
    cin>>n;
    // entering records of students
    for(int i=0;i<n;i++){
        student s;
        cout<<"enter name ";
        cin>>s.sname;
        cout<<"enter marks ";
        cin>>s.marks;
        records.push_back(s);

    }
    // calculating total score
    double totalmarks=0;
    for(int i=0;i<n;i++){
        totalmarks+=records[i].marks;
    }
//    displaying average score
    cout<<"Displaying Info of Students";
    cout<<"Average marks  "<<totalmarks/n<<endl;
    // highest and lowest marks
    findhighestandlowest(records);



}