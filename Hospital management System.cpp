/*
Project for 2nd Year 2nd Semester Final Examination
Course Name: Software Development (Part - 01)
Course Code: CSE2206
Project on: Hospital Management System
Language: C++
Group: 08
Team Members: A. K. M. Golam Rayhan(ID-1705028)
             Jebunnaher Jitu (ID-1705019)
             Antara Mubassira Shawon (ID-1705020)
             Most. Masuda Begum (ID-1705026)

*/

#include <bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<time.h>
#include<iomanip>


using namespace std;
int main()

{
    char fname[20];
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );

    int i;
    cout<<"WELCOME TO RANGPUR MEDICAL COLLEGE AND HOSPITAL\n";

    system("pause");
    system("cls");
    int login();
    login();
b:
    cout<<"RANGPUR MEDICAL COLLEGE AND HOSPITAL\n";
    cout<<"Please,  Choose from the following Options: \n\n";
    cout<<"1. Add New Record\n";
    cout<<"2. Add Diagnosis Information\n";
    cout<<"3. Full History of the Patient\n";
    cout<<"4. Doctors\n";
    cout<<"5. About Rangpur Medical College\n";
    cout<<"6. Exit\n";
a:
    cout<<"Enter your choice: ";
    cin>>i;
    if(i>7||i<1)
    {
        cout<<"Invalid Choice\n";
        cout<<"Try again...\n";
        goto a;
    }
    system("cls");

    if(i==1)
    {
        time_t rawtime;
        struct tm * timeinfo;

        time ( &rawtime );
        timeinfo = localtime ( &rawtime );
        cout<<"\n"<< asctime (timeinfo);
        ofstream p_file;
        char fname[20];
        cout<<"\nEnter the patient's file name : ";
        cin.ignore();
        gets(fname);
        p_file.open(fname);
        if(!fname)
        {
            cout<<"\nError while opening the file\n";
            goto b;
        }
        else
        {
            struct patient_info
            {
                char name[20];
                char address[100];
                char contact[10];
                char age[5];
                char sex[8];
                char blood_gp[5];
                char disease_past[50];
                char id[15];
            };

            patient_info ak;
            cout<<"\n";
            p_file<<"\n";
            cout<<"\nName : ";
            p_file<<"Name : ";
            gets(ak.name);
            p_file<<ak.name<<"\n";
            cout<<"\nAddress : ";
            p_file<<"Address : ";
            gets(ak.address);
            p_file<<ak.address<<"\n";
            cout<<"\nContact Number : ";
            p_file<<"Contact Number : ";
            gets(ak.contact);
            p_file<<ak.contact<<"\n";
            cout<<"\nAge : ";
            p_file<<"Age : ";
            gets(ak.age);
            p_file<<ak.age<<"\n";
            cout<<"\nSex : ";
            p_file<<"Sex : ";
            gets(ak.sex);
            p_file<<ak.sex<<"\n";
            cout<<"\nBlood Group : ";
            p_file<<"Blood Group : ";
            gets(ak.blood_gp);
            p_file<<ak.blood_gp<<"\n";
            cout<<"\nPatient ID : ";
            p_file<<"Patient ID : ";
            gets(ak.id);
            p_file<<ak.id<<"\n";
            cout<<"\n";
            p_file<<"\n";
            cout<<"\nInformation Saved Successfully\n";
        }
        system("pause");
        system("cls");
        goto b;

    }

    if(i==2)
    {
        fstream p_file;
        cout<<"\n\nEnter the patient's file name to be opened : ";
        cin.ignore();
        gets(fname);
        system("cls");
        p_file.open(fname, ios::in);
        if(!p_file)
        {
            cout<<"\nError while opening the file\n";
            goto b;
        }
        else
        {
            cout<<"\nInformation about "<<fname<<" \n";
            string info;
            while(p_file.good())
            {
                getline(p_file,info);
                cout<<info<<"\n";
            }
            cout<<"\n";
            p_file.close();
            p_file.open(fname, ios::out | ios::app);
            cout<<"\n";
            cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);
            p_file<<"Description of "<<asctime (timeinfo)<<"\n";
            struct app
            {
                char symptom[500];
                char diagnosis[500];
                char medicine[500];
                char addmission[30];
                char ward[15];
            };
            app add;
            cout<<"\nSymptoms : ";
            p_file<<"Symptoms : ";
            gets(add.symptom);
            p_file<<add.symptom<<"\n";
            cout<<"\nDiagnosis : ";
            p_file<<"Diagnosis : ";
            gets(add.diagnosis);
            p_file<<add.diagnosis<<"\n";
            cout<<"\nMedicines : ";
            p_file<<"Medicines : ";
            gets(add.medicine);
            p_file<<add.medicine<<"\n";
            cout<<"\nAddmission Required? : ";
            p_file<<"Addmission Required? : ";
            gets(add.addmission);
            p_file<<add.addmission<<"\n";
            cout<<"\nType of ward : ";
            p_file<<"Type of ward : ";
            gets(add.ward);
            p_file<<add.ward<<"\n";
            cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
            p_file.close();
            cout<<"\n\n";
            system("pause");
            system("cls");
            goto b;
        }
    }

    if(i==3)
    {
        fstream p_file;
        cout<<"\n\nEnter the patient's file name to be opened : ";
        cin.ignore();
        gets(fname);
        system("cls");
        p_file.open(fname, ios::in);
        if(!p_file)
        {
            cout<<"\nError while opening the file\n";
            goto b;
        }
        else
        {
            cout<<"\nFull Medical History of "<<fname<<"\n";
            string info;
            while(p_file.good())
            {
                getline(p_file,info);
                cout<<info<<"\n";
            }
            cout<<"\n";
        }
        system("pause");
        system("cls");
        goto b;
    }
    if(i==4)
    {
        cout<<"01. Dr. Swadesh Barman, \n Cancer Specialist\n"<<endl;
        cout<<"02. Dr. Jahan Afroza Khanam Lucky,\n Cancer Specialist\n"<<endl;
        cout<<"03. Prof. Dr. Shakil Gafur\nCardiology Specialist\n"<<endl;
        cout<<"04. Dr. Haripada Sarker \nCardiology Specialist\n"<<endl;
        cout<<"05. Dr. Md. Abu Zahid Basunia\nCardiology Specialist\n"<<endl;
        cout<<"06. Dr. Abdullah Al Mahmud\nCardiology Specialist\n"<<endl;
        cout<<"07. Prof. Dr. Nawazes Farid\nCardiology Specialist\n"<<endl;
        cout<<"08. Dr. Rabindra Nath Barman\nCardiology & Heart Diseases Specialist\n"<<endl;
        cout<<"\n\n\n\nPRESS 0 FOR MAIN MENU"<<endl;
        cin>>i;
        if(i==0)
        {
            goto b;
        }

    }

    if(i==5)
    {
        cout<<"Rangpur Medical College (RpMC) is a public medical college located in Rangpur, Bangladesh. The college is founded in 1970 and affiliated with Rajshahi Medical University."<<endl;
        cout<<"History\n"<<endl;
        cout<<"To meet the growing needs of modern medicine the government established a medical college in Dhap, Rangpur (on the property of Pandit family of Rangpur) in 1970 with a"<<endl;
        cout<<"500-bed teaching hospital. The first batch of 50 students were admitted to Rangpur Medical College, affiliated with Rajshahi University, in 1971."<<endl;
        cout<<"Currently, the yearly intake has been increased to more than two hundreds. 44rd batch is doing intern duty. And most recent batch of 2021 is 50th."<<endl;
        cout<<"\nCampus\n"<<endl;
        cout<<"The campus of Rangpur Medical College is located in the northwest area of Rangpur,"<<endl;
        cout<<"Bangladesh. It is 210 kilometres from the Rajshahi District and 330 kilometres from"<<endl;
        cout<<"Dhaka and is located next to the inter-country highway that connects India to Nepal."<<endl;
        cout<<"There is a three-storey college building and a five-storey residential building with 1200 beds."<<endl;
        cout<<"\nAcademics\n"<<endl;
        cout<<"The admission process of undergraduate MBBS course for all government medical colleges"<<endl;
        cout<<"in Bangladesh is conducted centrally by the Director of Medical Education under DGHS"<<endl;
        cout<<"under the Ministry of Health (Bangladesh). The test comprises a written MCQ exam,"<<endl;
        cout<<"which is held simultaneously in all government medical colleges on the same day throughout"<<endl;
        cout<<"the country. Candidates are selected for admission based on national merit and district,"<<endl;
        cout<<"whether they are sons or daughters of freedom fighters, and to fill tribal quotas."<<endl;
        cout<<"For foreign students, admission is through the embassy of Bangladesh in their respective"<<endl;
        cout<<"countries. The academic calendar for different years is maintained by respective departments."<<endl;
        cout<<"Aside from the MBBS course there are post graduation courses in surgery, medicine, gynaecology"<<endl;
        cout<<"and paediatrics. Postgraduate and diploma courses admission tests are conducted by the medical"<<endl;
        cout<<"college. The admission test consists of the written MCQ exam. The medical college have separate"<<endl;
        cout<<"dental unit & offers Bachelor of Dental Surgery (BDS) course."<<endl;
        cout<<"\nExtracurricular activities\n"<<endl;
        cout<<"SANDHANI, Medicine Club, and Friends Foundation are voluntary organizations of students of this medical college."<<endl;
        cout<<"Source:Wikipedia\n\n"<<endl;

        cout<<"\n\n\n\nPRESS 0 FOR MAIN MENU"<<endl;
        cin>>i;
        if(i==0)
        {
            goto b;
        }
    }

    if(i==6)
    {
        system("cls");
        cout<<"THANK YOU FOR USING\n";
    }
    cout<<"\n";

}

int login()
{
    string pass ="";
    char ch;
    cout<<"RANGPUR MEDICAL COLLEGE AND HOSPITAL\n";
    cout<<"LOGIN \n";
    cout << "Enter Password: ";
    ch = _getch();
    while(ch != 13)
    {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(pass == "RPMC")
    {
        cout << "\n Successfully logged in. \n";
        system("PAUSE");
        system ("CLS");
    }
    else
    {
        cout << "\nIncorrect Password...\n Please Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}

