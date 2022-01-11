package src.main.java.br.ads;

public class Array {

    public static void main(String[] args) {
        /*
        The [] operator is the sign to the compiler we’re naming an array object and not an ordinary variable.
         */

        int[] intArray;             // defines a reference to an array

        intArray = new int[100];    // creates the array, and

        // sets intArray to refer to it

        int arrayLength = intArray.length;   // find array size

        // acessing array

        int temp = intArray[3];  // get contents of fourth element of array

        intArray[7] = 66;    // insert 66 into the eighth cell

        System.out.println(temp);

        /*
        Unless you specify otherwise, an array of integers is automatically initialized to 0 when it’s created.
         */

        /*
        Object array:
        autoData[] carArray = new autoData[4000];
        Until the array elements are given explicit values, they contain the special null object.
         If you attempt to access an array element that contains null, you’ll get the runtime error Null Pointer Assignment.
         */


        // The numbers within the curly brackets are called the initialization list. The size of the array is determined by the number of values in this list.
        int[] intArray2 = { 0, 3, 6, 9, 12, 15, 18, 21, 24, 27 };

        long[] arr;                  // reference to array

        arr = new long[100];         // make array

        int nElems = 0;              // number of items

        int j;                       // loop counter

        long searchKey;              // key of item to search for

        //--------------------------------------------------------------

        arr[0] = 77;                 // insert 10 items

        arr[1] = 99;

        arr[2] = 44;

        arr[3] = 55;

        arr[4] = 22;

        arr[5] = 88;

        arr[6] = 11;

        arr[7] = 00;

        arr[8] = 66;

        arr[9] = 33;

        nElems = 10;                 // now 10 items in array

        //--------------------------------------------------------------

        for(j=0; j<nElems; j++)      // display items

            System.out.print(arr[j] + " ");

        System.out.println("");

        //--------------------------------------------------------------

        searchKey = 66;              // find item with key 66

        for(j=0; j<nElems; j++)          // for each element,

            if(arr[j] == searchKey)       // found item?

                break;                     // yes, exit before end

        if(j == nElems)                  // at the end?

            System.out.println("Can't find " + searchKey); // yes

        else

            System.out.println("Found " + searchKey);      // no

        //--------------------------------------------------------------

        searchKey = 55;              // delete item with key 55

        for(j=0; j<nElems; j++)           // look for it

            if(arr[j] == searchKey)

                break;

        for(int k=j; k<nElems-1; k++)       // move higher ones down

            arr[k] = arr[k+1];

        nElems--;                         // decrement size

        //--------------------------------------------------------------

        for(j=0; j<nElems; j++)      // display items

            System.out.print( arr[j] + " ");

        System.out.println("");
    }
}
