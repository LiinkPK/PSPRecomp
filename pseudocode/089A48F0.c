/* Entry 0x089A48F0 | file offset 0x001A18C8 | FUN_089a48f0 | bytes 56 */

uint FUN_089a48f0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = vsat0_q(*param_1);
  uVar2 = viim_s(0xf);
  auVar1 = vscl_q(auVar1,uVar2);
  auVar1 = vf2iz_q(auVar1,0);
  return auVar1._0_4_ & 0xf | (auVar1._4_4_ & 0xf) << 4 | (auVar1._8_4_ & 0xf) << 8 |
         (auVar1._12_4_ & 0xf) << 0xc;
}

