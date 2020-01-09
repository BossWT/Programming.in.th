#include <iostream>
using namespace std;
struct soccer
{
        int goals,loss,marks,gd;
        int ga[4];
        string name;
};
int main()
{
        int marks[4];
        soccer sc[4];
        for(int i=0; i<4; i++)
                cin>>sc[i].name;
        for(int i=0; i<4; i++)
        {
                sc[i].goals = 0;
                for(int j=0; j<4; j++)
                {
                        cin>>sc[i].ga[j];
                        sc[i].goals += sc[i].ga[j];
                }
        }
        for(int i=0; i<4; i++)
        {
                sc[i].marks = 0;
                sc[i].loss = 0;
                for(int j=0; j<4; j++)
                {
                        if(i != j)
                        {
                                sc[i].loss += sc[j].ga[i];
                                if(sc[i].ga[j] > sc[j].ga[i])
                                        sc[i].marks += 3;
                                else if(sc[i].ga[j] == sc[j].ga[i])
                                        sc[i].marks += 1;
                                else
                                        sc[i].marks += 0;
                        }
                }
                sc[i].gd = sc[i].goals - sc[i].loss;
        }
        soccer temp;
        for(int i=0; i<4; i++)
        {
                for(int j=0; j<4; j++)
                {
                        if(sc[i].marks < sc[j].marks)
                        {
                                temp = sc[i];
                                sc[i] = sc[j];
                                sc[j] = temp;
                        }
                        else if(sc[i].marks == sc[j].marks and i != j)
                        {
                                if(sc[i].gd < sc[j].gd)
                                {
                                        temp = sc[i];
                                        sc[i] = sc[j];
                                        sc[j] = temp;
                                }
                                else if(sc[i].gd == sc[j].gd)
                                {
                                        if(sc[i].goals < sc[j].goals)
                                        {
                                                temp = sc[i];
                                                sc[i] = sc[j];
                                                sc[j] = temp;
                                        }
                                }
                        }
                }
        }
        for(int i=3; i>=0; i--)
                cout<<sc[i].name<<" "<<sc[i].marks<<endl;
}
