int checkBranchCode(char userID[15])
{
    char branchCode[6];
    for(int i=4;i<9;i++){
        branchCode[i-4]=userID[i];
    }
    branchCode[5]='\0';
    if(strcmp(branchCode,currentValidID.branch)==0)
        return 1;
    else
        return 0;
}
