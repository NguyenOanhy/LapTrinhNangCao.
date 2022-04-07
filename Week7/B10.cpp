void rFilter(char *s) {
    for (int i=strlen(s)-1; i>=0; i--)
      if (!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))) s[i]='_';
      else break;
}
