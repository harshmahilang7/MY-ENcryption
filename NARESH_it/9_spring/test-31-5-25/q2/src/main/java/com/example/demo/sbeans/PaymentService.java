package com.example.demo.sbeans;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;

public class PaymentService {
	
	@Autowired
	@Qualifier("cc")
	private PaymentProcessor p;
	
	

}
