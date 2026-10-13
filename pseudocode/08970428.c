/* Entry 0x08970428 | file offset 0x0016D400 | FUN_08970428 | bytes 320 */

int FUN_08970428(int param_1,uint param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  
  if (param_1 == 2) {
    uVar3 = vone_s();
    auVar1._12_4_ = uVar3;
    auVar1._8_4_ = param_3[2];
    auVar1._4_4_ = param_3[1];
    auVar1._0_4_ = *param_3;
    auVar1 = vtfm4_q(*(undefined1 (*) [64])(DAT_09b6f470 + 0x170),auVar1);
    uVar5 = vcmp_s(8,auVar1._12_4_,*(undefined4 *)*(undefined1 (*) [64])(DAT_09b6f470 + 0x170));
    if ((uVar5 & 1) == 0) {
      fVar4 = (float)vdiv_s(auVar1._8_4_,auVar1._12_4_);
    }
    else {
      fVar4 = (float)vzero_s();
    }
    if (fVar4 <= 0.0) {
      iVar2 = -1;
    }
    else {
      fVar4 = 0.99999 - fVar4;
      if (fVar4 <= 0.0) {
        iVar2 = 0;
      }
      else if (0.49999 <= fVar4) {
        iVar2 = 0xff;
      }
      else {
        iVar2 = (int)((fVar4 * 256.0) / 0.49999);
        if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
    }
    if (iVar2 < 0) {
      iVar2 = 0xff;
    }
    iVar2 = iVar2 + 9;
  }
  else {
    if ((int)(uint)*(ushort *)(&DAT_089da2a6 + param_1 * 2) < (int)param_2) {
      param_2 = (uint)*(ushort *)(&DAT_089da2a6 + param_1 * 2);
    }
    iVar2 = *(ushort *)(&DAT_089da28c + param_1 * 2) + param_2;
  }
  return iVar2;
}

