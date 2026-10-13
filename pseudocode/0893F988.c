/* Entry 0x0893F988 | file offset 0x0013C960 | FUN_0893f988 | bytes 76 */

int FUN_0893f988(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  iVar2 = 0;
  local_10 = param_1;
  while (iVar1 = FUN_0893f9d4(&local_10), iVar1 != 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

