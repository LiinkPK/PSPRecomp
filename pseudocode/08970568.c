/* Entry 0x08970568 | file offset 0x0016D540 | FUN_08970568 | bytes 556 */

int FUN_08970568(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar4 = *(int *)(param_2 + 0x88);
  iVar5 = *(int *)(param_2 + 0x8c);
  if (*(int *)(iVar5 + 0x3c) == 0) {
    return -1;
  }
  if (*(short *)(iVar4 + 0xe) != 0) {
    return -1;
  }
  if (param_3 < 1) {
    if (-1 < param_3) {
      if (*(char *)(*(int *)(iVar4 + 0x1cc) + 10) == '\x03') {
        uVar6 = vone_s();
        auVar2._12_4_ = uVar6;
        auVar2._8_4_ = param_5[2];
        auVar2._4_4_ = param_5[1];
        auVar2._0_4_ = *param_5;
        vtfm4_q(*(undefined1 (*) [64])(iVar4 + 0x50),auVar2);
        param_4 = FUN_089701a8(2,0);
      }
      else {
        param_4 = (int)*(short *)(iVar4 + 400);
      }
      goto LAB_089706e8;
    }
  }
  else if (param_3 == 3) {
    uVar6 = vone_s();
    auVar1._12_4_ = uVar6;
    auVar1._8_4_ = param_5[2];
    auVar1._4_4_ = param_5[1];
    auVar1._0_4_ = *param_5;
    vtfm4_q(*(undefined1 (*) [64])(iVar4 + 0x50),auVar1);
    param_4 = FUN_089701a8(2,0);
    goto LAB_089706e8;
  }
  iVar3 = (int)(char)(&DAT_089da2fc)[param_3];
  if (iVar3 == 0) {
    param_4 = 0;
  }
  else if (iVar3 <= param_4) {
    param_4 = iVar3 + -1;
  }
  param_4 = (uint)*(ushort *)(&DAT_089da28c + (char)(&DAT_089da2e4)[param_3] * 2) +
            (int)(char)(&DAT_089da2f0)[param_3] + param_4;
LAB_089706e8:
  if (param_4 < 0) {
    param_4 = -1;
  }
  else {
    iVar3 = (&DAT_09b6f998)[param_4];
    if (iVar3 == 0) {
      (&DAT_09b6f998)[param_4] = param_1;
      (&DAT_09b6f498)[param_4] = param_1;
      *param_1 = 0;
    }
    else {
      *(int **)(iVar3 + 4) = param_1;
      (&DAT_09b6f998)[param_4] = param_1;
      *param_1 = iVar3;
    }
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    *(short *)((int)param_1 + 10) = (short)param_4;
    param_1[3] = param_2;
    param_1[4] = iVar4;
    param_1[5] = iVar5;
  }
  return param_4;
}

