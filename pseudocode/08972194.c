/* Entry 0x08972194 | file offset 0x0016F16C | FUN_08972194 | bytes 812 */

void FUN_08972194(int *param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  
  FUN_089a296c(2);
  iVar10 = *param_1;
  local_30 = 0;
  if (0 < *(int *)(iVar10 + 0x14)) {
    local_34 = 0;
    local_38 = (uint)(param_4 == '\0');
    do {
      piVar11 = (int *)(iVar10 + *(int *)(iVar10 + 0x18) + local_34);
      local_50 = piVar11[3];
      local_4c = piVar11[4];
      local_48 = piVar11[5];
      local_44 = piVar11[6];
      local_40 = piVar11[7];
      local_3c = piVar11[8];
      FUN_089a29c4();
      FUN_089a250c();
      FUN_089a2678(&local_44);
      FUN_089a26c8(&local_50);
      FUN_089a2568();
      FUN_089a001c(piVar11[9],piVar11[10]);
      FUN_089a0f84(piVar11[0xb],piVar11[0xc]);
      iVar10 = piVar11[0xc];
      *(int *)(param_2 + 0x28) = piVar11[0xb];
      *(int *)(param_2 + 0x2c) = iVar10;
      if (piVar11[2] == 0) {
        FUN_089a0cf8(0);
        iVar10 = *piVar11;
      }
      else {
        FUN_089a0cf8(1);
        iVar10 = *piVar11;
      }
      iVar9 = 0;
      iVar8 = 0;
      if (0 < iVar10) {
        do {
          iVar10 = *param_1;
          puVar7 = (undefined4 *)(iVar10 + piVar11[1] + iVar8);
          if (puVar7[3] == -1) {
            FUN_089a03dc(9);
            uVar6 = *puVar7;
            uVar2 = puVar7[1];
            uVar3 = puVar7[4];
            iVar10 = *param_1 + puVar7[5];
          }
          else {
            iVar10 = iVar10 + *(int *)(iVar10 + 0x10) + puVar7[3] * 0x18;
            uVar4 = *(uint *)(iVar10 + 0xc);
            uVar5 = uVar4 == 0x70600 & local_38;
            FUN_089a12a4(uVar4 & 0xff,uVar4 >> 8 & 0xff,uVar4 >> 0x10 & 0xff,
                         *(undefined4 *)(iVar10 + 0x10),*(undefined4 *)(iVar10 + 0x14));
            if (((*(uint *)(iVar10 + 8) & 4) == 0) || (uVar5 != 0)) {
              FUN_089a119c(0);
              uVar4 = *(uint *)(iVar10 + 8);
            }
            else {
              FUN_089a119c(1);
              uVar4 = *(uint *)(iVar10 + 8);
            }
            if ((uVar4 & 8) == 0) {
              FUN_089a03dc(5);
              iVar1 = *param_3;
            }
            else {
              FUN_089a0384(5);
              iVar1 = *param_3;
            }
            (**(code **)(iVar1 + 0xc))((int)param_3 + (int)*(short *)(iVar1 + 8),param_2,iVar10);
            uVar6 = *puVar7;
            uVar2 = puVar7[1];
            uVar3 = puVar7[4];
            iVar10 = *param_1 + puVar7[5];
          }
          FUN_089a0520(uVar6,uVar2,uVar3,0,iVar10);
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 0x18;
        } while (iVar9 < *piVar11);
      }
      FUN_089a2a40();
      FUN_089a2568();
      iVar10 = *param_1;
      local_30 = local_30 + 1;
      local_34 = local_34 + 0x34;
    } while (local_30 < *(int *)(iVar10 + 0x14));
  }
  FUN_089a001c(0x3f800000,0x3f800000);
  FUN_089a0f84(0,0);
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  return;
}

