/* Entry 0x0884BB00 | file offset 0x00048AD8 | FUN_0884bb00 | bytes 72 */

void FUN_0884bb00(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < param_2[1]) {
    do {
      if (*(int *)(*param_2 + iVar1 + 0x14) == param_4) {
        *(undefined4 *)(*param_2 + iVar1 + 4) = param_1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xe0;
    } while (iVar2 < param_2[1]);
  }
  return;
}

