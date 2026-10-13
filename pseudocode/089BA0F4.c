/* Entry 0x089BA0F4 | file offset 0x001B70CC | FUN_089ba0f4 | bytes 40 */

undefined4 * FUN_089ba0f4(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = vsat0_q(*param_2);
  uVar2 = viim_s(0xff);
  auVar1 = vscl_q(auVar1,uVar2);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar2 = vi2uc_q(auVar1);
  *param_1 = uVar2;
  return param_1;
}

