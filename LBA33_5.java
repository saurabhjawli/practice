import java.util.*;

class LBA33_2
{

    public static void main (String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number:");
        int iValue = sobj.nextInt();

        MarvellousX obj = new MarvellousX();

        int iRet = obj.digit(iValue);

        System.out.println("Number of in between elements is:"+iRet);

    }
}

class MarvellousX
{
    int iDigit=0;
    int iEven =0;
    int iOdd =0;
    public int digit(int iNo)
    {
        if(iNo<0)
        {
            iNo = -iNo;
        }
        for(int iCnt =1; iNo>0; iCnt++)
        {
            iDigit = iNo%10;

            if (iDigit %2==0)
            {
                iEven = iEven+iDigit;
            }
            else
            {
                iOdd = iOdd+iDigit;
            }

            iNo= iNo/10;
            
        }

        int iDiff = iEven - iOdd;
        return iDiff;

    }
}