/* Entry 0x088AADAC | file offset 0x000A7D84 | FUN_088aadac | bytes 348 */

int FUN_088aadac(int param_1,int *param_2,int param_3,int *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x14) + iVar4;
      if (*(int *)(iVar3 + 0x34) == 2) {
        bVar1 = true;
        if (*(int *)(iVar3 + 100) != *param_4) {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        iVar2 = FUN_088aa4e0(param_1,iVar3,param_5,param_6,param_7);
        *param_2 = iVar2;
        if (iVar2 != 0) {
          if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(iVar3 + 0x28) < *(int *)(param_1 + 0x2c))
             ) {
            *(int *)(iVar2 + 0xc4) = *(int *)(param_1 + 0x28) + *(int *)(iVar3 + 0x28) * 0x140;
          }
          iVar6 = iVar6 + 1;
          param_2 = param_2 + 1;
          if (iVar6 == param_3) {
            return iVar6;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x104;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  return iVar6;
}

