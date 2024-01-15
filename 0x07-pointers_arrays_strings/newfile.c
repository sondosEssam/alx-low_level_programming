int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

//nb = 4 --> printf( 4 + print(3)); ---> printf( 4 + 2 ) , nb =  3 , return val = 3
// nb = 3  --> printf ( 3 + print(2)); ---> printf(3 + 1), nb  =2  , return val =2 ; print(3)   
// nb =2  ---> printf ( 2 + print(1)); --> printf (2 + 0) , nb = 1 , return val 1; print(2)
// nb = 1 ---> printf ( 1 + print(0)) ---> printf(1 -1 ) , nb = 0 ,   return val = 0 ; print(1)
// nb =0 ---> printf ( 0 + print(-1)) ---> printf ( 0+0); nb = -1  , return val = -1 ; print(0)
// nb = -1 ---> return val = (0) print(-1)
// output --> 00246

int main(void)
{
    print(4);
    return (0);
}
