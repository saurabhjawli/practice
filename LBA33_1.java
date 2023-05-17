import java.util.*;

class LBA33_1
{
    public static void main(String arg[])
    {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter the number:");
     int iValue = sobj.nextInt();
     MarvellousX obj = new MarvellousX();

     int iRet = obj.EvenDigits(iValue);

     System.out.println("Number of Even Digits is:"+iRet);

    }
}

class MarvellousX
{
    int iEven =0;
    
   public int EvenDigits(int iNo)
   {    

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(int iCnt =1;iNo>0;iCnt++)
    {
        int iDigit = iNo%10;
        if(iDigit%2 ==0)
        {
          iEven++ ;
        }

        iNo = iNo/10;

    }
    return iEven;
   }

}