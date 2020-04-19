#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int weight=0;
    int rowLocation;
    int colLocation;
    string rowVar;
    string colVar;

    char total[10];


    int minterm[2][2];

    cout << "USER PLEASE INPUT MINTERMS :" << endl;

    int valueMinterm;

    char c = 'y';
//    =============================================================================
    /*switch (valueMinterm)
    {
    case 0:
    {
        minterm[0][0] = 1;
        break;
    }

    case 1:
    {
        minterm[0][1] = 1;
        break;
    }

    case 2:
    {
        minterm[1][0] = 1;
        break;
    }

    case 3:

    {
        minterm[1][1] = 1;
        break;
    }
    }
    */
  // ===================================================================================
    while (c == 'y')
    {
        cin >> valueMinterm;
        switch (valueMinterm)
        {
        case 0:
        {
            minterm[0][0] = 1;
            break;
        }

        case 1:
        {
            minterm[0][1] = 1;
            break;
        }

        case 2:
        {
            minterm[1][0] = 1;
            break;
        }

        case 3:

        {
            minterm[1][1] = 1;
            break;
        }
        }

        //=========================WRONG METHOD===================================================

        /*if(valueMinterm==0)
    minterm[0][0] = 1
    else
    minterm[0][0] = 0;

    if(valueMinterm==1)
    minterm[0][1]=1
    else
    minterm[0][1]=0

    if(valueMinterm==2)
    minterm[1][0]=1;
    else

    minterm[1][0]=0;

    if(valueMinterm==3)
    minterm[1][1] = 1;
    else
    {
    minterm[1][1] = 0;
    }
    */

        //==============================================================================

        cout << "Do You Want to enter again ? (y/n)" << endl;
        cin >> c;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (minterm[i][j] == 1)
            {
                continue;
            }
            else
            {
                minterm[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << setw(5) << minterm[i][j] << setw(5);
        }
        cout << endl;
    }


    int column[2]={0,1};
    int row[2]={0,1};

    cout << "function is :" << "F = " ; 


    if(column[1]-column[0]==1)
    {
        for(int i=0;i<2;i++)
        {

            if(minterm[0][0]==1 && minterm[0][1]== 1 && minterm[1][0]==1 && minterm[1][1]==1)
            {
                cout << 1 << endl;
                break;

            }
            
         if((minterm[i][1]-minterm[i][0]==0) && (minterm[i][0]==1))
            {
                switch(row[i])
                {
                    case 0:
                    cout << "B\'";
                    break;
                    case 1:
                    cout << "B";
                    break;
                }
            }

            cout << "+" ;

         if((minterm[1][i]-minterm[0][i]==0 ) && (minterm[0][i]==1))
            {
                switch(column[i])
                {
                    case 0:
                    cout << "A\'";
                    break;

                    case 1:
                    cout << "A";
                    break;
                }
            }


        // if the above cases not work the next will automatically becomes ELSE statement even if it is not written........

            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                     if(minterm[i][j]==1)
                {
                     rowLocation=i;
                    colLocation=j;

                

                switch(rowLocation)
            {
                case 0:
                rowVar = "B\'";
                break;
                
                case 1:
                rowVar = "B";
                break;
            }


            switch(colLocation)
            {
                case 0:
                colVar = "A\'";
                break;

                case 1:
                colVar = "A";
                break;
            }

            cout << rowVar + colVar << "+";
                }

           

            }

            }

         
         
        
//==========================================================================================
       /* for(int i=0;i<2;i++)
        {

            for(int j=0;j<2;j++)
            {
                if(minterm[i][j]==1)
                {
                    weight++;
                    rowLocation=i;
                    colLocation=j;

                }
            }
        }

        if(weight==1)

        {
            switch(rowLocation)
            {
                case 0:
                rowVar = "B\'";
                break;
                
                case 1:
                rowVar = "B";
                break;
            }


            switch(colLocation)
            {
                case 0:
                colVar = "A\'";
                break;

                case 1:
                colVar = "A";
                break;
            }

            cout << rowVar + colVar ;

        }
    }
    */
   //========================================================================================

    return 0;
}
}
}