/* Entry 0x08967C98 | file offset 0x00164C70 | FUN_08967c98 | bytes 820 */

void FUN_08967c98(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  fVar8 = (float)param_3[8];
  fVar7 = -(float)param_3[9];
  fVar6 = -(float)param_3[10];
  local_64 = 0x3f800000;
  uVar5 = (uint)*(short *)(param_3 + 3);
  local_70 = *param_3;
  local_6c = -(float)param_3[1];
  local_68 = -(float)param_3[2];
  FUN_08967b64(param_1,param_2,&local_60,&local_70);
  uVar2 = 0;
  if (uVar5 != 0) {
    iVar1 = 0;
    do {
      pfVar3 = (float *)(*param_1 + iVar1);
      *pfVar3 = local_60;
      pfVar3[1] = local_5c;
      pfVar3[2] = local_58;
      pfVar3[3] = local_54;
      iVar4 = *param_1 + iVar1;
      *(float *)(iVar4 + 0x10) = fVar8;
      *(float *)(iVar4 + 0x14) = fVar7;
      *(float *)(iVar4 + 0x18) = fVar6;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      local_60 = local_60 + fVar8;
      local_5c = local_5c + fVar7;
      local_58 = local_58 + fVar6;
      local_54 = local_54 + 0.0;
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x20;
      local_40 = local_60;
      local_3c = local_5c;
      local_38 = local_58;
      local_34 = local_54;
    } while (uVar2 < uVar5);
  }
  local_70 = param_3[4];
  local_6c = -(float)param_3[5];
  local_68 = -(float)param_3[6];
  FUN_08967b64(param_1,param_2,&local_50,&local_70);
  uVar2 = 0;
  iVar1 = 0;
  if (uVar5 != 0) {
    do {
      pfVar3 = (float *)(param_1[1] + iVar1);
      *pfVar3 = local_50;
      pfVar3[1] = local_4c;
      pfVar3[2] = local_48;
      pfVar3[3] = local_44;
      iVar4 = param_1[1] + iVar1;
      *(float *)(iVar4 + 0x10) = fVar8;
      *(float *)(iVar4 + 0x14) = fVar7;
      *(float *)(iVar4 + 0x18) = fVar6;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      local_50 = local_50 + fVar8;
      local_4c = local_4c + fVar7;
      local_48 = local_48 + fVar6;
      local_44 = local_44 + 0.0;
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (uVar2 < uVar5);
  }
  return;
}

