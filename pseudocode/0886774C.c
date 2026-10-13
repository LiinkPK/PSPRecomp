/* Entry 0x0886774C | file offset 0x00064724 | FUN_0886774c | bytes 52 */

int * FUN_0886774c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = (int *)piVar1[4];
  }
  return piVar1;
}

