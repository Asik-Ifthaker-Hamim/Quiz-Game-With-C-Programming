#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
void Game();
void highestscore();
void rules();
void Search();
void developerinfo();
void easy();
void medium();
void hard();
void easygame();
void mediumgame();
void hardgame();
void tnks();
void Exit();
void result();
struct PlayerInfo
{
    char name[255];
    int score;
    char level[20];
} player[1000];
void gotoxy(int a,int b)
{
    COORD c;
    c.X = a;
    c.Y = b;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void border()
{
    Sleep(50);
    for(int i=0;i<122;i+=2)
    {
        gotoxy(0+i,0);

        printf("\xDB");
        gotoxy(0+i,30);

        printf("\xDB");
    }

    for(int i=0;i<30;i+=2)
    {
        gotoxy(0,2+i);

        printf("\xDB");
        gotoxy(120,2+i);

        printf("\xDB");
    }
}
void color()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
}
void addquiz()
{

    system("cls");
    border();
    gotoxy(45,7);
    printf("> Add Easy Quiz");
    gotoxy(45,8);
    printf("> Add Medium Quiz");
    gotoxy(45,9);
    printf("> Add Hard Quiz");
    gotoxy(45,16);
    int n;
    printf("Select Your Option ");
go:
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        easy();
        break;
    case 2:
        medium();
        break;
    case 3:
        hard();
        break;
    default:
    {
        gotoxy(45,18);
        printf("Invalid Selection.Please Re-Select Your Option ");
        goto go;
    }

    }
}
void menu()
{
    system("cls");
    border();
    for(int i=0;i<17;i++)
    {
        gotoxy(48+i,3);
        Sleep(10);
        printf("\xDB");
        gotoxy(48+i,5);
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(48,4);
    Sleep(10);
    printf("\xDB");
    gotoxy(64,4);
    Sleep(10);
    printf("\xDB");

    gotoxy(50,4);
    Sleep(10);
    printf("*Be The Best*");
    gotoxy(18,7);
    printf("> 1.Start Game");
    gotoxy(18,8);
    printf("> 2.Highest Scores");
    gotoxy(18,9);
    printf("> 3.Rules & Regulations");
    gotoxy(18,10);
    printf("> 4.Add Quiz");
    gotoxy(18,11);
    printf("> 5.Result Search");
    gotoxy(18,12);
    printf("> 6.Developer Information");
    gotoxy(18,13);
    printf("> 7.Exit");
    gotoxy(47,20);
    printf("Select Your Option ");
    int n;
    scanf("%d",&n);
again:
    switch(n)
    {
    case 1:
        Game();
        break;
    case 2:
        highestscore();
        break;
    case 3:
        rules();
        break;
    case 4:
        addquiz();
        break;
    case 5:
        Search();
        break;
    case 6:
        developerinfo();
        break;
    case 7:
        Exit();
        break;
    default:
    {
        gotoxy(47,22);
        printf("Invalid Selection.Please Re-Select Your Option ");
        scanf("%d",&n);
        goto again;
    }
    }

}
void intro()
{
    border();
    for(int i=0;i<17;i+=2)
    {
        gotoxy(45+i,4);
        Sleep(10);
        printf("\xDB");
        gotoxy(45+i,10);
        Sleep(10);
        printf("\xDB");
    }
    for(int i=0;i<7;i+=2)
    {
        gotoxy(45,4+i);
        Sleep(10);
        printf("\xDB");
    }
    for(int i=0;i<5;i+=2)
    {
        gotoxy(61,6+i);
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(50,5);
    Sleep(10);
    printf("Welcome");
    gotoxy(52,7);
    Sleep(10);
    printf("To");
    gotoxy(49,9);
    Sleep(10);
    printf("Quiz Game");
    gotoxy(5,28);
    Sleep(10);
    printf("*Developed By NULL_STUNNERS");
    gotoxy(34,16);
    Sleep(10);
    printf("Please Enter Any key To Show Main Menu ");
    getchar();
    menu();
}
int main()
{
    color();
    intro();
    getch();
}
void easy()
{
    system("cls");
    border();
    FILE *game;

    game=fopen("easyquiz.text","a");
    gotoxy(10,3);
    printf("Enter Your Question Below:\n");
    gotoxy(10,5);
    getchar();
    char easyquiz[100][200];
    gets(easyquiz[0]);
    fprintf(game,"%s\n",easyquiz[0]);
    fclose(game);

    game=fopen("easyoption.text","a");
    gotoxy(10,7);
    printf("Enter Quiz Options Below:\n");
    char easyopt[4][100];
    for(int i=0; i<4; i++)
    {
        gotoxy(10,9+i);
        gets(easyopt[i]);
        fprintf(game,"%s\n",easyopt[i]);
    }
    fclose(game);

    game=fopen("easyanswer.text","a");
    gotoxy(10,15);
    printf("Enter Quiz Answer Below:\n");
    char ans[1];
    gotoxy(10,16);
    scanf("%c",&ans[0]);
    fprintf(game,"%c",ans[0]);
    fclose(game);
    getchar();
    tnks();
}
void medium()
{
    system("cls");
    border();
    FILE *game;

    game=fopen("mediumquiz.text","a");
    gotoxy(10,3);
    printf("Enter Your Question Below:\n");
    gotoxy(10,5);
    getchar();
    char mediumquiz[100][200];
    gets(mediumquiz[0]);
    fprintf(game,"%s\n",mediumquiz[0]);
    fclose(game);

    game=fopen("mediumoption.text","a");
    gotoxy(10,7);
    printf("Enter Quiz Options Below:\n");
    char mediumopt[4][100];
    for(int i=0; i<4; i++)
    {
        gotoxy(10,9+i);
        gets(mediumopt[i]);
        fprintf(game,"%s\n",mediumopt[i]);
    }
    fclose(game);

    game=fopen("mediumanswer.text","a");
    gotoxy(10,15);
    printf("Enter Quiz Answer Below:\n");
    char ans[1];
    gotoxy(10,16);
    scanf("%c",&ans[0]);
    fprintf(game,"%c",ans[0]);
    fclose(game);
    getchar();
    tnks();
}
void hard()
{
    system("cls");
    border();
    FILE *game;

    game=fopen("hardquiz.text","a");
    gotoxy(10,3);
    printf("Enter Your Question Below:\n");
    gotoxy(10,5);
    getchar();
    char hardquiz[100][200];
    gets(hardquiz[0]);
    fprintf(game,"%s\n",hardquiz[0]);
    fclose(game);

    game=fopen("hardoption.text","a");
    gotoxy(10,7);
    printf("Enter Quiz Options Below:\n");
    char hardopt[4][100];
    for(int i=0; i<4; i++)
    {
        gotoxy(10,9+i);
        gets(hardopt[i]);
        fprintf(game,"%s\n",hardopt[i]);
    }
    fclose(game);

    game=fopen("hardanswer.text","a");
    gotoxy(10,15);
    printf("Enter Quiz Answer Below:\n");
    char ans[1];
    gotoxy(10,16);
    scanf("%c",&ans[0]);
    fprintf(game,"%c",ans[0]);
    fclose(game);
    getchar();
    tnks();
}
void rules()
{
    system("cls");
    border();
    gotoxy(45,2);
    printf("\"Rules & Regulation\"");
    for(int i=0;i<20;i++)
    {
      gotoxy(45+i,3);
      printf("-");
    }
    gotoxy(22,5);
    printf("1. The Quiz Game is about Basic C Programming.");
    gotoxy(22,7);
    printf("2. There are 10 questions in each difficulty level.");
    gotoxy(22,9);
    printf("3. Each Correct answer will increase the participant score by 1.");
    gotoxy(22,11);
    printf("4. The wrong answers will not reduce any points.");
    gotoxy(22,13);
    printf("5. There will be only one question at a time.");
    gotoxy(22,15);
    printf("6.There are 3 Difficulty Levels - Easy, Medium, Hard.");
    gotoxy(22,17);
    printf("7.You Can Choose Any Of them.");
    gotoxy(22,19);
    printf("8.After Answer a question wait 2 sec for a new question to see.");
    getchar();
    gotoxy(43,26);
    printf("Enter Any Key To Go Back ");
    getchar();
    menu();
}
void tnks()
{
    system("cls");
    border();
    for(int i=0;i<27;i++)
    {
        gotoxy(45+i,9);
        Sleep(5);
        printf("\xDB");
        gotoxy(45+i,14);
        Sleep(5);
        printf("\xDB");
    }
    for(int i=0;i<5;i++)
    {
        gotoxy(45,9+i);
        Sleep(5);
        printf("\xDB");
    }
    for(int i=0;i<5;i++)
    {
        gotoxy(71,9+i);
        Sleep(5);
        printf("\xDB");
    }
    gotoxy(47,11);
    printf("Thanks For Contributing");
    gotoxy(53,13);
    printf("Happy Gaming");

    gotoxy(45,19);
    printf("Enter Any Key to Go Main Menu ");
    getchar();
    menu();
}
void result(int score,char name[255],char status[255],char insname[255],int age)
{
    system("cls");
    border();
    gotoxy(1,3);
    if(score>=8 && score<=10)
    {
        printf("\n\t\t\t\t\t\t ___________________\n");
        printf("\t\t\t\t\t\t|                   |");
        printf("\n\t\t\t\t\t\t| Congratulations!! |\n");
        printf("\t\t\t\t\t\t|___________________|");
        printf("\n\n\n\t\t\t\t\tParticipant Name: ");
        puts(name);
        printf("\t\t\t\t\tAge: %d\n",age);
        printf("\t\t\t\t\tEducational Status : %s\n",status);
        printf("\t\t\t\t\tInstitute name : %s\n",insname);
        printf("\n\t\t\t\t\tFINAL SCORE : %d/10\n",score);
        gotoxy(18,22);
        printf("> Press 1 To go Game Level");
        gotoxy(18,23);
        printf("> Press 2 To go Main Menu");
        gotoxy(18,24);
        printf("> Press 3 To Exit");
        gotoxy(18,25);
        int n;
        printf("Choose: ");
level:
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            Game();
            break;
        case 2:
            menu();
            break;
        case 3:
            Exit();
            break;
        default:
        {
            gotoxy(18,27);
            printf("Invalid Choose.Please Re-Choose: ");
            goto level;
        }
        }
    }
    else if(score>=5 && score<8)
    {
        printf("\n\t\t\t\t\t\t _______________\n");
        printf("\t\t\t\t\t\t|               |");
        printf("\n\t\t\t\t\t\t|  Well Done!!  |\n");
        printf("\t\t\t\t\t\t|_______________|");
        printf("\n\n\n\t\t\t\t\tParticipant Name: ");
        puts(name);
        printf("\t\t\t\t\tAge: %d\n",age);
        printf("\t\t\t\t\tEducational Status : %s\n",status);
        printf("\t\t\t\t\tInstitute name : %s\n",insname);
        printf("\n\t\t\t\t\tFINAL SCORE : %d/10\n",score);
        gotoxy(18,22);
        printf("> Press 1 To go Game Level");
        gotoxy(18,23);
        printf("> Press 2 To go Main Menu");
        gotoxy(18,24);
        printf("> Press 3 To Exit");
        gotoxy(18,25);
        int n;
        printf("Choose: ");
ki:
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            Game();
            break;
        case 2:
            menu();
            break;
        case 3:
            Exit();
            break;
        default:
        {
            gotoxy(18,27);
            printf("Invalid Choose.Please Re-Choose: ");
            goto ki;
        }
        }
    }
    else if(score>=0 && score<5)
    {
        printf("\n\t\t\t\t\t\t _____________\n");
        printf("\t\t\t\t\t\t|             |");
        printf("\n\t\t\t\t\t\t| Try Again!! |\n");
        printf("\t\t\t\t\t\t|_____________|");
        printf("\n\n\n\t\t\t\t\tParticipant Name: ");
        puts(name);
        printf("\t\t\t\t\tAge: %d\n",age);
        printf("\t\t\t\t\tEducational Status : %s\n",status);
        printf("\t\t\t\t\tInstitute name : %s\n",insname);
        printf("\n\t\t\t\t\tFINAL SCORE : %d/10\n",score);
        gotoxy(18,22);
        printf("> Press 1 To go Game Level");
        gotoxy(18,23);
        printf("> Press 2 To go Main Menu");
        gotoxy(18,24);
        printf("> Press 3 To Exit");
        gotoxy(18,25);
        int n;
        printf("Choose: ");
li:
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            Game();
            break;
        case 2:
            menu();
            break;
        case 3:
            Exit();
            break;
        default:
        {
            gotoxy(18,27);
            printf("Invalid Choose.Please Re-Choose: ");
            goto li;
        }
        }
    }

}
void Game()
{
    system("cls");
    border();
    gotoxy(50,3);
    printf("Game Levels");
    for(int i=0;i<11;i++)
    {
        gotoxy(50+i,4);
        printf("-");
    }
    gotoxy(24,5);
    printf("> Easy Level.");
    gotoxy(24,6);
    printf("> Medium Level.");
    gotoxy(24,7);
    printf("> Hard Level.");
    gotoxy(47,14);
    printf("Choose Any level: ");
    int n;
level:
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        easygame();
        break;
    case 2:
        mediumgame();
        break;
    case 3:
        hardgame();
        break;
    default:
    {
        gotoxy(46,16);
        printf("Invalid Choose.Please Re-Choose Game Level: ");
        goto level;
    }
    }
}
void easygame()
{
    system("cls");
    border();
    char nm[255],stat[255],inst[255];
    int ag;
    gotoxy(47,3);
    printf("Enter Below Info\n");
    for(int i=0;i<16;i++)
    {
        gotoxy(47+i,4);
        printf("-");
    }
    getchar();
    gotoxy(25,5);
    printf("User Name: ");
    gets(nm);
    gotoxy(25,6);
    printf("Age: ");
    scanf("%d",&ag);
    gotoxy(25,7);
    printf("Educational Status: ");
    getchar();
    gets(stat);
    gotoxy(25,8);
    printf("Institution: ");
    gets(inst);

    FILE *game;

    game = fopen("search.text","a");
    fprintf(game,"%s\n",nm);
    fclose(game);

    game = fopen("level.text","a");
    fprintf(game,"Easy\n");
    fclose(game);
    int i,j,count=0;
    time_t t;
    char quiz[300][200]= {};
    char option[1200][100]= {};
    char answer[300]= {};
    game=fopen("easyquiz.text","r");
    for(int i=0; ; i++)
    {
        if(fgets(quiz[i],200,game)!=NULL)
            count++;
        else
            break;
    }
    fclose(game);
    count=0;
    game=fopen("easyoption.text","r");
    for(i=0; ; i++)
    {
        if(fgets(option[i],100,game)!=NULL)
            count++;
        else
            break;
    }
    fclose(game);
    count=0;
    game=fopen("easyanswer.text","r");
    for(i=0; ; i++)
    {
        answer[i]=fgetc(game);
        count++;
        if(feof(game))
            break ;
    }
    fclose(game);
    count--;
    srand(time(NULL));
    system("cls");
    border();
    int scr=0;
    int arr[count];
    for(i=0; i<count; i++)
    {
        arr[i]=i;
    }
    int temp,z;
    for(i=0; i<count; i++)
    {
        z=(rand()%count);
        temp=arr[i];
        arr[i]=arr[z];
        arr[z]=temp;
    }
    for(i=0; i<10; i++)
    {
        char partians;
        gotoxy(4,2);
        printf("SCORE : %d",scr);
        gotoxy(92,2);
        printf("Difficulty Level : Easy");
        gotoxy(18,5);
        printf("________________________________________");
        gotoxy(18,7);
        printf("%d.%s\n",(i+1),quiz[arr[i]]);

        for(int j=(arr[i]*4); j<((arr[i]*4)+4); j++)
        {
            printf("\t\t\t%s\n",option[j]);
        }
        gotoxy(18,16);
        printf("________________________________________");
        gotoxy(20,19);
        printf("Choose Your Answer: ");
        scanf("%c",&partians);
        getchar();
        partians=toupper(partians);
        if(partians==answer[arr[i]])
        {
            gotoxy(20,21);
            printf("CORRECT!!!");
            scr++;
        }
        else
        {
            gotoxy(20,21);
            printf("WRONG!!!");
            gotoxy(20,23);
            printf("The correct Answer is %c\n",answer[arr[i]]);
        }
        gotoxy(20,24);
        Sleep(2000);
        system("cls");
        border();
    }
    game = fopen("score.text","a");
    fprintf(game,"%d\n",scr);
    fclose(game);
    result(scr,nm,stat,inst,ag);
}
void mediumgame()
{
    system("cls");
    border();
    char nm[255],stat[255],inst[255];
    int ag;
    gotoxy(47,3);
    printf("Enter Below Info\n");
    for(int i=0;i<16;i++)
    {
        gotoxy(47+i,4);
        printf("-");
    }
    getchar();
    gotoxy(25,5);
    printf("User Name: ");
    gets(nm);
    gotoxy(25,6);
    printf("Age: ");
    scanf("%d",&ag);
    gotoxy(25,7);
    printf("Educational Status: ");
    getchar();
    gets(stat);
    gotoxy(25,8);
    printf("Institution: ");
    gets(inst);

    FILE *game;

    game = fopen("search.text","a");
    fprintf(game,"%s\n",nm);
    fclose(game);

    game = fopen("level.text","a");
    fprintf(game,"Medium\n");
    fclose(game);

    int i,j,count=0;
    time_t t;
    char quiz[300][200]= {};
    char option[1200][100]= {};
    char answer[300]= {};
    game=fopen("mediumquiz.text","r");
    for(int i=0; ; i++)
    {
        if(fgets(quiz[i],200,game)!=NULL)
            count++;
        else
            break;
    }
    fclose(game);
    count=0;
    game=fopen("mediumoption.text","r");
    for(i=0; ; i++)
    {
        if(fgets(option[i],100,game)!=NULL)
            count++;
        else
            break;
    }
    fclose(game);
    count=0;
    game=fopen("mediumanswer.text","r");
    for(i=0; ; i++)
    {
        answer[i]=fgetc(game);
        count++;
        if(feof(game))
            break ;
    }
    fclose(game);
    count--;
    srand(time(NULL));
    system("cls");
    border();
    int scr=0;
    int arr[count];
    for(i=0; i<count; i++)
    {
        arr[i]=i;
    }
    int temp,z;
    for(i=0; i<count; i++)
    {
        z=(rand()%count);
        temp=arr[i];
        arr[i]=arr[z];
        arr[z]=temp;
    }
    for(i=0; i<10; i++)
    {
        char partians;
        gotoxy(4,2);
        printf("SCORE : %d",scr);
        gotoxy(92,2);
        printf("Difficulty Level : Medium");
        gotoxy(18,5);
        printf("________________________________________");
        gotoxy(18,7);
        printf("%d.%s\n",(i+1),quiz[arr[i]]);

        for(int j=(arr[i]*4); j<((arr[i]*4)+4); j++)
        {
            printf("\t\t\t%s\n",option[j]);
        }
        gotoxy(18,16);
        printf("________________________________________");
        gotoxy(20,19);
        printf("Choose Your Answer: ");
        scanf("%c",&partians);
        getchar();
        partians=toupper(partians);
        if(partians==answer[arr[i]])
        {
            gotoxy(20,21);
            printf("CORRECT!!!\n");
            scr++;
        }
        else
        {
            gotoxy(20,21);
            printf("WRONG!!!");
            gotoxy(20,23);
            printf("The correct Answer is %c\n",answer[arr[i]]);
        }
        gotoxy(20,24);
        Sleep(2000);
        system("cls");
        border();
    }
    game = fopen("score.text","a");
    fprintf(game,"%d\n",scr);
    fclose(game);
    result(scr,nm,stat,inst,ag);
}
void hardgame()
{
    system("cls");
    border();
    char nm[255],stat[255],inst[255];
    int ag;
    gotoxy(47,3);
    printf("Enter Below Info\n");
    for(int i=0;i<16;i++)
    {
        gotoxy(47+i,4);
        printf("-");
    }
    getchar();
    gotoxy(25,5);
    printf("User Name: ");
    gets(nm);
    gotoxy(25,6);
    printf("Age: ");
    scanf("%d",&ag);
    gotoxy(25,7);
    printf("Educational Status: ");
    getchar();
    gets(stat);
    gotoxy(25,8);
    printf("Institution: ");
    gets(inst);

    FILE *game;

    game = fopen("search.text","a");
    fprintf(game,"%s\n",nm);
    fclose(game);

    game = fopen("level.text","a");
    fprintf(game,"Hard\n");
    fclose(game);
    int i,j,count=0;
    time_t t;
    char quiz[300][200]= {};
    char option[1200][100]= {};
    char answer[300]= {};
    game=fopen("hardquiz.text","r");
    for(int i=0; ; i++)
    {
        if(fgets(quiz[i],200,game)!=NULL)
            count++;
        else
            break;
    }
    fclose(game);
    count=0;
    game=fopen("hardoption.text","r");
    for(i=0; ; i++)
    {
        if(fgets(option[i],100,game)!=NULL)
            count++;
        else
            break;
    }
    fclose(game);
    count=0;
    game=fopen("hardanswer.text","r");
    for(i=0; ; i++)
    {
        answer[i]=fgetc(game);
        count++;
        if(feof(game))
            break ;
    }
    fclose(game);
    count--;
    srand(time(NULL));
    system("cls");
    border();
    int scr=0;
    int arr[count];
    for(i=0; i<count; i++)
    {
        arr[i]=i;
    }
    int temp,z;
    for(i=0; i<count; i++)
    {
        z=(rand()%count);
        temp=arr[i];
        arr[i]=arr[z];
        arr[z]=temp;
    }
    for(i=0; i<10; i++)
    {
        char partians;
        gotoxy(4,2);
        printf("SCORE : %d",scr);
        gotoxy(92,2);
        printf("Difficulty Level : Hard");
        gotoxy(18,5);
        printf("________________________________________");
        gotoxy(18,7);
        printf("%d.%s\n",(i+1),quiz[arr[i]]);

        for(int j=(arr[i]*4); j<((arr[i]*4)+4); j++)
        {
            printf("\t\t%s\n",option[j]);
        }
        gotoxy(18,16);
        printf("________________________________________");
        gotoxy(20,19);
        printf("Choose Your Answer: ");
        scanf("%c",&partians);
        getchar();
        partians=toupper(partians);
        if(partians==answer[arr[i]])
        {
            gotoxy(20,21);
            printf("CORRECT!!!\n");
            scr++;
        }
        else
        {
            gotoxy(20,21);
            printf("WRONG!!!");
            gotoxy(18,23);
            printf("The correct Answer is %c\n",answer[arr[i]]);
        }
        gotoxy(20,24);
        Sleep(2000);
        system("cls");
        border();
    }
    game = fopen("score.text","a");
    fprintf(game,"%d\n",scr);
    fclose(game);
    result(scr,nm,stat,inst,ag);
}
void highestscore()
{
    system("cls");
    border();
    FILE *game;
    game=fopen("score.text","r");
    int i=0;
    while(!feof(game))
    {
        fscanf(game,"%d",&player[i].score);
        i++;
    }
    fclose(game);
    game=fopen("search.text","r");
    int m=0;
    while(!feof(game))
    {
        if(fgets(player[m].name,255,game)!=NULL)
            m++;
    }
    fclose(game);
    for(int i=0;i<17;i++)
    {
        gotoxy(48+i,4);
        Sleep(10);
        printf("\xDB");
        gotoxy(48+i,6);
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(48,5);
    Sleep(10);
    printf("\xDB");
    gotoxy(64,5);
    Sleep(10);
    printf("\xDB");
    gotoxy(50,5);
    printf("Highest Score");
    gotoxy(41,7);
    printf("User Name");
    for(int i=0;i<9;i++)
    {
        gotoxy(41+i,8);
        Sleep(10);
        printf("-");
    }
    gotoxy(67,7);
    printf("Score");
    for(int i=0;i<5;i++)
    {
        gotoxy(67+i,8);
        Sleep(10);
        printf("-");
    }
    for(int j=0; j<i; j++)
    {
        int temp;
        char str[255]= {};
        for(int k=j+1; k<i; k++)
        {
            if(player[j].score < player[k].score)
            {
                temp=player[j].score;
                int o=strlen(player[j].name);
                for(int l=0; l<o; l++)
                {
                    str[l]=player[j].name[l];
                    player[j].name[l]='\0';
                }
                str[o+1]='\0';
                player[j].score=player[k].score;
                o=strlen(player[k].name);
                for(int l=0; l<o; l++)
                {
                    player[j].name[l]=player[k].name[l];
                    player[k].name[l]='\0';
                }
                player[j].name[o+1]='\0';
                player[k].score=temp;
                o=strlen(str);
                for(int l=0; l<o; l++)
                {
                    player[k].name[l]=str[l];
                    str[l]='\0';
                }
                player[k].name[o+1]='\0';
            }
        }
    }
    for(int j=0; j<10; j++)
    {
        gotoxy(40,9+j);
        printf("%d. %s",j+1,player[j].name);
        gotoxy(65,9+j);
        printf(" ---> %d",player[j].score);
    }
    getchar();
    gotoxy(45,24);
    printf("Enter Any Key To Go Back ");
    getchar();
    menu();
}
void Search()
{
    system("cls");
    border();
    getchar();
    char user[255];
    gotoxy(18,10);
    printf("> Please Enter User Name : ");
    gets(user);
    int s=strlen(user);
    system("cls");
    border();
    FILE *game;
    game=fopen("search.text","r");
    int m=0;
    while(!feof(game))
    {
        if(fgets(player[m].name,255,game)!=NULL)
            m++;
    }
    fclose(game);
    game=fopen("score.text","r");
    int i=0;
    while(!feof(game))
    {
        fscanf(game,"%d",&player[i].score);
        i++;
    }
    fclose(game);
    game=fopen("level.text","r");
    i=0;
    while(!feof(game))
    {
        if(fgets(player[i].level,20,game)!=NULL)
         i++;
    }
    fclose(game);
    for(int i=0;i<17;i+=2)
    {
        gotoxy(47+i,3);
        Sleep(8);
        printf("\xDB");
        gotoxy(47+i,5);
        Sleep(8);
        printf("\xDB");
    }
    gotoxy(47,4);
    printf("\xDB");
    gotoxy(63,4);
    printf("\xDB");
    gotoxy(49,4);
    printf("Search Result");

    gotoxy(33,6);
    printf("User Name");
    for(int i=0;i<9;i++)
    {
        gotoxy(33+i,7);
        Sleep(8);
        printf("-");
    }
    gotoxy(58,6);
    printf("Score");
    for(int i=0;i<5;i++)
    {
        gotoxy(58+i,7);
        Sleep(8);
        printf("-");
    }
    gotoxy(72,6);
    printf("Level");
    for(int i=0;i<5;i++)
    {
        gotoxy(72+i,7);
        Sleep(8);
        printf("-");
    }
    int q=0,count=0;
    for(i=0; i<m; i++)
    {

        int k=strlen(player[i].name);
        for(int j=0; j<=k; j++)
        {
            if(user[j]==player[i].name[j])
            {
                count++;
            }
        }
        if(count==k)
        {
            q++;
            gotoxy(32,8+q);
            printf("%d.%s",q,player[i].name);
            gotoxy(57,8+q);
            printf(" ----> %d",player[i].score);
            gotoxy(72,8+q);
            printf("%s",player[i].level);

        }
        count=0;
    }
    if(q==0)
    {
        system("cls");
        border();
        color();
        gotoxy(40,8);
        printf("Data Not Found!! Please Input Correct Data.");
        gotoxy(45,10);
        printf("Enter Any Key To Go Back ");
        getchar();
        menu();

    }
    gotoxy(45,12+q);
    printf("Enter Any Key To Go Back ");
    getchar();
    menu();
}
void developerinfo()
{
    system("cls");
    border();
    for(int i=0;i<17;i++)
    {
        gotoxy(46+i,4);
        Sleep(10);
        printf("\xDB");
        gotoxy(46+i,8);
        Sleep(10);
        printf("\xDB");
    }
    for(int i=0;i<5;i++)
    {
        gotoxy(46,4+i);
        Sleep(10);
        printf("\xDB");
        gotoxy(63,4+i);
        Sleep(10);
        printf("\xDB");
    }
    gotoxy(48,6);
    Sleep(8);
    printf("NULL_STUNNERS");
    gotoxy(15,11);
    Sleep(8);
    printf("> Asik Ifthaker Hamim(Team Leader)");
    gotoxy(15,12);
    Sleep(8);
    printf("> Abdul Mohaimin");
    gotoxy(15,13);
    Sleep(8);
    printf("> Mohammad Faisal Bin Awal Chowdhury");
    gotoxy(15,14);
    Sleep(8);
    printf("> Sheikh Mohammad Rajking");
    gotoxy(45,20);
    Sleep(8);
    getchar();
    printf("Press Any Key To Go Back ");
    getchar();
    menu();

}
void Exit()
{
    system("cls");
    border();
    for(int i=0;i<31;i++)
    {
        gotoxy(44+i,11);
        Sleep(8);
        printf("\xDB");
        gotoxy(44+i,17);
        Sleep(8);
        printf("\xDB");
    }
    for(int i=0;i<7;i++)
    {
        gotoxy(44,11+i);
        Sleep(8);
        printf("\xDB");
        gotoxy(75,11+i);
        Sleep(8);
        printf("\xDB");
    }
    gotoxy(47,13);
    Sleep(5);
    printf("Thanks For Playing The Game");
    gotoxy(47,15);
    Sleep(5);
    printf("Developed By NULL_STUNNERS");
    gotoxy(3,30);
}

