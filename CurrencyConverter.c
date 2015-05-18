/*This program is a currency conversion
that uses two functions to return values.
It will convert 3 amounts From Euro to Dollar
and vice versa
Author:Eoin Irwin
27-02-14*/

#include<stdio.h>
#define SIZE 3          

//Declare prototype

float change_to_Euro(float []);
float change_to_Dollar(float []);

main()
{
    float currency[SIZE];
    float average;
    int choice = 0;
    int i;
    
    printf("\nEnter any 3 amounts:\n");
    scanf("%f",&currency);
    
    for(i=0;i<SIZE;i++) // for loop to enter 3 amounts
    {
        scanf("%f",&currency[i]);
    }
    
    while(choice!=3)
    {
    printf("\n1: Euro "); // select this for the euro option
    printf("\n2: Us Dollar "); // select option 2 for US Dollar
    printf("\n3: Exit \n"); // Selecting option 3 exits the program
    scanf("%d",&choice); // Gives the user the option to enter a number
    
    switch(choice)
        {
            case 1:
            {
                //Call function change_to_euro
                
                average = change_to_Euro(currency);
                
                printf("\nThe average in Euro is %.2f",average);
                break;
                
            }// end case 1:
            
            case 2:
            {
                //call function change_to_dollar
                
                average = change_to_Dollar(currency);
                
                printf("\nThe average in Us dollar is %.2f",average);
                break;
                
            }// end case 2:
            
            case 3:
            {
                printf("This program will terminate, goodbye");
                getchar();
                return 0;
                
            }// end case 3:
            
            default:
            {
                printf("\nInvalid input\n");
                break;
                
            }// end default:
            
        }// end switch
        
    } // end while
    
}// end main()


//Implement function change_to_Euro()

float change_to_Euro(float Dollar[])
{
    
    float Euro[SIZE];
    float average;
    float sum = 0;
    int i;

    //convert dollar into euro, store in local array to this function
    
    for(i=0;i<SIZE;i++)
    {
        Euro[i] = Dollar[i] * 0.73;
        
        //Display each euro amount with its corresponding dollar amount
        //
        
        printf("\nDollar is %.2f = Euro %.2f", Dollar[i], Euro[i]);
        
    } // end for
    
    //Calculate the sum of the sum of the converted euro amount
    //
    
    for(i=0;i<SIZE;i++)
    {
        sum = sum + Euro[i];
        
    } // end for
    
    //Calculate the average of the converted euro amount
    //
    
    average = (float) sum / SIZE;
    
    return(average);

} // end change_to_Euro

float change_to_Dollar(float Euro[])
{
    float Dollar[SIZE];
    float average;
    float sum = 0;
    int i;
    
    // convert euro into dollar store in local array
    
    for(i=0;i<SIZE;i++)
    {
        Dollar[i] = Euro[i] * 1.36;
        
        //display each Dollar amount with its corresponding euro amount
        //
        
        printf("\nEuro %.2f = Dollar %.2f", Euro[i], Dollar[i]);
        
    }// end for
    
    
    //Calculate the sum of the converted dollar amount 
    //
    
    for(i=0;i<SIZE;i++)
    {
        sum = sum + Dollar[i];
        
    }//end for
    
    
    //Calculate the average of the Dollar
    //
    
        average = (float) sum / SIZE;
        
        return(average);
    
}// end change_to_euro