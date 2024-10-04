#include<stdio.h>
#include<string.h>
void instructions()
{
    printf("\n");
    printf("\nCORRECT ANSWER:1 MARK AWARDED");
    printf("\nINCORRECT ANSWER:1 MARK DETUCTED");
    printf("\nNOT ANSWERED(s):0 MARKS");
}

struct level
{
    char ques[700];
    char ans;
};

int calstat(int stat,int pres)
{
    int a=pres;
    if(stat==5)
    {
       a=pres;
    }
    else if(stat==1&&pres!=3)
    {
        a+=1;
    }
    else if(stat==3)
    {
        a=0;
    }
    else if(stat==2&&pres!=1)
    {
        a-=1;
    }
    return a;
}

int playgame(char ques[600],char ans,int *score)
{
    char key;
    printf("%s:",ques);
    scanf(" %c",&key);
    if(key==ans)
    {
        printf("CORRECT");
        *score+=1;
    }
    else if(key=='s')
    {
        printf("CORRECT ANSWER IS:%c",ans);
        *score+=0;
    }
    else if(key!='a'&&key!='b'&&key!='c'&&key!='d')
    {
        printf("INVALID OPTION");
        playgame(ques,ans,score);
    }
    else
    {
        printf("WRONG ANSWER\nTHE CORRECT OPTION IS:%c",ans);
        *score-=1;
    }
}

int main()
{
    struct level round1[10]={{"\nWhat color is the sun?\na) Blue\nb) Yellow\nc) Green\nd) Red",'b'},
    {"\nHow many fingers does a person have on one hand?\na) 3\nb) 5\nc) 7\nd) 10",'b'},
    {"\nWhat comes after Monday?\na) Tuesday\nb) Wednesday\nc) Thursday\nd) Sunday",'a'},{"\nWhat is the opposite of day?\na) Light\nb) Dark\nc) Sun\nd) Morning",'b'},
    {"\nWhich animal says meow?\na) Dog\nb) Cat\nc) Cow\nd) Duck",'b'},{"How many seasons are there in a year?\na) 2\nb) 3\nc) 4\nd) 5\n",'c'},
    {"\nHow many legs does a spider have?\na) 4\nb) 6\nc) 8\nd) 10",'c'},{"\nWhich is the largest mammal in the world?\na) Elephant\nb) Giraffe\nc) Blue whale\nd) Lion",'c'},
    {"\nWhat do plants need to grow?\na) Water and sunlight\nb) Air and rocks\nc) Fire and soil\nd) Sand and wind",'a'},
    {"\nWhat do you use to write with?\na) Pencil\nb) Banana\nc) Shoe\nd) Spoon",'a'}};

    struct level round2[10]={{"\nWhat is the largest ocean animal and also the heaviest animal on Earth?\na) Elephant\nb) Blue whale\nc) Giraffe\nd) Dolphin",'b'},
    {"\nWhich planet is known as the Red Planet and has the largest volcano in the solar system?\na) Mars\nb) Venus\nc) Jupiter\nd) Saturn",'a'},
    {"\nWhat is the currency of Japan?\na) Won\nb) Yen\nc) Euro\nd) Dollar",'b'},{"\nIn which year did the United States declare its independence?\na) 1776\nb) 1789\nc) 1801\nd) 1812",'a'},
    {"\nWho painted the Mona Lisa?\na) Vincent van Gogh\nb) Pablo Picasso\nc) Leonardo da Vinci\nd) Michelangelo",'c'},
    {"\nWhat is the chemical symbol for gold?\na) G\nb) Au\nc) Ag\nd) Fe",'b'},{"\nWhich famous scientist formulated the laws of motion and universal gravitation?\na) Isaac Newton\nb) Albert Einstein\nc) Galileo Galilei\nd) Nikola Tesla",'a'},
    {"\nWhat is the world's largest desert by area?\na) Sahara Desert\nb) Gobi Desert\nc) Antarctica\nd) Arabian Desert",'a'},
    {"\nWho wrote the play Hamlet?\na) William Shakespeare\nb) Jane Austen\nc) Charles Dickens\nd) F. Scott Fitzgerald",'a'},
    {"\nWhich element is represented by the chemical symbol O?\na) Oxygen\nb) Osmium\nc) Uranium\nd) Onyx",'a'}};

    struct level round3[10]={{"\nWhat is the capital city of Australia?\na) Sydney\nb) Melbourne\nc) Canberra\nd) Brisbane",'c'},
    {"\nWhich famous scientist developed the theory of evolution by natural selection?\na) Charles Darwin\nb) Albert Einstein\nc) Isaac Newton\nd) Marie Curie",'a'},
    {"\nIn literature, who wrote the novel Pride and Prejudice?\na) Jane Austen\nb) Charlotte Brontë\nc) Emily Dickinson\nd) Virginia Woolf",'a'},
    {"\nWhat is the largest planet in our solar system by volume?\na) Jupiter\nb) Saturn\nc) Neptune\nd) Uranus",'a'},
    {"\nWhich country is known as the Land of the Rising Sun?\na) China\nb) South Korea\nc) Japan\nd) Vietnam",'c'},
    {"\nWho is the author of the Harry Potter book series?\na) J.K. Rowling\nb) George R.R. Martin\nc) J.R.R. Tolkien\nd) Suzanne Collins",'a'},
    {"\nWhat is the chemical symbol for the element with atomic number 79?\na) Au\nb) Ag\nc) Cu\nd) Fe",'a'},
    {"\nWhich mountain is the highest peak in North America?\na) Mount Everest\nb) Denali (Mount McKinley)\nc) Mount Kilimanjaro\nd) Mount Elbrus",'b'},
    {"\nIn which year did the Berlin Wall fall, symbolizing the end of the Cold War?\na) 1985\nb) 1989\nc) 1991\nd) 1995",'b'},
    {"\nWhat is the main component of Earth's atmosphere by volume?\na) Oxygen\nb) Nitrogen\nc) Carbon dioxide\nd) Argon",'b'}};

    int pres=1;
    int score=0;
    char name[30];
    char start;
    printf("                                                             QUIZ GAME ");
    printf("\nENTER YOUR NAME:");
    scanf(" %s",&name);
    printf("\n\nHELLO %s",name);
    FILE * ptr;
    ptr=fopen("QUIZ GAME.txt","a+");
    if(ptr==NULL)
    {
        perror("ERROR OPENING A FILE");
    }
    else
    {
       fprintf(ptr,"%s\n",name);
    }
    instructions();
    printf("\nARE YOU READY TO START THE GAME?:");
    scanf(" %c",&start);
    while(start=='Y'||start=='y')
    {
        char ques[500];
        char ans;
        int stat;
        if(pres==1)
        {
            printf("ROUND 1");
            for(int i=0;i<10;i++)
            {
                strcpy(ques,round1[i].ques);
                ans=round1[i].ans;
                playgame(ques,ans,&score);
            }
            printf("\nYOUR SCORE IS:%d",score);
            printf("\n1)NEXT ROUND\n3)EXIT\nANY NUMBER TO RETRY:");
            scanf("%d",&stat);
        }
        else if(pres==2)
        {
            printf("ROUND 2");
            for(int i=0;i<10;i++)
            {
                strcpy(ques,round2[i].ques);
                ans=round2[i].ans;
                playgame(ques,ans,&score);
            }
            printf("\nYOUR SCORE IS:%d",score);
            printf("\n1)NEXT ROUND\n2)PREVIOUS ROUND\n3)EXIT\nANY NIMBER TO RETRY:");
            scanf("%d",&stat);
        }
        else if(pres==3)
        {
            printf("ROUND 3");
            for(int i=0;i<10;i++)
            {
                strcpy(ques,round3[i].ques);
                ans=round3[i].ans;
                playgame(ques,ans,&score);
            }
            printf("\nYOUR SCORE IS:%d",score);
            printf("\n2)PREVIOUS ROUND\n3)EXIT\nANY NUMBER TO RETRY:");
            scanf("%d",&stat);
        }
        else
        {
            start='N';
            printf("THANKYOU");
        }
        pres=calstat(stat,pres);
        stat=0;
        score=0;
    }
    fclose(ptr);
}
