package first_Java_project;

import java.nio.channels.NonWritableChannelException;
import java.util.*;

public class Solution {
	public int[] solution(int []arr) {
		ArrayList<Integer> answer = new ArrayList<Integer>();
		int val = -1;
		for(int i=0; i<arr.length; i++) {
            if(arr[i] != val) {
                answer.add(arr[i]);
                val = arr[i];
            }
        }
        return answer.stream().mapToInt(i->i).toArray();
	}
	public static void main(String[] args) {
	}
}
