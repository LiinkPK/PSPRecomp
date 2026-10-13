/* Entry 0x0881A594 | file offset 0x0001756C | FUN_0881a594 | bytes 280 */

void FUN_0881a594(int param_1,undefined4 param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar3);
      iVar1 = FUN_0881a934(param_1,iVar4,param_2);
      if (iVar1 == 1) {
        FUN_0881a6ac(param_1,iVar4 + 8,param_3 == '\0',param_4,0);
      }
      else {
        iVar1 = FUN_0881a934(param_1,iVar4 + 8,param_2);
        if (iVar1 == 1) {
          FUN_0881a6ac(param_1,iVar4,param_3 == '\0',param_4,0);
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return;
}

