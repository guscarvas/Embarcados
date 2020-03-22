int main(){
    int array[9] = {0,20,20,20,20,20,20,20,20};
    change(array);
    printf("%d", array[3]);
    return 0;
};
int change(int arrayepa[9]){
    arrayepa[3]= arrayepa[3]+1;
    return 0;
};
