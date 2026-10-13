/* Entry 0x0884FE10 | file offset 0x0004CDE8 | FUN_0884fe10 | bytes 968 */

void FUN_0884fe10(int *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_60 [7];
  char local_59;
  undefined1 local_54;
  char local_53;
  short local_50;
  char local_4d;
  
  if ((char)param_1[7] == '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
    uVar3 = FUN_08837f14(*(undefined4 *)(*param_1 + 0x200),param_2);
    iVar4 = FUN_08837f14(param_1[2],(int)*(short *)(param_1[1] + 0xc + param_3 * 2));
    FUN_08935524(auStack_60,uVar3,0x44);
    local_54 = *(undefined1 *)(iVar4 + 0xc);
    iVar5 = param_1[1];
    sVar1 = *(short *)(iVar4 + 0x10);
    if (sVar1 < 0) {
      iVar7 = param_1[2];
      local_53 = local_53 + *(char *)(iVar4 + 0xd);
      local_50 = sVar1;
    }
    else {
      fVar11 = (float)(int)local_50;
      if ((*(ushort *)(iVar5 + 6) & 2) == 0) {
        iVar7 = param_1[2];
        local_50 = (short)(int)(fVar11 * ((float)(int)sVar1 / 100.0));
        local_53 = local_53 + *(char *)(iVar4 + 0xd);
      }
      else {
        DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
        pbVar6 = (byte *)(iVar5 + 0x38);
        iVar7 = param_1[2];
        iVar5 = param_1[1];
        if ((DAT_09af84d0 >> 0x10 & 0x7fffU) % 0x65 < (uint)*pbVar6) {
          local_50 = (short)(int)(fVar11 * ((float)*(byte *)(iVar5 + 0x39) / 100.0));
          local_53 = local_53 + *(char *)(iVar4 + 0xd);
        }
        else {
          local_50 = (short)(int)(fVar11 * ((float)*(byte *)(iVar5 + 0x3a) / 100.0));
          local_54 = *(undefined1 *)(iVar5 + 0x3b);
          local_53 = local_53 + *(char *)(iVar4 + 0xd);
        }
      }
    }
    if ((*(ushort *)(iVar5 + 6) & 1) != 0) {
      local_50 = -3;
    }
    if ((*(ushort *)(iVar5 + 6) & 4) != 0) {
      iVar7 = *(int *)(iVar7 + 0x5d4);
      bVar2 = false;
      if (iVar7 != 0) {
        iVar7 = (**(code **)(*(int *)(iVar7 + 0x544) + 0x134))
                          (iVar7 + *(short *)(*(int *)(iVar7 + 0x544) + 0x130));
        iVar5 = param_1[1];
        if ((iVar7 != 0) && ((*(uint *)(iVar7 + 900) & 0x800000) != 0)) {
          bVar2 = true;
        }
      }
      DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
      pbVar6 = (byte *)(iVar5 + 0x38);
      iVar7 = param_1[2];
      iVar5 = param_1[1];
      if (((DAT_09af84d0 >> 0x10 & 0x7fffU) % 0x65 < (uint)*pbVar6) && (!bVar2)) {
        local_50 = -1;
      }
    }
    iVar8 = (int)local_50;
    if ((*(ushort *)(iVar5 + 6) & 8) != 0) {
      iVar9 = *(int *)(*(int *)(*param_1 + 0x200) + 0x52c);
      fVar11 = (float)*(byte *)(iVar5 + 0x38) / 100.0;
      iVar10 = 0;
      fVar12 = (float)*(int *)(iVar9 + 8) / (float)*(int *)(iVar9 + 0xc);
      fVar13 = 1.0;
      if (0 < (int)(fVar12 / fVar11)) {
        do {
          iVar10 = iVar10 + 1;
          fVar13 = ((float)*(byte *)(iVar5 + 0x39) / 100.0) * fVar13;
        } while (iVar10 < (int)(fVar12 / fVar11));
      }
      local_50 = (short)(int)((float)iVar8 * fVar13);
      iVar8 = (int)local_50;
    }
    local_4d = local_4d + *(char *)(iVar4 + 0x13);
    local_59 = local_59 + *(char *)(iVar4 + 7);
    if (iVar8 == 0) {
      local_50 = 1;
    }
    FUN_08850ff4(iVar7,auStack_60);
  }
  return;
}

