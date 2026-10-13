/* Entry 0x089A47EC | file offset 0x001A17C4 | FUN_089a47ec | bytes 44 */

undefined4 FUN_089a47ec(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = vcst_s(5);
  uVar2 = vmul_s(param_1,uVar2);
  uVar1 = vrot_p(uVar2,1,2);
  uVar2 = vdiv_s((int)((ulonglong)uVar1 >> 0x20),(int)uVar1);
  return uVar2;
}

