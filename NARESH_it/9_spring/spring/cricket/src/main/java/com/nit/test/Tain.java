package com.nit.test;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import com.nit.cfgd.AppConfig;
import com.nit.sbeans.Player;

public class Tain 
{
	 public static void main(String[] args)
	 {
		 AnnotationConfigApplicationContext ctx= new AnnotationConfigApplicationContext(AppConfig.class);
		 Player bean = ctx.getBean(Player.class);
		 System.out.println(bean.getPlayerId());
		 System.out.println(bean.getPlayerName());
		 System.out.println(bean.getTeamName());
		 System.out.println(bean.getYearsNumber());
		 ctx.close();
	}

}
