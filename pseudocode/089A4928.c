/* Entry 0x089A4928 | file offset 0x001A1900 | FUN_089a4928 | bytes 72 */

uint FUN_089a4928(float param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined4 uVar4;
  
  auVar2 = vsat0_q(*param_2);
  uVar4 = viim_s(0x1f);
  auVar1 = vscl_t(auVar2._0_12_,uVar4);
  auVar1 = vf2iz_t(auVar1,0);
  uVar3 = 0x8000;
  if (*(float *)(*param_2 + 0xc) <= param_1) {
    uVar3 = 0;
  }
  return auVar1._0_4_ & 0x801f | (auVar1._4_4_ & 0x1f) << 5 | (auVar1._8_4_ & 0x1f) << 10 | uVar3;
}

