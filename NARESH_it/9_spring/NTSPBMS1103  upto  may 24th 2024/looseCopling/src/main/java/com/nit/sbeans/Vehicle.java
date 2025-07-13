package com.nit.sbeans;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.stereotype.Component;

@Component("v") 
public class Vehicle {
    
    @Autowired
    @Qualifier("motor")
    private IEngine ee;

    public void getdetail() {
        ee.start();
        ee.stop();
    }
}

