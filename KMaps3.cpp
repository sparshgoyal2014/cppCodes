#include <iostream>
#include <iomanip>
using namespace std;
int minterm[2][4];

int colLocation[2];
int rowLocation;

int colVarA[2];

int colVarB[2];
int noOfOnes = 0;
int noOf1 = 0;
int rowFor1;
int colAFor1;
int colBFor1;
int number = 0;
int num1=0;
int num2=0;
int num3=0;
int num4=0;

void assignOne(int x)
{
    switch (x)
    {
    case 0:
        minterm[0][0] = 1;
        break;

    case 1:
        minterm[0][1] = 1;
        break;

    case 2:
        minterm[0][3] = 1;
        break;

    case 3:
        minterm[0][2] = 1;
        break;

    case 4:
        minterm[1][0] = 1;
        break;

    case 5:
        minterm[1][1] = 1;
        break;

    case 6:
        minterm[1][3] = 1;
        break;

    case 7:
        minterm[1][2] = 1;
        break;
    }
}

void selectFor1(int x, int y, int z)
{
    switch (x)
    {
    case 0:
        cout << "C\'";

        switch (y)
        {
        case 0:
            switch (z)
            {
            case 0:
                cout << "A\'B\'";
                break;

            case 1:
                cout << "A\'B";
                break;
            }
            break;

        case 1:
            switch (z)
            {
            case 0:
                cout << "AB\'";
                break;

            case 1:
                cout << "AB";
                break;
            }
            break;
        }
        break;

    case 1:
        cout << "C";

        switch (y)
        {
        case 0:
            switch (z)
            {
            case 0:
                cout << "A\'B\'";
                break;

            case 1:
                cout << "A\'B";
                break;
            }
            break;

        case 1:
            switch (z)
            {
            case 0:
                cout << "AB\'";
                break;

            case 1:
                cout << "AB";
                break;
            }
            break;
        }
        break;
    }
}

/*void colVar()
{
   if((colLocation[0]==0)&&(colLocation[1]==1))
   {
       cout << "A\'";
   }

   if((colLocation[0]==1) && (colLocation[1]==2))
   {
       cout << "B";
   }

   if((colLocation[0]==2) && (colLocation[1]==3))
   {
       cout << "A";
   }

   if((colLocation[0]==0) && (colLocation[1]==3))
   {
       cout <<"B\'";
   }
}
*/

int main()
{

    int n = 0; // for justifying that how many times the loop runs........

    cout << "USER PLEASE INPUT YOUR MINTERMS :" << endl;

    int valueMinterm;
    char c = 'y';

    while (c == 'y')
    {
        cin >> valueMinterm;

        assignOne(valueMinterm);

        cout << "Do you want to enter more ? (y/n)" << endl;
        cin >> c;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
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
        for (int j = 0; j < 4; j++)
        {
            cout << setw(5) << minterm[i][j] << setw(5);
        }

        cout << endl;
    }

    int colA[4] = {0, 0, 1, 1};
    int colB[4] = {0, 1, 1, 0};
    int rowC[2] = {0, 1};

    cout << "Function is :"
         << "F = ";

    //==============================================SINGLE ROW FOUR 1'S==========================================

    /*

    for (int j = 0; j < 2; j++)
    {
        n++;

        for (int i = 0; i < 4; i++)
        {
            if (minterm[j][i] == 1)
            {
                noOfOnes++;
                rowLocation = j;

                if (noOfOnes == 4 && n == 1 && j==0)
                {
                    switch (rowLocation)
                    {
                    case 0:
                        cout << "C\'";
                        break;

                    case 1:
                        cout << "C";
                        break;
                    }

                    cout << "+";
                }

                if(noOfOnes == 4 && n==2 && j==1)
                {
                     switch (rowLocation)
                    {
                    case 0:
                        cout << "C\'";
                        break;

                    case 1:
                        cout << "C";
                        break;
                    }

                    cout << "+";
                }
            }
        }
    }

    */

    for (int j = 0; j < 2; j++)
    {

        rowLocation = j;

        if (minterm[j][0] == 1 && minterm[j][1] == 1 && minterm[j][2] == 1 && minterm[j][3] == 1)
        {
            switch (rowLocation)
            {
            case 0:
                cout << "C\'";
                break;

            case 1:
                cout << "C";
                break;
            }

            cout << "+";
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int k = 1; k < (4 - i); k++)
        {
            if (((colA[i + k] - colA[i] == 1) && (colB[i + k] - colB[i] == 0)) || ((colA[i + k] - colA[i] == 0) && ((colB[i + k] - colB[i] == 1 || (colB[i + k] - colB[i] == -1)))))
            {

                if (minterm[0][i] == 1 && minterm[0][i + k] == 1 && minterm[1][i] == 1 && minterm[1][i + k] == 1)
                {
                    colVarA[1] = colA[i + k];
                    colVarA[0] = colA[i];
                    colVarB[1] = colB[i + k];
                    colVarB[0] = colB[i];

                    switch (colVarA[1] - colVarA[0])
                    {
                    case 0:
                        switch (colVarA[0])
                        {
                        case 0:
                            cout << "A\'";
                            break;

                        case 1:
                            cout << "A";
                            break;
                        }
                        break;

                    case 1:
                        switch (colVarB[0])
                        {
                        case 0:
                            cout << "B\'";
                            break;

                        case 1:
                            cout << "B";
                            break;
                        }
                        break;
                    }

                    cout << "+";
                }
            }
        }
    }

    //=================================HORIZONTAL PAIRING OF TWO ONE'S=============================================
    for (int j = 0; j < 2; j++)
    {

        for (int i = 0; i < 4; i++)
        {
            for (int k = 1; k < (4 - i); k++)
            {
                if (((colA[i + k] - colA[i] == 1) && (colB[i + k] - colB[i] == 0)) || ((colA[i + k] - colA[i] == 0) && ((colB[i + k] - colB[i] == 1 || (colB[i + k] - colB[i] == -1)))))
                {
                    if (minterm[j][i] == 1 && minterm[j][i + k] == 1)
                    {

                        if (j == 0 && minterm[j + 1][i] == 1 && minterm[j + 1][i + k] == 1)
                        {
                            continue;
                        }
                        if (j == 1 && minterm[j - 1][i] == 1 && minterm[j - 1][i + k] == 1)
                        {
                            continue;
                        }

                        if (minterm[j][0] == 1 && minterm[j][1] == 1 && minterm[j][2] == 1 && minterm[j][3] == 1)
                        {
                            continue;
                        }
                        int columnVarA[2];
                        int columnVarB[2];
                        int rowVar;

                        columnVarA[1] = colA[i + k];
                        columnVarA[0] = colA[i];
                        columnVarB[1] = colB[i + k];
                        columnVarB[0] = colB[i];

                        rowVar = j;

                        switch (rowVar)
                        {
                        case 0:
                            cout << "C\'";
                            switch (columnVarA[1] - columnVarA[0])
                            {
                            case 0:
                                switch (columnVarA[0])
                                {
                                case 0:
                                    cout << "A\'";
                                    break;

                                case 1:
                                    cout << "A";
                                    break;
                                }
                                break;

                            case 1:
                                switch (columnVarB[0])
                                {
                                case 0:
                                    cout << "B\'";
                                    break;

                                case 1:
                                    cout << "B";
                                    break;
                                }
                                break;
                            }
                            break;

                        case 1:
                            cout << "C";
                            switch (columnVarA[1] - columnVarA[0])
                            {
                            case 0:
                                switch (columnVarA[0])
                                {
                                case 0:
                                    cout << "A\'";
                                    break;

                                case 1:
                                    cout << "A";
                                    break;
                                }
                                break;

                            case 1:
                                switch (columnVarB[0])
                                {
                                case 0:
                                    cout << "B\'";
                                    break;

                                case 1:
                                    cout << "B";
                                    break;
                                }
                                break;
                            }
                            break;
                        }
                        cout << "+";
                    }
                }
            }
        }
    }

    //========================================VERTICAL PAIRING==================================================

    for (int i = 0; i < 4; i++)
    {
        // for (int k = 1; k < (4 - i); k++)
        //{
        //  if (((colA[i + k] - colA[i] == 1) && (colB[i + k] - colB[i] == 0)) || ((colA[i + k] - colA[i] == 0) && ((colB[i + k] - colB[i] == 1 || (colB[i + k] - colB[i] == -1)))))
        //{
        if (minterm[0][i] == 1 && minterm[0][i + 1] == 1 && minterm[1][i] == 1 && minterm[1][i + 1] == 1 && (i < 3))
        {
            continue;
        }

        if (minterm[0][i] == 1 && minterm[0][i - 3] == 1 && minterm[1][i] == 1 && minterm[1][i - 3] == 1 && (i == 3))
        {
            continue;
        }

        if (minterm[0][i] == 1 && minterm[0][i - 1] == 1 && minterm[1][i] == 1 && minterm[1][i - 1] == 1 && (i >= 1))
        {
            continue;
        }

        if (minterm[0][i] == 1 && minterm[0][i + 3] == 1 && minterm[1][i] == 1 && minterm[1][i + 3] == 1 && (i == 0))
        {
            continue;
        }

        if (minterm[0][i] == 1 && minterm[1][i] == 1)
        {
            int column = i;

            switch (column)
            {
            case 0:
                cout << "A\'B\'";
                break;

            case 1:
                cout << "A\'B";
                break;

            case 2:
                cout << "AB";
                break;

            case 3:
                cout << "AB\'";
                break;
            }

            cout << "+";
        }
        //}
        //}
    }
    //=================================================ONLY SINGLE ONE========================================================

    //for (int j = 0; j < 2; j++)
    // {

    /*///////////////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < 4; i++)
    {

        if (minterm[0][i] == 1 || minterm[1][i] == 1)
        {
            // for (int k = 0; k < (4 - i); k++)
            //{
            //if (((colA[i + k] - colA[i] == 1) && (colB[i + k] - colB[i] == 0)) || ((colA[i + k] - colA[i] == 0) && ((colB[i + k] - colB[i] == 1 || (colB[i + k] - colB[i] == -1)))))
            //{

            if ((minterm[0][i] == 1 || minterm[0][i + 1] == 1 || minterm[1][i] == 1 || minterm[1][i + 1] == 1) && i < 3)
            {

                noOf1 = minterm[0][i] + minterm[0][i + 1] + minterm[1][i] + minterm[1][i + 1];

                if (noOf1 == 2)
                {
                }
                if (minterm[0][i] == 1)
                {
                    rowFor1 = 0;
                    colAFor1 = colA[i];
                    colBFor1 = colB[i];
                }

                if (minterm[0][i + 1] == 1)
                {
                    rowFor1 = 0;
                    colAFor1 = colA[i + 1];
                    colBFor1 = colB[i + 1];
                }

                if (minterm[1][i] == 1)
                {
                    rowFor1 = 1;
                    colAFor1 = colA[i];
                    colBFor1 = colB[i];
                }

                if (minterm[1][i + 1] == 1)
                {
                    rowFor1 = 1;
                    colAFor1 = colA[i + 1];
                    colBFor1 = colB[i + 1];
                }
                if (noOf1 == 1)
                {
                    selectFor1(rowFor1, colAFor1, colBFor1);
                    noOf1 = 0;
                }

                cout << "+";
                continue;
            }

            if ((minterm[0][i] == 1 || minterm[0][i - 3] == 1 || minterm[1][i] == 1 || minterm[1][i - 3] == 1) && i == 3)
            {
                noOf1 = minterm[0][i] + minterm[0][i - 3] + minterm[1][i] + minterm[1][i - 3];

                if (minterm[0][i] == 1)
                {
                    rowFor1 = 0;
                    colAFor1 = colA[i];
                    colBFor1 = colB[i];
                }

                if (minterm[0][i - 3] == 1)
                {
                    rowFor1 = 0;
                    colAFor1 = colA[i - 3];
                    colBFor1 = colB[i - 3];
                }

                if (minterm[1][i] == 1)
                {
                    rowFor1 = 1;
                    colAFor1 = colA[i];
                    colBFor1 = colB[i];
                }

                if (minterm[1][i - 3] == 1)
                {
                    rowFor1 = 1;
                    colAFor1 = colA[i - 3];
                    colBFor1 = colB[i - 3];
                }

                if (noOf1 == 1)
                {
                    selectFor1(rowFor1, colAFor1, colBFor1);
                    noOf1 = 0;
                }
                cout << "+";
                continue;
            }
            if ((minterm[0][i] == 1 || minterm[0][i - 1] == 1 || minterm[1][i] == 1 || minterm[1][i - 1] == 1) && (i >= 1))
            {
                noOf1 = minterm[0][i] + minterm[0][i - 1] + minterm[1][i] + minterm[1][i - 1];

                if (minterm[0][i] == 1)
                {
                    rowFor1 = 0;
                    colAFor1 = colA[i];
                    colBFor1 = colB[i];
                }

                if (minterm[0][i - 1] == 1)
                {
                    rowFor1 = 0;
                    colAFor1 = colA[i - 1];
                    colBFor1 = colB[i - 1];
                }

                if (minterm[1][i] == 1)
                {
                    rowFor1 = 1;
                    colAFor1 = colA[i];
                    colBFor1 = colB[i];
                }

                if (minterm[1][i - 1] == 1)
                {
                    rowFor1 = 1;
                    colAFor1 = colA[i - 1];
                    colBFor1 = colB[i - 1];
                }

                if (noOf1 == 1)
                {
                    selectFor1(rowFor1, colAFor1, colBFor1);
                    noOf1 = 0;
                }
                cout << "+";
                continue;
            }

            if ((minterm[0][i] == 1 || minterm[0][i + 3] == 1 || minterm[1][i] == 1 || minterm[1][i + 3] == 1) && i == 0)
            {
                noOf1 = minterm[0][i] + minterm[0][i + 3] + minterm[1][i] + minterm[1][i + 3];

                if (minterm[0][i] == 1)
                {
                    rowFor1 = 0;
                    colAFor1 = colA[i];
                    colBFor1 = colB[i];
                }

                if (minterm[0][i + 3] == 1)
                {
                    rowFor1 = 0;
                    colAFor1 = colA[i + 3];
                    colBFor1 = colB[i + 3];
                }

                if (minterm[1][i] == 1)
                {
                    rowFor1 = 1;
                    colAFor1 = colA[i];
                    colBFor1 = colB[i];
                }

                if (minterm[1][i + 3] == 1)
                {
                    rowFor1 = 1;
                    colAFor1 = colA[i + 3];
                    colBFor1 = colB[i + 3];
                }

                if (noOf1 == 1)
                {
                    selectFor1(rowFor1, colAFor1, colBFor1);
                    noOf1 = 0;
                }

                cout << "+";
                continue;
            }
        }
        

        // }
        // }
    }
    */
    //////////////////////////////////////////////////////////////////////////////////////////////

    for (int i = 0; i < 4; i++)
    {
        for (int k = 1; k < (4 - i); k++)
        {
            if (((colA[i + k] - colA[i] == 1) && (colB[i + k] - colB[i] == 0)) || ((colA[i + k] - colA[i] == 0) && ((colB[i + k] - colB[i] == 1 || (colB[i + k] - colB[i] == -1)))))
            {
                if (minterm[0][i] == 1 || minterm[0][i + k] == 1 || minterm[1][i] == 1 || minterm[1][i + k] == 1)
                {
                    noOf1 = minterm[0][i] + minterm[0][i + k] + minterm[1][i] + minterm[1][i + k];

                    if (minterm[0][i] == 1)
                    {
                        rowFor1 = 0;
                        colAFor1 = colA[i];
                        colBFor1 = colB[i];
                        num1++;
                    }

                    if (minterm[0][i + k] == 1)
                    {
                        rowFor1 = 0;
                        colAFor1 = colA[i + k];
                        colBFor1 = colB[i + k];
                        num2++;
                    }

                    if (minterm[1][i] == 1)
                    {
                        rowFor1 = 1;
                        colAFor1 = colA[i];
                        colBFor1 = colB[i];
                        num3++;
                    }

                    if (minterm[1][i + k] == 1)
                    {
                        rowFor1 = 1;
                        colAFor1 = colA[i + k];
                        colBFor1 = colB[i + k];
                        num4++;
                    }

                    if (noOf1 == 1)
                    {
                        // if((colAFor1==0 && colBFor1==0) || (colAFor1==1 &&  colBFor1==0))
                        //{
                       /* number++;
                        if (number == 2)
                        {
                            continue;
                            number = 0;

                        }*/

                        if(num1>=2 || num2>=2 || num3>=2 || num4>=2)
                        {

                            num1=0;
                            num2=0;
                            num3=0;
                            num4=0;
                           
                            continue;
                             
                        }

                            selectFor1(rowFor1, colAFor1, colBFor1);
                            noOf1 = 0;
                        
                    }

                    cout << " + ";
                }
            }
        }
    }
    // }

    /* for(int j=0;j<2;j++)
                {
                    for(int l=0;l<=k;l++)
                    {

                    
                        /* if(minterm[j][l]==1)
                        {
                        noOfOnes++;
                        colVarA[1]=colA[i+k];
                        colVarA[0]=colA[i];
                        colVarB[1]=colB[i+k];
                        colVarB[0]=colB[i];
                        */
    /*for(int l=0;l<2;l++)
                        {
                            colLocation[l]=i;
                            break;
                        }
                        */

    //       }
    //   }

    // }

    /*switch(colVarA[1]-colVarA[0])
    {
        case 0:
        switch(colVarA[0])
        {
            case 0:
            cout << "A\'";
            break;

            case 1:
            cout << "A";
            break;
        }
        break;

        case 1:
        switch(colVarB[0])
        {
            case 0:
            cout << "B\'";
            break;

            case 1:
            cout << "B";
            break;
        }
        break;

    }
    */

    /*if(noOfOnes==4)
    {
        colVar();
    }
    */

    return 0;
}