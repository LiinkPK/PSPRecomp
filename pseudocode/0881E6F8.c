/* Entry 0x0881E6F8 | file offset 0x0001B6D0 | FUN_0881e6f8 | bytes 100 */

undefined4 FUN_0881e6f8(char *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  if (*param_1 != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x88)) {
      psVar1 = *(short **)(param_1 + 0x8c);
      do {
        if (*psVar1 == param_2) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        psVar1 = psVar1 + 0x12;
      } while (iVar2 < *(int *)(param_1 + 0x88));
    }
  }
  return 0;
}

