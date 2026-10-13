/* Entry 0x08953A50 | file offset 0x00150A28 | FUN_08953a50 | bytes 608 */

void FUN_08953a50(undefined4 param_1,uint *param_2,undefined4 param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  float fVar5;
  float fVar6;
  
  if ((*param_2 & 1) == 0) {
    bVar2 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    fVar6 = *(float *)param_4[2];
    uVar3 = 0;
    pauVar4 = param_4 + 1;
    fVar5 = (float)*(int *)(param_4[2] + 4);
    if (*(int *)(param_4[2] + 4) < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (fVar5 <= fVar6) {
      uVar3 = 1;
      fVar5 = (float)*(int *)(param_4[2] + 8);
      if (*(int *)(param_4[2] + 8) < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      if (fVar5 <= fVar6) {
        uVar3 = 3;
        fVar5 = (float)*(int *)(param_4[2] + 0xc);
        if (*(int *)(param_4[2] + 0xc) < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        if (fVar6 < fVar5) {
          uVar3 = 2;
        }
      }
    }
    if (*(uint *)(param_4[3] + 4) != uVar3) {
      if (uVar3 < 2) {
        if (uVar3 == 0) {
          if (*(int *)(param_4[3] + 4) == 2) {
            FUN_089540d4(param_3,param_4);
            auVar1 = vadd_q(*param_4,*pauVar4);
            *(int *)*param_4 = auVar1._0_4_;
            *(int *)(*param_4 + 4) = auVar1._4_4_;
            *(int *)(*param_4 + 8) = auVar1._8_4_;
            *(int *)(*param_4 + 0xc) = auVar1._12_4_;
          }
          *(undefined4 *)param_4[1] = 0;
          *(undefined4 *)(param_4[1] + 4) = 0;
          *(undefined4 *)(param_4[1] + 8) = 0;
          *(undefined4 *)(param_4[1] + 0xc) = 0;
        }
        else {
          FUN_089540d4(param_3,param_4);
        }
      }
      else if (uVar3 < 3) {
        if (*(int *)(param_4[3] + 4) == 0) {
          FUN_0895415c(param_3,param_4);
          auVar1 = vadd_q(*param_4,*pauVar4);
          *(int *)*param_4 = auVar1._0_4_;
          *(int *)(*param_4 + 4) = auVar1._4_4_;
          *(int *)(*param_4 + 8) = auVar1._8_4_;
          *(int *)(*param_4 + 0xc) = auVar1._12_4_;
        }
        *(undefined4 *)param_4[1] = 0;
        *(undefined4 *)(param_4[1] + 4) = 0;
        *(undefined4 *)(param_4[1] + 8) = 0;
        *(undefined4 *)(param_4[1] + 0xc) = 0;
      }
      else if (uVar3 < 4) {
        FUN_0895415c(param_3,param_4);
      }
      *(uint *)(param_4[3] + 4) = uVar3;
    }
    auVar1 = vadd_q(*param_4,*pauVar4);
    *(int *)*param_4 = auVar1._0_4_;
    *(int *)(*param_4 + 4) = auVar1._4_4_;
    *(int *)(*param_4 + 8) = auVar1._8_4_;
    *(int *)(*param_4 + 0xc) = auVar1._12_4_;
    fVar6 = *(float *)(param_2[0x22] + 0x160) * 0.5 + fVar6;
    *(float *)param_4[2] = fVar6;
    fVar5 = (float)*(int *)param_4[3];
    if (*(int *)param_4[3] < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (fVar5 <= fVar6) {
      *(undefined4 *)param_4[2] = 0;
    }
  }
  return;
}

