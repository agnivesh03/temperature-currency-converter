#include <stdio.h>

int main()
{   
    int tc;
    int currency_choice;
    char category;

    float F_C; //Temperature in Fahreinheit
    float C_F; //Tremperature in Celcius
    float f;
    float c;

    // CURRENCY CONVERSIONS
    float userinputUSD_to_EUR;
    float userinputUSD_to_JPY;
    float userinputUSD_to_INR;
    float userinputUSD_to_CAD;
    float userinputUSD_to_GBP;
    float userinputUSD_to_AUD;
    float userinputUSD_to_AED;
    float userinputUSD_to_WON;
    float userinputUSD_to_YUAN;
    float userinputUSD_to_QAR;
    float USD_EUR;
    float USD_JPY;
    float USD_INR;
    float USD_CAD;
    float USD_GBP;
    float USD_AUD;
    float USD_AED;
    float USD_WON;
    float USD_YUAN;
    float USD_QAR;

    
    printf("Welcome User\n");
    printf("Temperature and Currency Converter\n");
    printf("Enter the category you want to make Conversions :\n");
    printf("T for temperature conversions\n");
    printf("C for currency conversions\n");

    scanf("%c",&category);

    if (category=='T')
    {   
        printf("Temperature Converter");
        printf("Select the type of conversion and Enter the number\n");
        printf("1.Fahrenheit to Celcis\n");
        printf("2.Celcis to Fahrenheit\n");
        scanf("%d",&tc);

        if (tc==1)
        {
            printf("Enter the temperature in Fahreinheit\n");
            scanf("%f",&F_C);
            f=(F_C-32)*(5.0/9.0);
            printf("%f ℉ = %f ℃",F_C,f);
        }
        else if (tc==2)
        {
            printf("Enter the temperature in Celcius\n");
            scanf("%f",&C_F);
            c=(C_F*(9.0/5.0))+32;
            printf("%f ℃ = %f ℉",C_F,c);
        }
        else
        {
            printf("Enter a valid choice");
        }
        
        
        
    }

    else if (category== 'C')
    {   
        printf("Currency Converter");
        printf("Select the type of conversion and Enter the number\n");
        printf("1.Dollar to Euro\n");
        printf("2.Dollar to Yen\n");
        printf("3.Dollar to Rupee\n");
        printf("4.Dollar to Canadian Dollar\n");
        printf("5.Dollar to British Pounds\n");
        printf("6.Dollar to Australian Dollar\n");
        printf("7.Dollar to Dirham\n");
        printf("8.Dollar to Won\n");
        printf("9.Dollar to Yuan\n");

        scanf("%d",&currency_choice);

        if (currency_choice==1)
        {   
            printf("USD to EUR\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_EUR);
            USD_EUR=userinputUSD_to_EUR*0.93;
            printf("﹩%f = € %f",userinputUSD_to_EUR,USD_EUR);
        }
        else if (currency_choice==2)
        {
            printf("USD to JPY\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_JPY);
            USD_JPY=userinputUSD_to_JPY*128.47;
            printf("﹩%f = ¥%f",userinputUSD_to_JPY,USD_JPY);
        }
        else if (currency_choice==3)
        {
            printf("USD to INR\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_INR);
            USD_INR=userinputUSD_to_INR*76.48;
            printf("﹩%f = ₹%f",userinputUSD_to_INR,USD_INR);
        }
        else if (currency_choice==4)
        {
            printf("USD to CAD\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_CAD);
            USD_CAD=userinputUSD_to_CAD*1.27;
            printf("﹩%f = C﹩%f",userinputUSD_to_CAD,USD_CAD);
        }
        else if (currency_choice==5)
        {
            printf("USD to GBP\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_GBP);
            USD_GBP=userinputUSD_to_GBP*0.78;
            printf("﹩%f = ￡%f",userinputUSD_to_GBP,USD_GBP);
        }
        else if (currency_choice==6)
        {
            printf("USD to AED\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_AED);
            USD_AED=userinputUSD_to_AED*1.38;
            printf("﹩%f = A﹩%f",userinputUSD_to_AED,USD_AED);
        }
        else if (currency_choice==7)
        {
            printf("USD to AUD\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_AUD);
            USD_AUD=userinputUSD_to_AUD*3.67;
            printf("﹩%f = د.إ%f",userinputUSD_to_AUD,USD_AUD);
        }
        else if (currency_choice==8)
        {
            printf("USD to WON\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_WON);
            USD_WON=userinputUSD_to_WON*1244.48;
            printf("﹩%f = ₩%f",userinputUSD_to_WON,USD_WON);
        }
        else if (currency_choice==9)
        {
            printf("USD to YUAN\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_YUAN);
            USD_YUAN=userinputUSD_to_YUAN*6.50;
            printf("﹩%f = ¥%f",userinputUSD_to_YUAN,USD_YUAN);
        }
        else if (currency_choice==10)
        {
            printf("USD to QAR\n");
            printf("Enter the amount in Dollar :\n");
            scanf("%f",&userinputUSD_to_QAR);
            USD_QAR=userinputUSD_to_QAR*3.64;
            printf("﹩%f = ر.ق%f",userinputUSD_to_QAR,USD_QAR);
        }
        else
        {
            printf("Enter a valid choice");
        }
    }
    else
    {
        printf("Please enter a valid choice");
    }
    
    return 0;
}
