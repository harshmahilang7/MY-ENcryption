public class RoomHeaterTester
{
    String modelName;
    boolean isOn;
    int temperature;
    String heatingLevel;
    RoomHeaterTester()
    {
        modelName="Standard";
        isOn=false;
        temperature=22;
        heatingLevel="Medium";
    }
    RoomHeaterTester(String m,boolean i,int t,String h)
    {
        modelName=m;
        isOn=i;
        temperature=t;
        heatingLevel=h;
    }

    void turnOn()
    {
         isOn=true;
    }
    void turnOff()
    {
         isOn=false;
    }
    void setTemperature(int temp)
    {
        if(temp>=18&&temp<=28)
        {
             temperature=temp;
        }
        else
        {
            System.out.println("the temperature is out of range.");
        }
    }

    void setHeatingLevel(String level)
    {
        if(level=="Low"||level=="Medium"||level=="High")
        {
            heatingLevel=level;
        }
        else
        {
            System.out.println("Invalid heating level! Please choose one of: Low, Medium, High.");
        }
    }

    void displayStatus()
    {
        System.out.println("modelName : "+modelName);
        System.out.println("isOn : "+isOn);
        System.out.println("temperature : "+temperature);
        System.out.println("heatingLevel : "+heatingLevel);
    }

    public static void main(String[] args)
    {
        RoomHeaterTester o1=new RoomHeaterTester();
        o1.displayStatus();
        o1.setHeatingLevel("Lll");
        RoomHeaterTester o2=new RoomHeaterTester("ProHeat2000",false,24,"High");

        o2.turnOn();
        o2.setTemperature(20);
        o2.displayStatus();

        
    }
}