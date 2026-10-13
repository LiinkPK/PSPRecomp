/* Entry 0x08883D0C | file offset 0x00080CE4 | FUN_08883d0c | bytes 132 */

int FUN_08883d0c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x70);
    }
    if (iVar2 == 0) break;
    iVar1 = FUN_0893585c(param_2,iVar2);
    if (iVar1 == 0) {
      return iVar2;
    }
  }
  return 0;
}

