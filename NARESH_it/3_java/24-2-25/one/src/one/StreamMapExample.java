package one;

import java.util.*;
import java.util.stream.*;

public class StreamMapExample {
    public static void main(String[] args) {
        Map<String, Integer> map = new HashMap<>();
        map.put("Apple", 10);
        map.put("Banana", 5);
        map.put("Orange", 7);

        // Convert map values (increase count by 2)
        Map<String, Integer> updatedMap = map.entrySet().stream()
            .collect(Collectors.toMap(
                Map.Entry::getKey, 
                entry -> entry.getValue() + 2
            ));

        System.out.println(updatedMap); // {Apple=12, Banana=7, Orange=9}
    }
}