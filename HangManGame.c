#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
#include<string.h>
int getRandoms(int lower, int upper, int count) 
{ 
    int i,num; 
    for (i = 0; i < count; i++) { 
        num = (rand() % (upper - lower + 1)) + lower; 
    }
    return (num); 
} 
void clrscr()
{
    system("cls");
}
void delay()
{
    int d,c;
    for (c = 1; c <= 16384; c++)
        for (d = 1; d <= 16384; d++)
                {}
}
void delay_short()
{
    int d,c;
    for (c = 1; c <= 8192; c++)
        for (d = 1; d <= 8192; d++)
                {}
}
void delay_very_short()
{
    int d,c;
    for (c = 1; c <= 4096; c++)
        for (d = 1; d <= 4096; d++)
                {}
}
void display(int wc)
{
    if(wc==0)
    {
        system("color A0");
        printf("\t ______________________\n");
        printf("\t |                    |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t ----------------------\n");
    }
    else if(wc==1)
    {
        system("color 20");
        printf("\t ______________________\n");
        printf("\t |                    |\n");
        printf("\t O                    |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t ----------------------\n");
    }
    else if(wc==2)
    {
        system("color E0");
        printf("\t ______________________\n");
        printf("\t |                    |\n");
        printf("\t O                    |\n");
        printf("\t/|                    |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t ----------------------\n");
    }
    else if(wc==3)
    {
        system("color 60");
        printf("\t ______________________\n");
        printf("\t |                    |\n");
        printf("\t O                    |\n");
        printf("\t/|\\                   |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t ----------------------\n");
    }
    else if(wc==4)
    {
        system("color C0");
        printf("\t ______________________\n");
        printf("\t |                    |\n");
        printf("\t O                    |\n");
        printf("\t/|\\                   |\n");
        printf("\t/                     |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t ----------------------\n");
    }
    else if(wc==5)
    {
        system("color 40");
        printf("\t ______________________\n");
        printf("\t |                    |\n");
        printf("\t O                    |\n");
        printf("\t/|\\                   |\n");
        printf("\t/ \\                   |\n");
        printf("\t                      |\n");
        printf("\t                      |\n");
        printf("\t ----------------------\n");
    }
}
void display_win(int wc)
{
    if(wc==0)
    {
        printf("\n\n\n\n");
        printf("\t           O          \n");
        printf("\t          /|\\         \n");
        printf("\t          / \\         \n");
        printf("\t ----------------------\n");
    }
    else if(wc==1)
    {
        printf("\n\n\n\n");
        printf("\t          \\O/         \n");
        printf("\t           |          \n");
        printf("\t          / \\         \n");
        printf("\t ----------------------\n");
    }
}
void intro()
{
    printf("\tXXXX  HANGMAN BY AVIXION  XXXX\n");
    printf("\t______________________________\n");

}
int search_letter(char input, char *word)
{
    int i;
    for(i=0;word[i]!='\0';i++)
    {
        if (word[i]==input)
            return 1;
    }
    return 0;
}
int str_length(char *word)
{
    int i=0,c=0;
    while(word[i]!='\0')
    {
        c++;
        i++;
    }
    return (c);
}
int main()
{
    system("color 70");
    char word[10]="", char_input;
    char list[440][20]={"wares","soup","mount","extend","brown","expert","tired","humidity","backpack","crust","dent","market","knock","smite","windy","coin","throw","silence","bluff","downfall","climb","lying","weaver","snob","kickoff","match","quaker","foreman","excite","thinking","mend","allergen","pruning","coat","emerald","coherent","manic","multiple","square","funded","funnel","sailing","dream","mutation","strict","mystic","film","guide","strain","bishop","settle","plateau","emigrate","marching","optimal","medley","endanger","wick","condone","schema","rage","figure","plague","aloof","there","reusable","refinery","suffer","affirm","captive","flipping","prolong","main","coral","dinner","rabbit","chill","seed","born","shampoo","italian","giggle","roost","palm","globe","wise","grandson","running","sunlight","spending","crunch","tangle","forego","tailor","divinity","probe","bearded","premium","featured","serve","borrower","examine","legal","outlive","unnamed","unending","snow","whisper","bundle","bracket","deny","blurred","pentagon","reformed","polarity","jumping","gain","laundry","hobble","culture","whittle","docket","mayhem","build","peel","board","keen","glorious","singular","cavalry","present","cold","hook","salted","just","dumpling","glimmer","drowning","admiral","sketch","subject","upright","sunshine","slide","calamity","gurney","adult","adore","weld","masking","print","wishful","foyer","tofu","machete","diced","behemoth","rout","midwife","neglect","mass","game","stocking","folly","action","bubbling","scented","sprinter","bingo","egyptian","comedy","rung","outdated","radical","escalate","mutter","desert","memento","kayak","talon","portion","affirm","dashing","fare","battle","pupil","rite","smash","true","entrance","counting","peruse","dioxide","hermit","carving","backyard","homeless","medley","packet","tickle","coming","leave","swing","thicket","reserve","murder","costly","corduroy","bump","oncology","swatch","rundown","steal","teller","cable","oily","official","abyss","schism","failing","guru","trim","alfalfa","doubt","booming","bruised","playful","kicker","jockey","handmade","landfall","rhythm","keep","reassure","garland","sauna","idiom","fluent","lope","gland","amend","fashion","treaty","standing","current","sharpen","cinder","idealist","festive","frame","molten","sill","glisten","fearful","basement","minutia","coin","stick","featured","soot","static","crazed","upset","robotics","dwarf","shield","butler","stitch","stub","sabotage","parlor","prompt","heady","horn","bygone","rework","painful","composer","glance","acquit","eagle","solvent","backbone","smart","atlas","leap","danger","bruise","seminar","tinge","trip","narrow","while","jaguar","seminary","command","cassette","draw","anchovy","scream","blush","organic","applause","parallel","trolley","pathos","origin","hang","pungent","angular","stubble","painted","forward","saddle","muddy","orchid","prudence","disprove","yiddish","lobbying","neuron","tumor","haitian","swift","mantel","wardrobe","consist","storied","extreme","payback","control","dummy","influx","realtor","detach","flake","consign","adjunct","stylized","weep","prepare","pioneer","tail","platoon","exercise","dummy","clap","actor","spark","dope","phrase","welsh","wall","whine","fickle","wrong","stamina","dazed","cramp","filet","foresee","seller","award","mare","uncover","drowning","ease","buttery","luxury","bigotry","muddy","photon","snow","oppress","blessed","call","stain","amber","rental","nominee","township","adhesive","lengthy","swarm","court","baguette","leper","vital","push","digger","setback","accused","taker","genie","reverse","fake","widowed","renewed","goodness","featured","curse","shocked","shove","marked","interact","mane","hawk","kidnap","noble","proton","effort","patriot","showcase","parish","mosaic","coil","aide","breeder","concoct","pathway","hearing","bayou","regimen","drain","bereft","matte","bill","medal","prickly","sarcasm","stuffy","allege","monopoly","lighter","repair","worship","vent","hybrid","buffet","lively"};
    int i,len,present,wrong_count=0,win_check,num;
    intro();
    srand(time(0));
    num=getRandoms(0,439,1);
    strcpy(word,list[num]);
    clrscr();
    for(i=0;i<=5;i++)
        {
            clrscr();
            intro();
            printf("\tWELCOME TO THE GAME YOU HAVE TO GUESS THE WORD TO SAVE THE MAN.\n\n\tIF YOU GUESS RIGHT THE MAN REMAINS SAVED.\n\n\tBUT IF YOU GUESS WRONG A LITTLE BIT OF THE MAN IS ADDED.\n\n\tHE DIES IF YOU ARE WRONG 5 TIMES.\n\n");
            display(i);
            delay_short();
        }
    delay();
    delay();
    delay();
    delay();
    delay();
    delay();
    len=str_length(word);
    char show[10];
    for(i=0;i<len;i++)
    {
        if(word[i]==' ')
            show[i]=' ';
        else
            show[i]='_';
    }
    cp1:

    clrscr();
    intro();
    system("color 70");
    display(wrong_count);
    printf("\n\n");
    printf("Guess the word: ");
    for(i=0;i<len;i++)
        printf("%c ",show[i]);
    printf("\n\n");
    for(i=0;i<len;i++)
    {
        win_check=0;
        if(word[i]==show[i])
            win_check=1;
        if(win_check!=1)
            break;
    }
    if(win_check==1)
    {
        for(i=0;i<=10;i++)
        {
            system("color 0A");

            clrscr();
            system("color 0B");
            delay_very_short();
            display_win(i%2);
            system("color 0C");
            delay_very_short();
            printf("Congrats!\n");
            system("color 0D");
            delay_very_short();
            printf("You win! You saved the man!");
            system("color 0E");
            delay_short();

        }

        delay();
        delay();
        delay();
        delay();
        return 0;
    }
    printf("\nYou have %d wrong guesses left\n",5-wrong_count);
    printf("\n\nGuess a letter: ");
    fflush(stdin);
    scanf("%c",&char_input);
    present=search_letter(char_input,word);
    if(present==1)
    {
        for(i=0;i<len;i++)
            if(word[i]==char_input)
                show[i]=word[i];
        printf("\nCorrect!\n");
        system("color A0");
        delay();
        goto cp1;
    }
    else if (present==0)
    {
        printf("\nIncorrect!\n");
        system("color C0");
        delay();
        wrong_count++;
       if(wrong_count==5)
       {
            clrscr();
            intro();
            display(wrong_count);
            printf("You lose! The man is dead!");
            printf("\n\nThe actual word is %s",word);
            delay();
            delay();
            delay();
            delay();
            return 0;
       }
        goto cp1;
    }
}
