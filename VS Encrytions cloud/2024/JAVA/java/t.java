class one { 
    public void t1() 
    { 
        System.out.println("first"); 
    } 
} 
class two { 
    one t = new one(); 
    public void t2() 
    { 
        t.understand(); 
    } 
} 