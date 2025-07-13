package com.example.demo.sbeans;

import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

@Scope("singleton")
@Component("cc")
public class CreditCardProcessor implements PaymentProcessor {

	@Override
	public void processPayment(double amount) {
		System.out.println("CreditCardProcessor.processPayment()");
	}

}
