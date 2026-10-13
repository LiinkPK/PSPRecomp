/* Entry 0x08844068 | file offset 0x00041040 | FUN_08844068 | bytes 144 */

void FUN_08844068(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar1,0xffffffff,95000,FUN_08844f84,"ExecTask");
  uVar1 = FUN_088820d8(0x41000);
  *param_1 = uVar1;
  uVar1 = FUN_0885c40c(uVar1,0x41000,"OBJDATA",0x10);
  param_1[1] = uVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

