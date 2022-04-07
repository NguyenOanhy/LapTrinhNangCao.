void reverse(char *s) {
    char* s1;
    s1=new char[50];
    int j=0;
    for (int i=strlen(s)-1; i>=0; i--){
        s1[j]=s[i];
        j++;
    }
    for (int i=0; i<j; i++) s[i]=s1[i];
}
