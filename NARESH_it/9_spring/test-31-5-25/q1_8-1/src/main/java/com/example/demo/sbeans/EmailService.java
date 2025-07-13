package com.example.demo.sbeans;

import org.springframework.stereotype.Component;

@Component("eS")
public class EmailService implements MessageService {

	@Override
	public void sendMessage() {
		System.out.println("EmailService.sendMessage()");
	}

}
