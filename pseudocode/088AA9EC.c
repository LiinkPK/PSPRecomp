/* Entry 0x088AA9EC | file offset 0x000A79C4 | FUN_088aa9ec | bytes 500 */

int FUN_088aa9ec(int param_1,int *param_2,int param_3,uint *param_4,undefined4 param_5,
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
      if (*(int *)(iVar6 + 0x34) == 0) {
        if ((*param_4 == 0) || ((*(uint *)(iVar6 + 0x38) & *param_4) != 0)) {
          iVar2 = 0;
          puVar5 = (uint *)(iVar6 + 0x3c);
          puVar4 = param_4;
          do {
            puVar4 = puVar4 + 1;
            if ((*puVar4 != 0) && ((*puVar5 & *puVar4) == 0)) {
              bVar1 = false;
              goto LAB_088aab20;
            }
            iVar2 = iVar2 + 1;
            puVar5 = puVar5 + 1;
          } while (iVar2 < 2);
          if (param_4[3] == 0) {
            uVar3 = *(uint *)(iVar6 + 0x48);
          }
          else {
            if ((*(uint *)(iVar6 + 0x44) & param_4[3]) == 0) {
              bVar1 = false;
              goto LAB_088aab20;
            }
            uVar3 = *(uint *)(iVar6 + 0x48);
          }
          if (uVar3 == param_4[4]) {
            bVar1 = true;
            if (*(uint *)(iVar6 + 0x50) != param_4[6]) {
              bVar1 = false;
            }
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
LAB_088aab20:
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

