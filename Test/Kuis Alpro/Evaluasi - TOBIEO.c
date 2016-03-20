#include <stdio.h>
int main(){
    /*
        Create integer variable for
        -   length of the array (the number of chair)
        -   number of instruction
        -   instruction for target chair
        -   element of the array (the target chair)
        -   index and inner_index for looping condition
        -   count variable for counting position of array element (the chair)
     */
    int n, //(banyaknya kursi)
    	m, //banyaknya instruksi 
    	target, //target instruksi
    	element, //elemen array
    	i, //indeks
    	j, //indeks anak
    	count = 0; //hitungan
    char kode;
    scanf("%d", &n);
    int value[n];

   //looping dengan batas, jumlah n dan scan isi dari masukan i
    for (i = 0; i < n; i++){
        scanf("%d", &value[i]);
    }
    scanf("%d", &m);

    //looping dengan patokan banyaknya instruksi
    for (i = 0; i < m; i++){
        scanf(" %c %d", &kode, &target);
        for (j = 0; j < n; j++){
            if (value[j] == target)
            {
                element = j;
            }
        }

        /*
            THE INSERT COMMAND
            Check whether the user asking for inserting a number to the array
         */
        if (kode == 'i'){
            //tambahkan 1 kursi pada array
            n++;

            /*
                Create loop for moving the array element from the end of the
                array
             */
            for (j = n; j > element; j--)
            {
                /*
                    Move the array element one step higher
                    [lower, current_position, higher]
                 */
                value[j] = value[j - 1];
            }

            /*
                "Inserting" a value to the array

                Actually, it's changing array element value after the target
                element.
             */
            value[element + 1] = target * 100;
        }

       //menghapus isi array
        else if (kode == 'd')
        {
            /*
                Create loop to replace the target element value with higher
                element value
             */
            for (j = element; j < n;j++)
            {
                /*
                    Replace the target element with higher element value
                 */
                value[j] = value[j + 1];
            }

            //karena ini kode untuk delete, hapus 1 array n
            n--;
        }

        //kode untuk menghitung array ke berapa
        else if (kode == 'c')
        {
            /*
                Create loop to count the target element from the start of array
             */
            for (j = 0; j <= element; ++j)
            {
                /*
                    Increment the count variable
                 */
                count++;
            }
        }
    }

    /*
        PRINT SECTION
        Create loop for displaying the array corresponding with length of the
        array
     */
    for (i = 0; i < n; i++){
        printf("%d\n", value[i]);
    }

    /*
        Create conditional for checking whether the user asking for counting
        the element position
     */
    if (command == 'c'){
        /*
            Print the element position based on inceremented count variable
         */
        printf("count: %d\n", count);
    }

    return 0;
}