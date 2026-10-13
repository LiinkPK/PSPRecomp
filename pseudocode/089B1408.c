/* Entry 0x089B1408 | file offset 0x001AE3E0 | FUN_089b1408 | bytes 108 */

undefined4 FUN_089b1408(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_089b0c0c(param_1,0x83,0);
  if (iVar1 == 0) {
    iVar1 = FUN_089b0c0c(param_1,0x82,0);
  }
  uVar2 = FUN_089b0cb0(iVar1);
  return uVar2;
}

