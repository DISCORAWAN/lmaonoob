import java.util.*;
class Cubefemale
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t > 0)
        {
            int x  = sc.nextInt();
            String str = x + "";

            // while(x >= 33)
            // {
            //     x = x - 33;
            // }

            // if(x > 0)
            // System.out.println("NO");
        
            //if(Integer.parseInt(str.substring(0, 2)) < 33)
            if(x < 33)
            System.out.println("NO");

            if(x >= 33)
            {
                for(int i = 0; i < str.length(); i++)
                {
                    if(i+2 >= str.length())
                    {
                        if(str.substring(i).equals("33"))
                        {
                            str = str.substring(0,i); // + str.substring(i);
                            break;
                        }
                        
                    }
                    

                    else
                    {
                        if(str.substring(i,i+2).equals("33"))
                        {
                            str = str.substring(0,i) + str.substring(i+2);
                        }
                    }


                }

                if(Integer.parseInt(str) < 33)
                {
                    System.out.println("NO");
                    break;
                }
                

                else if(Integer.parseInt(str) >= 33)
                {
                    while(Integer.parseInt(str) >= 33)
                    {
                        x = Integer.parseInt(str) - 33;
                        str = Integer.toString(x);
                    }

                    if(Integer.parseInt(str) == 0){
                    System.out.println("YES");
                    break;}

                    else if( Integer.parseInt(str) < 33){
                    System.out.println("NO");
                    break;}
                
                }
                
            }
            
            
    
            
            t--;
        }

        sc.close();
    }
}