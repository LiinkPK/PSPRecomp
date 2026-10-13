/* Entry 0x089A47A4 | file offset 0x001A177C | FUN_089a47a4 | bytes 40 */

undefined4 FUN_089a47a4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = vcst_s(5);
  uVar1 = vmul_s(param_1,uVar1);
  uVar1 = vsin_s(uVar1);
  return uVar1;
}

