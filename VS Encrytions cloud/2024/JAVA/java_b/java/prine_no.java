/**
 * @Author: Dastan_Alam
 * @Date:   13-08-2023 09:10:49 PM       21:10:49
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 13-08-2023 09:22:19 PM       21:22:19
 */

public class prine_no {
    public static void main(String... args) {
        int a=10;
        int f=0;
        for (int i = 2; i < a; i++) { 
            if(a%i==0){
                f=1;
            }
        }
        if (f==1){
            System.out.println("composte");
        }
            
        else
        {
            System.out.println("prime");
        }
    }
    