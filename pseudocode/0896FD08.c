/* Entry 0x0896FD08 | file offset 0x0016CCE0 | FUN_0896fd08 | bytes 128 */

float FUN_0896fd08(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  
  uVar2 = vone_s();
  auVar1._12_4_ = uVar2;
  auVar1._8_4_ = *(undefined4 *)(param_1 + 0x38);
  auVar1._4_4_ = *(undefined4 *)(param_1 + 0x34);
  auVar1._0_4_ = *(undefined4 *)(param_1 + 0x30);
  auVar1 = vtfm4_q(*DAT_089da284,auVar1);
  uVar4 = vcmp_s(8,auVar1._12_4_,*(undefined4 *)*DAT_089da284);
  if ((uVar4 & 1) == 0) {
    fVar3 = (float)vdiv_s(auVar1._8_4_,auVar1._12_4_);
  }
  else {
    fVar3 = (float)vzero_s();
  }
  if (*(float *)(param_2 + 0x3c) <= 0.0) {
    fVar3 = -fVar3;
  }
  else {
    fVar3 = *(float *)(param_2 + 0x38) / *(float *)(param_2 + 0x3c) - fVar3;
  }
  return fVar3;
}

