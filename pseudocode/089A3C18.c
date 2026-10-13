/* Entry 0x089A3C18 | file offset 0x001A0BF0 | FUN_089a3c18 | bytes 40 */

undefined4 FUN_089a3c18(undefined1 (*param_1) [12],undefined1 (*param_2) [12])

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  
  auVar1 = vsub_t(*param_1,*param_2);
  uVar2 = vdot_t(auVar1,auVar1);
  uVar2 = vsqrt_s(uVar2);
  return uVar2;
}

