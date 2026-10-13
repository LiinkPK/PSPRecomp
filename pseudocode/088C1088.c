/* Entry 0x088C1088 | file offset 0x000BE060 | FUN_088c1088 | bytes 428 */

int FUN_088c1088(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 local_70 [4];
  int local_60 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int *local_2c;
  
  puVar6 = local_70;
  puVar7 = local_70;
  local_30 = param_2;
  local_2c = param_1;
  local_70[0] = param_3;
  local_70[1] = param_4;
  local_70[2] = param_5;
  local_70[3] = param_6;
  iVar5 = 0;
  iVar10 = 0;
  iVar9 = 0;
  do {
    FUN_088b97e8(&local_38,*puVar7);
    local_40 = local_38;
    local_3c = local_34;
    iVar2 = FUN_088c1678(&local_40);
    if (iVar2 != -1) {
      iVar3 = 0;
      bVar1 = false;
      if (0 < iVar5) {
        piVar4 = local_60;
        do {
          if (*piVar4 == iVar2) {
            bVar1 = true;
            piVar4[1] = piVar4[1] + 1;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar3 < iVar5);
      }
      if (!bVar1) {
        *(int *)((int)puVar6 + 0x10) = iVar2;
        *(undefined4 *)((int)puVar6 + 0x14) = 1;
        iVar5 = iVar5 + 1;
        puVar6 = (undefined4 *)((int)puVar6 + 8);
      }
    }
    iVar9 = iVar9 + 1;
    puVar7 = puVar7 + 1;
    if (3 < iVar9) {
      iVar9 = 0;
      if (0 < iVar5) {
        piVar8 = local_60;
        piVar4 = local_2c;
        do {
          iVar2 = FUN_088c0fe8(*piVar8);
          if ((int)*(short *)(iVar2 + 2) <= piVar8[1]) {
            if (local_30 <= iVar10) {
              return iVar10;
            }
            *piVar4 = iVar2;
            iVar10 = iVar10 + 1;
            piVar4 = piVar4 + 1;
          }
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 2;
        } while (iVar9 < iVar5);
      }
      return iVar10;
    }
  } while( true );
}

