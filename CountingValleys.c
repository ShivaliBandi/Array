int countingValleys(int steps, char* path) {
    int level=0,icount=0;
    for(int icnt=0;icnt<steps;icnt++)
    {
        if(path[icnt]=='U')level++;
        else level--;
        if(level==0 && path[icnt]=='U')icount++;
        
    }
    return icount;
}
//Hackerrank counting Valleys Question
