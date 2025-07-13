package nit.example.i8n;



import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.support.ResourceBundleMessageSource;

@Configuration
public class AppConfig 
{
	@Bean("messageSource")
	public ResourceBundleMessageSource messageSource() {
	ResourceBundleMessageSource rs= new ResourceBundleMessageSource();
	rs.setBasename("i18n/messages");
	 return rs;
	}

}
