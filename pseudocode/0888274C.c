/* Entry 0x0888274C | file offset 0x0007F724 | FUN_0888274c | bytes 68 */

undefined4 FUN_0888274c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 4);
    }
    else {
      piVar1 = (int *)piVar1[0xd];
    }
    if (piVar1 == (int *)0x0) break;
    if (*piVar1 == param_2) {
      return 1;
    }
  }
  return 0;
}

