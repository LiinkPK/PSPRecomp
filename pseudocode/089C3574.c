/* Entry 0x089C3574 | file offset 0x001C054C | FUN_089c3574 | bytes 920 */

void FUN_089c3574(int *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_80 [12];
  float local_74;
  undefined4 *local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint local_60;
  int local_50;
  
  local_64 = -*(float *)(DAT_089da27c + 0x30);
  local_68 = -*(float *)(DAT_089da27c + 0x34);
  local_6c = -*(float *)(DAT_089da27c + 0x38);
  pfVar3 = (float *)*param_1;
  local_50 = *(int *)(DAT_09b6f478 + 0x8c) +
             (uint)*(ushort *)
                    (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                    *(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) * 2) + 0x60;
  local_60 = param_1[1];
  fVar7 = *(float *)(param_2 + 0x14);
  uVar5 = 0;
  fVar8 = *(float *)(param_2 + 0x10);
  if (local_60 != 0) {
    local_70 = &DAT_089da360;
    pfVar4 = pfVar3 + 4;
    do {
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *pfVar3 = local_64 +
                (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      pfVar3[1] = local_68 +
                  (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar8 - fVar8);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      uVar2 = DAT_089da120 >> 0x10;
      pfVar3[3] = 1.0;
      pfVar3[2] = local_6c + (((float)(uVar2 & 0x7fff) / 32767.0) * 2.0 * fVar7 - fVar7);
      FUN_089a3868(pfVar4,local_70);
      FUN_089a3868(auStack_80,local_50);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      local_74 = local_74 -
                 ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * *(float *)(param_2 + 0x20);
      FUN_089a4aac(0,0x437f0000,auStack_80,auStack_80);
      FUN_089a3918(auStack_80,&DAT_089da410,auStack_80);
      fVar1 = (float)FUN_089a48cc(auStack_80);
      pfVar3[8] = fVar1;
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 0x10;
      pfVar3[9] = (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                   *(float *)(param_2 + 0x28) - *(float *)(param_2 + 0x28)) -
                  *(float *)(param_2 + 0x24);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      uVar2 = DAT_089da120 >> 0x10;
      fVar1 = *(float *)(param_2 + 0x1c);
      fVar6 = *(float *)(param_2 + 0x18);
      pfVar3[0xb] = 1.0;
      pfVar3[10] = fVar6 + (((float)(uVar2 & 0x7fff) / 32767.0) * 2.0 * fVar1 - fVar1);
      pfVar3 = pfVar3 + 0x10;
    } while (uVar5 < local_60);
  }
  return;
}

