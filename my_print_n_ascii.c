void print_char(char c);

void my_print_n_ascii(int howMany) {
    for (int i = 110; i < 128; ++i){
        print_char (i);
    }
    return; 
}
int main (void)
{
    my_print_n_ascii(5);
    return 0;
}