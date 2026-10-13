/* Entry 0x088AA5B8 | file offset 0x000A7590 | FUN_088aa5b8 | bytes 320 */

int FUN_088aa5b8(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x14) + iVar3;
      if (*(int *)(iVar2 + 0x24) == param_4) {
        iVar1 = FUN_088aa4e0(param_1,iVar2,param_5,param_6,param_7);
        *param_2 = iVar1;
        if (iVar1 != 0) {
          if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(iVar2 + 0x28) < *(int *)(param_1 + 0x2c))
             ) {
            *(int *)(iVar1 + 0xc4) = *(int *)(param_1 + 0x28) + *(int *)(iVar2 + 0x28) * 0x140;
          }
          iVar5 = iVar5 + 1;
          param_2 = param_2 + 1;
          if (iVar5 == param_3) {
            return iVar5;
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x104;
    } while (iVar4 < *(int *)(param_1 + 0x18));
  }
  return iVar5;
}

