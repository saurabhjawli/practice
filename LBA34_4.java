import java.util.*;

class LBA34_1
{
    public static void main (String ar[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the number of elements of array:");
       int iValue = sobj.nextInt();

       System.out.println("Enter the starting number:");
       int iSE = sobj.nextInt();

       System.out.println("Enter the Ending number :");
       int iEE = sobj.nextInt();

       ArrayX obj = new ArrayX(iValue);

       obj.Accept();

       obj.Check(iSE,iEE);

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

    public void Check(int iStart, int iEnd)
    {
        System.out.println(" Numbers in the range are:");

        for(int iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            if (iStart< Arr[iCnt] && Arr[iCnt]< iEnd)
            {
               System.out.print(Arr[iCnt]+"\t");
            }
        }
        
    } 
}