import java.util.*;

class LBA34_1
{
    public static void main (String ar[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number of elements of array:");
       int iValue = sobj.nextInt();


       ArrayX obj = new ArrayX(iValue);

       obj.Accept();

       int iRet = obj.Check();

        System.out.println(" Product of all odd elements is:"+iRet);

    }
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
      Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter"+Arr.length+"elements:");

        for(int iCnt =0 ; iCnt< Arr.length;iCnt++)
        {
            System.out.println("Enter the element no"+(iCnt+1));
            Arr[iCnt]= sobj.nextInt();
        }
    }

    public int Check()
    {
        int iMult=1;

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]%2 != 0)
            {
                iMult = iMult * Arr[iCnt];
            }
           
        }
        return iMult;
        
    } 
}