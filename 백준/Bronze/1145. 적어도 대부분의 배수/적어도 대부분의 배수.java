import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[5];
		int min = 100;
		for(int i = 0; i<5;i++){
		    arr[i] = sc.nextInt();
		    if(min>arr[i])
		        min = arr[i];
		}
		while (true){
		    int count = 0;
		    for(int i = 0; i<5;i++){
                if(min % arr[i]==0){
                    count++;
                }		        
		    }
		    if(count >= 3){
		        break;
		    }
		    min++;
		}
		System.out.print(min);
	}
}