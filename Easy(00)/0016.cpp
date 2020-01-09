 #include <iostream>
using namespace std;
char a[100],b[100],g[100],key[100];
int len,ma,mb,mg;
int main()
{
        for(int i=1; i<101; i++)
        {
                if(i%3==1)
                {
                        a[i-1]='A';
                }
                if(i%3==2)
                {
                        a[i-1]='B';
                }
                if(i%3==0)
                {
                        a[i-1]='C';
                }
                if(i%4==1)
                {
                        b[i-1]='B';
                }
                if(i%4==2)
                {
                        b[i-1]='A';
                }
                if(i%4==3)
                {
                        b[i-1]='B';
                }
                if(i%4==0)
                {
                        b[i-1]='C';
                }
                if(i%6==1)
                {
                        g[i-1]='C';
                }
                if(i%6==2)
                {
                        g[i-1]='C';
                }
                if(i%6==3)
                {
                        g[i-1]='A';
                }
                if(i%6==4)
                {
                        g[i-1]='A';
                }
                if(i%6==5)
                {
                        g[i-1]='B';
                }
                if(i%6==0)
                {
                        g[i-1]='B';
                }
        }
/*
        for(int i=0; i<40; i++)
        {
                a[3*i] = 'A';
                a[3*i+1] = 'B';
                a[3*i+2] = 'C';
        }
        for(int i=0; i<30; i++)
        {
                b[2*i] = 'B';
                b[4*i+1] = 'A';
                b[4*i+3] = 'C';
        }
        for(int i=0; i<25; i++)
        {
                g[6*i] = 'C';
                g[6*i+1] = 'C';
                g[6*i+2] = 'A';
                g[6*i+3] = 'A';
                g[6*i+4] = 'B';
                g[6*i+5] = 'B';
        }
 */
        /*
           cout<<"Adrian : ";
           for(int i=0; i<100; i++)
           {
                cout<<a[i];
           }
           cout<<endl;
           cout<<"Bruno : ";
           for(int i=0; i<100; i++)
           {
                cout<<b[i];
           }
           cout<<endl;
           cout<<"Goran : ";
           for(int i=0; i<100; i++)
           {
                cout<<g[i];
           }
           cout<<endl;
         */
        cin>>len;
        for(int i=0; i<len; i++)
        {
                cin>>key[i];
                if(key[i] == a[i]) ma++;
                if(key[i] == b[i]) mb++;
                if(key[i] == g[i]) mg++;
        }
        /*
           cout<<"Adrian : ";
           for(int i=0; i<len; i++)
           {
                cout<<a[i];
           }
           cout<<endl;
           cout<<"Bruno : ";
           for(int i=0; i<len; i++)
           {
                cout<<b[i];
           }
           cout<<endl;
           cout<<"Goran : ";
           for(int i=0; i<len; i++)
           {
                cout<<g[i];
           }
           cout<<endl;
           cout<<ma<<" "<<mb<<" "<<mg<<endl;
         */
        int max=-1,xyz[] = {ma,mb,mg};

        for(int i=0; i<3; i++)
                if(max < xyz[i]) max = xyz[i];
        printf("%d\n",max);
        for(int i=0; i<3; i++)
                if(max == xyz[i])

                {

                        if(i==0) printf("Adrian\n");

                        else if(i==1) printf("Bruno\n");

                        else printf("Goran\n");

                }
}
