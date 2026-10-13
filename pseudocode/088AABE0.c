/* Entry 0x088AABE0 | file offset 0x000A7BB8 | FUN_088aabe0 | bytes 460 */

int FUN_088aabe0(int param_1,int *param_2,int param_3,uint *param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 0;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar7 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x14) + iVar7;
      if (*(int *)(iVar6 + 0x34) == 1) {
        if (*param_4 == 0) {
          uVar3 = param_4[1];
        }
        else {
          if ((*(uint *)(iVar6 + 0x54) & *param_4) == 0) {
            bVar1 = false;
            goto LAB_088aacec;
          }
          uVar3 = param_4[1];
        }
        if ((uVar3 == 0) || ((*(uint *)(iVar6 + 0x58) & uVar3) != 0)) {
          iVar2 = 0;
          puVar5 = (uint *)(iVar6 + 0x5c);
          puVar4 = param_4 + 2;
          do {
            if ((*puVar4 != 0) && ((*puVar5 & *puVar4) == 0)) {
              bVar1 = false;
              goto LAB_088aacec;
            }
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar2 < 2);
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
LAB_088aacec:
      if (bVar1) {
        iVar2 = FUN_088aa4e0(param_1,iVar6,param_5,param_6,param_7);
        *param_2 = iVar2;
        if (iVar2 != 0) {
          if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(iVar6 + 0x28) < *(int *)(param_1 + 0x2c))
             ) {
            *(int *)(iVar2 + 0xc4) = *(int *)(param_1 + 0x28) + *(int *)(iVar6 + 0x28) * 0x140;
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

