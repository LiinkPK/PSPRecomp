/* Entry 0x0889E258 | file offset 0x0009B230 | FUN_0889e258 | bytes 164 */

void FUN_0889e258(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  float fVar3;
  undefined1 (*pauVar4) [12];
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  auVar1 = vzero_t();
  uVar8 = auVar1._0_4_;
  uVar9 = auVar1._4_4_;
  uVar10 = auVar1._8_4_;
  uVar6 = 0;
  uVar5 = *(uint *)(param_2 + 0x24) >> 0x10;
  if (uVar5 != 0) {
    pauVar4 = (undefined1 (*) [12])
              ((*(uint *)(param_2 + 0x24) & 0xffff) * 0xc + param_3 | 0x40000000);
    fVar3 = 0.001;
    do {
      fVar7 = (float)FUN_0889e2fc(param_1,uVar6,3);
      if (fVar3 < fVar7) {
        auVar1 = vscl_t(*pauVar4,fVar7);
        auVar2._8_4_ = uVar10;
        auVar2._4_4_ = uVar9;
        auVar2._0_4_ = uVar8;
        auVar1 = vadd_t(auVar2,auVar1);
        uVar8 = auVar1._0_4_;
        uVar9 = auVar1._4_4_;
        uVar10 = auVar1._8_4_;
      }
      uVar6 = uVar6 + 1;
      pauVar4 = pauVar4 + 1;
    } while (uVar6 != uVar5);
  }
  *param_4 = uVar8;
  param_4[1] = uVar9;
  param_4[2] = uVar10;
  return;
}

