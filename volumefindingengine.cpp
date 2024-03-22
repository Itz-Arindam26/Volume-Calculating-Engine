#include <bits/stdc++.h>
using namespace std;

float const pi = 3.1415f;

void convol();

void cubovol();

void cubvol();

void spherevol();

void cylinvol();

int main()
{
    char fig;
    cout<<"VOLUME CALCULATING MACHINE || BY ARINDAM SAMANTA\n"<<'\n'<<"The shapes with their code whose volume can be find by this engine are:\n1. Sphere - (capital) S\n2. Cylinder - (capital) Y\n3. Cone - (capital) N\n4. Cuboid - (capital) B\n5. Cube - (capital) U\n**The engine is case sensitive.So,Enter the code carefully.**\nEnter the code of the shape..\n";
    cin>>fig;

    if(fig == 'S')
    {
        spherevol();
    }
    else if(fig == 'B')
    {
        cubovol();
    }
    else if(fig == 'U')
    {
        cubvol();
    }
    else if(fig == 'N')
    {
        convol();
    }
    else if(fig == 'Y')
    {
        cylinvol();
    }
    else{
        cout<<"\nTYPO ERROR OR 404 ERROR\n";
    }

    return 0;
}

void spherevol()
{
    float r;
    cout<<"\nSPHERE VOLUME CALCULATING ENGINE ACTIVATED\n"<<"Enter the value of radius(in cm):\n";
    cin>>r;
    float a = 4.0f;
    float b = 3.0f;
    float vol = (a/b) * pi * pow(r,3);
    cout<<"The volume of sphere is "<<vol<<" cubic cm.\n"<<"\nSPHERE VOLUME CALCULATING ENGINE's ACTION TERMINATED\n";
}

void convol()
{
    float r, h;
    cout<<"\nCONE VOLUME CALCULATING ENGINE ACTIVATED\n"<<"Enter the value of radius(in cm):\n";
    cin>>r;
    cout<<"Enter the value of height(in cm):\n";
    cin>>h;
    float a = 1.0f, b = 3.0f;
    float vol = (a/b) * h* pi * pow(r,2);
    cout<<"The volume of Cone is "<<vol<<" cubic cm.\n"<<"\nCONE VOLUME CALCULATING ENGINE's ACTION TERMINATED\n";
}

void cylinvol()
{
    float r, h;
    cout<<"\nCYLINDER VOLUME CALCULATING ENGINE ACTIVATED\n"<<"Enter the value of radius(in cm):\n";
    cin>>r;
    cout<<"Enter the value of height(in cm):\n";
    cin>>h;
    float vol = h* pi * pow(r,2);
    cout<<"The volume of Cylinder is "<<vol<<" cubic cm.\n"<<"\nCYLINDER VOLUME CALCULATING ENGINE's ACTION TERMINATED\n";
}

void cubvol()
{
    float a;
    cout<<"\nCUBE VOLUME CALCULATING ENGINE ACTIVATED\n"<<"Enter the value of a side of cube(in cm):\n";
    cin>>a;
    float vol =pow(a,3);
    cout<<"The volume of Cube is "<<vol<<" cubic cm.\n"<<"\nCUBE VOLUME CALCULATING ENGINE's ACTION TERMINATED\n";
}

void cubovol()
{
    float l, b, h;
    cout<<"\nCUBOID VOLUME CALCULATING ENGINE ACTIVATED\n"<<"Enter the value of length of cuboid(in cm):\n";
    cin>>l;
    cout<<"Enter the value of width of cuboid(in cm):\n";
    cin>>b;
    cout<<"Enter the value of height of cuboid(in cm):\n";
    cin>>h;
    float vol = l* b* h;
    cout<<"The volume of Cuboid is "<<vol<<" cubic cm.\n"<<"\nCUBOID VOLUME CALCULATING ENGINE's ACTION TERMINATED\n";
}