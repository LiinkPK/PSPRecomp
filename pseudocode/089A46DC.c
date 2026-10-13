/* Entry 0x089A46DC | file offset 0x001A16B4 | FUN_089a46dc | bytes 40 */

undefined4 FUN_089a46dc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = vcst_s(5);
  uVar1 = vmul_s(param_1,uVar1);
  uVar1 = vcos_s(uVar1);
  return uVar1;
}

