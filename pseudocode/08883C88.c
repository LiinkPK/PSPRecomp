/* Entry 0x08883C88 | file offset 0x00080C60 | FUN_08883c88 | bytes 132 */

int FUN_08883c88(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x6c);
    }
    if (iVar2 == 0) break;
    iVar1 = FUN_0893585c(param_2,iVar2);
    if (iVar1 == 0) {
      return iVar2;
    }
  }
  return 0;
}

