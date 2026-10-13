/* Entry 0x088AA844 | file offset 0x000A781C | FUN_088aa844 | bytes 424 */

int FUN_088aa844(int param_1,int *param_2,int param_3,int *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = *param_4;
  iVar2 = param_4[1];
  iVar4 = param_4[2];
  iVar8 = 0;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar7 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x14) + iVar7;
      bVar1 = false;
      if ((*(uint *)(iVar6 + 0x7c) & 0x80) == 0) {
        iVar3 = FUN_08935a0c(iVar5 + 4,iVar6 + 0x88,iVar4);
        bVar1 = false;
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*(int *)(iVar5 + 0x2c) + 0x34))
                            (iVar5 + *(short *)(*(int *)(iVar5 + 0x2c) + 0x30),iVar6 + 200);
          bVar1 = false;
          if (iVar3 == iVar2) {
            bVar1 = true;
          }
        }
      }
      if (bVar1) {
        iVar3 = FUN_088aa4e0(param_1,iVar6,param_5,param_6,param_7);
        *param_2 = iVar3;
        if (iVar3 != 0) {
          if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(iVar6 + 0x28) < *(int *)(param_1 + 0x2c))
             ) {
            *(int *)(iVar3 + 0xc4) = *(int *)(param_1 + 0x28) + *(int *)(iVar6 + 0x28) * 0x140;
          }
          iVar9 = iVar9 + 1;
          param_2 = param_2 + 1;
          if (iVar9 == param_3) {
            return iVar9;
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x104;
    } while (iVar8 < *(int *)(param_1 + 0x18));
  }
  return iVar9;
}

