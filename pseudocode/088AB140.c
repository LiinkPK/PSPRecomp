/* Entry 0x088AB140 | file offset 0x000A8118 | FUN_088ab140 | bytes 304 */

void FUN_088ab140(int param_1,int *param_2,int param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  iVar5 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x14) + iVar4;
      if (*(int *)(iVar3 + 0x34) == 0) {
        if ((*param_4 == 0) || ((*(uint *)(iVar3 + 0x38) & *param_4) != 0)) {
          iVar9 = 0;
          puVar6 = (uint *)(iVar3 + 0x3c);
          puVar8 = param_4;
          do {
            puVar8 = puVar8 + 1;
            if ((*puVar8 != 0) && ((*puVar6 & *puVar8) == 0)) {
              bVar1 = false;
              goto LAB_088ab234;
            }
            iVar9 = iVar9 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar9 < 2);
          if (param_4[3] == 0) {
            uVar7 = *(uint *)(iVar3 + 0x48);
          }
          else {
            if ((*(uint *)(iVar3 + 0x44) & param_4[3]) == 0) {
              bVar1 = false;
              goto LAB_088ab234;
            }
            uVar7 = *(uint *)(iVar3 + 0x48);
          }
          if (uVar7 == param_4[4]) {
            bVar1 = true;
            if (*(uint *)(iVar3 + 0x50) != param_4[6]) {
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
LAB_088ab234:
      if (bVar1) {
        *param_2 = iVar5;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 1;
        if (iVar2 == param_3) {
          return;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x104;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  return;
}

