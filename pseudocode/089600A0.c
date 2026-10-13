/* Entry 0x089600A0 | file offset 0x0015D078 | FUN_089600a0 | bytes 184 */

void FUN_089600a0(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *param_1) {
    iVar1 = 0;
    do {
      if (*(char *)(param_1[4] + iVar1 + 0x58) == '\0') {
        if (param_1[1] < iVar3) {
          return;
        }
        FUN_0898e120(param_1[4] + iVar1,param_2,param_3);
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x6c;
    } while (iVar2 < *param_1);
  }
  return;
}

