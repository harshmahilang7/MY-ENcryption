/**
 * @Author: Dastan Alam
 * @Date:   2024-07-31 10:11:56 PM   22:07
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-07 10:18:44 PM   22:10
 */
abstract class Bank
{ 
abstract int getRateOfInterest(); 
} 
class SBI extends Bank
{ 
int getRateOfInterest(){return 7;} 
} 
class PNB extends Bank
{ 
int getRateOfInterest(){return 8;} 
} 
 
class TestBank
{ 
public static void main(String args[])
{ 
Bank b; 
b=new SBI(); 
System.out.println("Rate of Interest is: "+b.getRateOfInterest()+"%"); 
b=new PNB(); 
System.out.println("Rate of Interest is: "+b.getRateOfInterest()+"%"); 
}
}