/* Entry 0x0887AC24 | file offset 0x00077BFC | FUN_0887ac24 | bytes 76 */

bool FUN_0887ac24(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    param_1[1] = param_2;
    uVar1 = FUN_0887a898();
    *param_1 = uVar1;
    FUN_0887a6a0(param_1[1]);
  }
  return iVar2 == 0;
}

