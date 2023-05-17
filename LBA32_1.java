import java.util.*;

class LBA32_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array:");
         
        int iSize = sobj.nextInt();
        
        ArrayX obj = new ArrayX(iSize);

        obj.Accept();

        obj.Display();

        int iRet = obj.Diff();

        System.out.println("Difference is:"+iRet);

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

        System.out.println("Enter the "+Arr.length+" elements:");

        for(int iCnt =0; iCnt<Arr.length;iCnt++)
        {
            System.out.println("Enter the Element no "+(iCnt+1));
            Arr[iCnt]= sobj.nextInt();

        }

    }

    public void Display()
    {
        System.out.println("Elements of Array are:");

        for(int iCnt = 0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }
    }

    public int Diff()
    {
        int iEven =0;
        int iOdd =0;
        for(int iCnt = 0;iCnt<Arr.length;iCnt++)
        {
           if((Arr[iCnt])%2 ==0)
           {
              iEven = iEven+Arr[iCnt];
           }
           else
           {
             iOdd = iOdd +Arr[iCnt];
           }
        }

        int iDiff = iEven-iOdd;

        return iDiff;
    }

}