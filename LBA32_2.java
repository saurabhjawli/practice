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

        obj.Div();

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
            System.out.print(Arr[iCnt]+"\t");
        }
         System.out.println("");

    }

    public void Div()
    {
      System.out.println("Numbers Divisible by 5 are:");

       for(int iCnt = 0; iCnt<Arr.length;iCnt++)
       {
        if(Arr[iCnt]% 5 == 0)
        {
            System.out.println(Arr[iCnt]);
        }
       }
    }

}