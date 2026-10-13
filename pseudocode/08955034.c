/* Entry 0x08955034 | file offset 0x0015200C | FUN_08955034 | bytes 1024 */

void FUN_08955034(int param_1,undefined4 param_2,float *param_3,float *param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_a0;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_74;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  pfVar3 = (float *)(param_1 + 4);
  if (param_5 == '\0') {
    fVar4 = *(float *)(param_1 + 8);
    fVar6 = *(float *)(param_1 + 0xc);
    fVar5 = *(float *)(param_1 + 0x10);
    *param_3 = *pfVar3;
    param_3[1] = fVar4;
    param_3[2] = fVar6;
    param_3[3] = fVar5;
  }
  else if (*(char *)(param_1 + 0x14) == '\0') {
    fVar4 = *(float *)(param_1 + 8);
    fVar6 = *(float *)(param_1 + 0xc);
    fVar5 = *(float *)(param_1 + 0x10);
    *param_3 = *pfVar3;
    param_3[1] = fVar4;
    param_3[2] = fVar6;
    param_3[3] = fVar5;
  }
  else {
    local_d0 = 0x3f800000;
    local_cc = 0x3f800000;
    local_c8 = 0x3f800000;
    local_c4 = 0x3f800000;
    uVar1 = FUN_08955434(param_2,param_4 + 1);
    fVar4 = *param_4;
    if (0.0 < fVar4) {
      local_84 = 0;
      local_74 = 0;
      local_50 = 0;
      while( true ) {
        FUN_089554a4(param_1,param_2,&local_c0,&local_d0,param_4 + 1);
        local_a0 = local_c0 - *(float *)(param_1 + 4);
        local_8c = local_bc - *(float *)(param_1 + 8);
        local_88 = local_b8 - *(float *)(param_1 + 0xc);
        fVar5 = local_a0 * local_a0 + local_8c * local_8c + local_88 * local_88;
        if (fVar5 == 0.0) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        local_5c = local_a0 * local_a0 + local_8c * local_8c + local_88 * local_88;
        if (local_5c == 0.0) {
          fVar7 = 0.0;
          fVar6 = 0.0;
          local_5c = 0.0;
        }
        else {
          local_5c = SQRT(local_5c);
          fVar7 = local_a0 / local_5c;
          fVar6 = local_8c / local_5c;
          local_5c = local_88 / local_5c;
        }
        local_4c = local_50;
        if (fVar4 < fVar5) break;
        *pfVar3 = local_c0;
        *(float *)(param_1 + 8) = local_bc;
        fVar4 = fVar4 - fVar5;
        *(float *)(param_1 + 0xc) = local_b8;
        *(undefined4 *)(param_1 + 0x10) = local_b4;
        local_90 = local_a0;
        local_60 = local_a0;
        local_58 = local_88;
        local_54 = local_8c;
        iVar2 = FUN_0895563c(param_1,param_4,uVar1);
        if ((iVar2 == 0) || (fVar4 <= 0.0)) goto LAB_089553c0;
      }
      fVar4 = *param_4;
      *pfVar3 = *(float *)(param_1 + 4) + fVar7 * fVar4;
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + fVar6 * fVar4;
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + local_5c * fVar4;
      *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
    }
LAB_089553c0:
    fVar4 = *(float *)(param_1 + 8);
    fVar6 = *(float *)(param_1 + 0xc);
    fVar5 = *(float *)(param_1 + 0x10);
    *param_3 = *pfVar3;
    param_3[1] = fVar4;
    param_3[2] = fVar6;
    param_3[3] = fVar5;
  }
  return;
}

