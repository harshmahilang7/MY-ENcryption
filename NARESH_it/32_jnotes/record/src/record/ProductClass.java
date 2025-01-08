package record;

import java.util.Objects;
import java.util.Scanner;

public class ProductClass 
{
	private Integer productId;
	private String productName;

	public ProductClass(Integer productId, String productName)
	{
		super();
		this.productId = productId;
		this.productName = productName;
	}

	@Override
	public String toString() {
		return "ProductClass [productId=" + productId + ", productName=" + productName + "]";
	}

	public Integer getProductId() {
		return productId;
	}

	public void setProductId(Integer productId) {
		this.productId = productId;
	}

	public String getProductName() {
		return productName;
	}

	public void setProductName(String productName) {
		this.productName = productName;
	}

	@Override
	public int hashCode() {
		return Objects.hash(productId, productName);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		ProductClass other = (ProductClass) obj;
		return Objects.equals(productId, other.productId) && Objects.equals(productName, other.productName);
	}
}