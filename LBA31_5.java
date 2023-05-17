import java.util.*;

class LBA31_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");

        String Arr = sobj.nextLine();

        MarvellousX obj = new MarvellousX();

        obj.Reverse(Arr);

    }
}

class MarvellousX
{
    public void Reverse(String s)
    {
        String Rev = "";
        for (int i = s.length()-1;i>=0;i--)
        {
            Rev = Rev +s.charAt (i);

        }

        System.out.println("Reverse of the string is:" +Rev);
       
    }
}