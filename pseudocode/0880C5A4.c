/* Entry 0x0880C5A4 | file offset 0x0000957C | FUN_0880c5a4 | bytes 660 */

void FUN_0880c5a4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_120 [16];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_40;
  undefined4 local_3c;
  int local_38;
  
  iVar2 = *(int *)(param_2 + 0x158);
  local_40 = param_4;
  fVar7 = (float)FUN_08838300(param_4);
  FUN_089a3efc(auStack_c0,param_4 + 0x330);
  iVar6 = 0;
  if ('\0' < *(char *)(param_2 + 0x153)) {
    puVar5 = (undefined4 *)(param_2 + 0x110);
    iVar4 = param_2;
    local_3c = param_3;
    local_38 = param_1;
    do {
      pfVar3 = (float *)(*(int *)(local_38 + 0x2c) + (uint)*(byte *)(iVar2 + 0x23) * 8);
      uVar1 = FUN_089b0e78(local_3c,(int)*(short *)(iVar2 + 0x20));
      uVar1 = FUN_089b1224(uVar1);
      if (*(char *)(iVar2 + 0x22) == '\0') {
        FUN_089a3890(auStack_120);
        local_110 = *puVar5;
      }
      else {
        if (**(int **)(local_40 + 0x394) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(**(int **)(local_40 + 0x394) + *(short *)(iVar2 + 0x20) * 4);
        }
        FUN_089a383c(uVar9,0,0,0x3f800000,auStack_120);
        local_110 = *puVar5;
      }
      local_10c = puVar5[1];
      local_108 = puVar5[2];
      local_104 = 0;
      FUN_089a38a8(auStack_120,auStack_120,&local_110);
      FUN_089a3fb8(auStack_100,auStack_c0,uVar1);
      FUN_089a3f40(&local_110,auStack_100,auStack_120);
      FUN_089a38e0(auStack_120,&local_110,param_2);
      fVar8 = (float)FUN_089a3bf8(auStack_120);
      if (*(float *)(iVar4 + 0x11c) < fVar8) {
        fVar8 = *pfVar3;
      }
      else {
        fVar8 = pfVar3[1];
      }
      fVar8 = fVar8 * fVar7 * 0.5;
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      FUN_089a3a44(fVar8,&local_60,auStack_120);
      local_70 = local_60;
      local_6c = local_5c;
      local_68 = local_58;
      local_64 = local_54;
      local_80 = local_60;
      local_7c = local_5c;
      local_78 = local_58;
      local_74 = local_54;
      FUN_089a38a8(param_2,param_2,&local_80);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + 4;
      iVar4 = iVar4 + 0x10;
      puVar5 = puVar5 + 4;
    } while (iVar6 < *(char *)(param_2 + 0x153));
  }
  return;
}

