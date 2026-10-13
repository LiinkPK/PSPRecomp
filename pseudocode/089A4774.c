/* Entry 0x089A4774 | file offset 0x001A174C | FUN_089a4774 | bytes 48 */

undefined4 FUN_089a4774(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = vlog2_s(param_1);
  uVar1 = vmul_s(uVar1,param_2);
  uVar1 = vexp2_s(uVar1);
  return uVar1;
}

