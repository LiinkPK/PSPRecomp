/* Entry 0x08908CD0 | file offset 0x00105CA8 | FUN_08908cd0 | bytes 96 */

bool FUN_08908cd0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0890345c();
  if (iVar1 == 1) {
    FUN_089359a4(param_1 + 0x240,param_2);
    FUN_08908fdc(param_1,1);
  }
  return iVar1 == 1;
}

