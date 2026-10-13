/* Entry 0x088A7B70 | file offset 0x000A4B48 | FUN_088a7b70 | bytes 412 */

void FUN_088a7b70(float param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_30;
  float local_2c;
  float local_28;
  
  FUN_088a7384(&local_30,param_2);
  local_48 = local_30;
  local_44 = local_2c;
  local_40 = local_28;
  local_60 = local_30;
  local_54 = local_30 - *(float *)(param_2 + 0x1f0);
  local_50 = local_2c - *(float *)(param_2 + 500);
  local_5c = local_2c;
  local_4c = local_28 - *(float *)(param_2 + 0x1f8);
  local_58 = local_28;
  iVar4 = 0;
  piVar3 = (int *)(param_2 + 0x1fc);
  do {
    pfVar1 = (float *)*piVar3;
    if (pfVar1 != (float *)0x0) {
      if ((*(uint *)(piVar3[1] + 0x10) & 8) == 0) {
        *pfVar1 = local_30;
        pfVar1[1] = local_2c;
        pfVar1[2] = local_28;
        pfVar1[0xd] = (float)((uint)pfVar1[0xd] & 0xfffffdff);
        iVar2 = *piVar3;
        *(float *)(iVar2 + 0xc) = local_54;
        *(float *)(iVar2 + 0x10) = local_50;
        *(float *)(iVar2 + 0x14) = local_4c;
        *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) & 0xfffffdff;
        pfVar1 = (float *)*piVar3;
      }
      pfVar1[0xe] = param_1;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar4 < 0x10);
  FUN_089a34c0(param_2 + 0x1f0,&local_60);
  return;
}

