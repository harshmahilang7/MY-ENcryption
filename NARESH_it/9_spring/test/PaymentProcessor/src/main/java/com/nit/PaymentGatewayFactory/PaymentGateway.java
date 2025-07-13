package com.nit.PaymentGatewayFactory;

import org.springframework.context.annotation.Bean;
import org.springframework.stereotype.Component;

@Component
public class PaymentGateway {
   @Bean("pay")
	public void executeTransaction() {
		System.out.println("executeTransaction");
		
	}

}
