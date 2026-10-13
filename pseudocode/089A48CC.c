/* Entry 0x089A48CC | file offset 0x001A18A4 | FUN_089a48cc | bytes 36 */

undefined4 FUN_089a48cc(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = vsat0_q(*param_1);
  uVar2 = viim_s(0xff);
  auVar1 = vscl_q(auVar1,uVar2);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar2 = vi2uc_q(auVar1);
  return uVar2;
}

