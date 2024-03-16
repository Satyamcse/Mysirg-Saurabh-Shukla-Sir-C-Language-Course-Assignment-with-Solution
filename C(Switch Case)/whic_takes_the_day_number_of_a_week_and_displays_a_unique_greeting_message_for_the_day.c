#include<stdio.h>
int main(){
    int DayNumber;
    printf("Enetr DayNumber");
    scanf("%d",&DayNumber);
    switch(DayNumber){
        case 1:
             printf("When wishing someone happiness, be specific about what you wish for them. Instead of just saying, “I wish you happiness,” tailor your wishes to their specific circumstances or goals");
             break;
        case 2:
             printf("Using positive language when expressing your wishes sets an upbeat and optimistic tone. Instead of generic phrases, opt for words that radiate positivity and enthusiasm");
             break;
        case 3:
             printf("In addition to conveying happiness, showing empathy in your well-wishes adds sincerity and authenticity. Put yourself in the recipient’s shoes and consider their emotions and experiences");
             break;
        case 4:
             printf("Sincerity is vital when expressing well wishes for happiness. Avoid generic or insincere wishes, and take the time to reflect on your relationship with the person");
             break;
        case 5:
             printf("Adding a touch of creativity to your well-wishes can make them more memorable and engaging. Consider using quotes, poems, or even creating a personalized video message to convey your wishes");
             break;
        case 6:
            printf("May your days be sprinkled with kindness and your heart be showered with abundant happiness");
            break;
        case 7:
            printf("May your life be a garden of blooming flowers, where each petal represents a moment of joy");
            break;
        default :
            printf("Invalid DayNumber");
            break;
    }
}