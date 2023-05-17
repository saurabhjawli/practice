import java.util.*;

class LBA31_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");

        String Arr = sobj.nextLine();

        MarvellousX obj = new MarvellousX();

        boolean bRet = obj.Check(Arr);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
 
        }


    }
}

class MarvellousX
{
    public boolean Check(String s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((s.charAt(i)=='a')||(s.charAt(i)=='e')||(s.charAt(i)=='i')||(s.charAt(i)=='o')||(s.charAt(i)=='u'))
            {
                return true;
            }
           
        }
        return false;
    }
}