import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner scan = new Scanner(System.in);
	    int n = scan.nextInt();
	    int m = scan.nextInt();
	    String w = scan.next();
	    char string[] = new char[m+1];
	    for(int i = 0;i<m;i++){
	        string[i] = w.charAt(i);
	    }
	    char x[] = new char[n*2+1];
	    for(int i = 0; i<n*2+1;i+=2){
	        x[i] = 'I';
	    }
	    for(int i = 1; i<n*2+1;i+=2){
	        x[i] = 'O';
	    }
	    int count = 0;
	    for(int i = 0; i<m;i++){
	        int jud = 0;
	        for(int j = 0; j<n*2+1;j++){
	            if(string[i+j]!=x[j]){
	                jud++;
	                break;
	            }
	        }
	        if(jud == 0){
	            count++;
	        }
	    }
	    System.out.print(count);
	}
}