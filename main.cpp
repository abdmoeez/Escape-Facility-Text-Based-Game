#include<iostream>
#include<string>
using namespace std;

bool isalive(int health)
{
    return health>0;
}

int main()
{
    string name;
    int health=100;
    int choice;

    bool lightson=false;
    bool dooropen=false;
    bool passedhallway=false;
    bool guarddefeated=false;
    bool elevatorcrossed=false;
    bool haskeycard=false;

    cout<<"---- Facility Escape Game ----\n";
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"\nYou Are Trapped In A Room In A Abandoned Facility\n";

    while(lightson==false && isalive(health))
    {
        cout<<"\nHealth : "<<health<<endl;
        cout<<"1. Turn On Lights\n2. Scream\nChoice: ";
        cin>>choice;

        if (choice==1)
        {
            cout<<"\nLights Turned On. You See A Big Door\n";
            lightson=true;
        }
        else if(choice==2)
        {
            cout<<"Bats Attack From The Ceiling! -20HP\n\n";
            health-=20;
        }
    }
    if(isalive(health))
    {
        while(dooropen==false && isalive(health))
        {
            cout<<"1. Kick Door\n2. Search Floor\nChoice: ";
            cin>>choice;

            if(choice==1)
            {
                cout<<"\nAhh! You Hurt Your Foot! -10HP\n";
                health-=10;
            }
            else if(choice==2)
            {
                cout<<"\nYou Found A Lever! The Door Opens.\n";
                dooropen=true;
            }
        }
    }

    if(isalive(health))
    {
        cout<<"\nYou Enter A Hallway. Hot Steam Sprays From The Wall.\n";
        while(passedhallway==false && isalive(health))
        {
            cout<<"1. Run Through \n2. Wait For Exact Timing\nChoice: ";
            cin>>choice;

            if(choice==1)
            {
                cout<<"\nThe Steam Burns Your Skin! -30HP\n\n";
                health-=30;
            }
            else if(choice==2)
            {
                cout<<"\nYou Waited For The Pressure To Drop And Passed The Hallway! \n";
                passedhallway=true;
            }
        }
    }
if(isalive(health))
{
    cout<<"\nYou Reach A Security Station. A Guard Is Asleep With A Keycard.\n";
    while(guarddefeated==false && isalive(health))
    {
        cout<<"1. Sneak Past\n2. Hit Guard With A Pipe \nChoice: ";
        cin>>choice;
        
        if(choice==1)
        {
            cout<<"He Wakes Up And Shoots! -40 HP. You Retreat.\n";
            health-=40;
        }
        else if(choice==2)
        {
            cout<<"Thwak! You Knock The Guard Out And Grab His Keycard.\n";
            haskeycard=true;
            guarddefeated=true;
        }
    }
    if(isalive(health))
    {
        cout<<"\nYou Reach The Elevator. The Sunlight Is Visible Above!\n";
        while(elevatorcrossed==false && isalive(health))
        {
            cout<<"\n1. Force The Door\n2. Use Keycard\nChoice: ";
            cin>>choice;

            if(choice==1)
            {
                cout<<"The Alarm Goes Off! Gas Fills The Room! -25HP\n";
                health-=25;
            }
            else if (choice==2)
            {
                cout<<"The Keycard Beeps Green. The Elevator Rises To The Surface.\n";
                elevatorcrossed=true;
            }
        }
    }
    if(isalive(health))
    {
        cout<<"--------------CONGRATULATIONS--------------";
        cout<<name<<" Escaped With "<<health<<"HP.\nYou Are Free NOW!";
    }
    else
    {
        cout<<"\n\n--------------GAME OVER--------------\n\n";
    }
    
   return 0;
}

}