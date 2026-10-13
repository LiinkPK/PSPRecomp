/* Entry 0x0895B244 | file offset 0x0015821C | FUN_0895b244 | bytes 392 */

undefined4 FUN_0895b244(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_10 = *(int *)(param_2 + 0xac);
  local_14 = (float)*(int *)(local_10 + 0x14) * 0.25;
  local_1c = 200;
  local_18 = ((float)*(int *)(local_10 + 0x14) / (float)*(int *)(local_10 + 0x24)) * 0.25;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_08971134(*(undefined4 *)(param_2 + 0x18),400,&local_20,1);
  if (iVar1 != 0) {
    local_c = local_c + (uint)*(ushort *)(*(int *)(*(int *)(local_c + 0x88) + 0x1c8) + 0x18) * 4;
    *(int *)(local_c + 0xb4) = *(int *)(local_c + 0xb4) + local_20;
  }
  *local_8 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_8[1] = iVar1 + local_1c;
    local_8[2] = 0;
    iVar1 = 0;
    do {
      fVar10 = 0.0;
      pfVar5 = (float *)*local_8;
      fVar9 = 0.0;
      iVar4 = 0;
      do {
        *pfVar5 = fVar9;
        pfVar5[1] = 0.0;
        pfVar5[2] = fVar10;
        pfVar5[3] = 0.0;
        pfVar5[4] = 128.0;
        pfVar5[5] = fVar9;
        pfVar6 = pfVar5 + 6;
        pfVar7 = pfVar5 + 7;
        pfVar8 = pfVar5 + 8;
        pfVar3 = pfVar5 + 9;
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 10;
        fVar9 = fVar9 + local_18;
        *pfVar6 = (float)*(int *)(local_10 + 0x28) / (float)*(int *)(local_10 + 0x28);
        *pfVar7 = fVar10;
        fVar10 = fVar10 + local_14;
        *pfVar8 = (float)*(int *)(local_10 + 0x18);
        *pfVar3 = 128.0;
      } while (iVar4 < 5);
      iVar1 = iVar1 + 1;
      local_8 = local_8 + 1;
    } while (iVar1 < 2);
    uVar2 = 1;
  }
  return uVar2;
}

