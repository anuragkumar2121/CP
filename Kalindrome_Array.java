import java.util.Scanner;

public class Kalindrome_Array {
    public static boolean kalindrome(){
        int t;
        Scanner scan1 = new Scanner(System.in);
        t = scan1.nextInt();
        while(t-->0){
            int size;
            size = scan1.nextInt();

            int[] arr = new int[size];
            for(int i=0; i < size; i++){
                arr[i] = scan1.nextInt();
            }
            if(size == 2){
                System.out.println("YES");
                continue;
            }
            int c1=0, c2=0;
            boolean result1 = true, result2 = true;
            int i=0, j=size-1;
            boolean sure=false;
            while(j>i){
                if(arr[i]==arr[j]){
                    i++;
                    j--;
                }else{
                    c1 = arr[i];
                    c2 = arr[j];
                    break;
                }
                if(i>=j){
                    sure = true;
                    break;
                }
            }
            if(sure){
                System.out.println("YES");
                continue;
            }
            i=0;
            j=size-1;
            while(j>i){
                if(arr[i]==arr[j]){
                    i++;
                    j--;
                    continue;
                }
                if(arr[i] != arr[j]){
                if(j == i+1 && (arr[i] != c1 && arr[j] != c1)){
                        result1 = false;
                        break;
                    }else if(arr[i]==c1){
                        i++;
                        continue;
                    }else if(arr[j] ==c1){
                        j--;
                        continue;
                    }else{
                        result1 = false;
                        break;
                    }
                }
            }
            i=0;
            j=size-1;
            while(j>i){
                if(arr[i]==arr[j]){
                    i++;
                    j--;
                    continue;
                }
                if(arr[i] != arr[j]){
                    if(j == i+1 && (arr[i] != c1 && arr[j] != c1)){
                        result2 = false;
                        break;
                    }else if(arr[i]==c2){
                        i++;
                        continue;
                    }else if(arr[j] ==c2){
                        j--;
                        continue;
                    }else{
                        result2 = false;
                        break;
                    }
                }
            }

            if(result1 || result2){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        return true;
    }

    public static void main(String[] args) {
        kalindrome();
    }
}
